# Руководство По HDMI Диагностике

Это руководство описывает debug-only инструменты диагностики HDMI/DP, доступные в debug-сборках `VoodooHDA.kext` и `VoodooHDA.prefPane`.

Диагностические контролы находятся на вкладке `Debug` в PrefPane и доступны только если выполнены оба условия:
- установленный `VoodooHDA.kext` собран с `VOODOO_HDA_DEBUG_BUILD=1`
- установленный `VoodooHDA.prefPane` собран с `VOODOO_HDA_DEBUG_BUILD=1`

## Для Чего Нужны Эти Инструменты

Диагностические переключатели разбивают HDMI playback path на отдельные участки, чтобы за один прогон понять, где именно ломается тракт:
- DMA ring / BDL / чтение буфера видеокартой
- software buffer service
- clip / format conversion
- legacy Voodoo DSP path
- erase / overwrite path

Текущие контролы:
- `Enable diagnostic mode`
- `Inject tone in mix buffer`
- `Inject tone direct to sample buffer`
- `Prime full DMA buffer on start`
- `Freeze buffer after first fill`
- `Skip eraseOutputSamples`
- `Bypass Voodoo processing`
- `Skip framebuffer ELD`
- `Force any-framebuffer ELD`
- `Force ATI ELD verbs`
- `Skip framebuffer audio pipe`
- `Dump GPU AZ/MMIO on stream`
- `Force standard HDA/DIP path`
- `Force ATI vendor HDMI path`
- `Verbose logging`

`Inject tone direct to sample buffer` имеет приоритет над `Inject tone in mix buffer`.

## Рекомендуемый Порядок Тестов

Для всех тестов используйте один и тот же HDMI/DP playback channel.

### 1. Базовая Проверка Transport И DMA

Включить:
- `Enable diagnostic mode`
- `Inject tone direct to sample buffer`
- `Prime full DMA buffer on start`
- `Freeze buffer after first fill`

Ожидаемый результат:
- должен стабильно звучать синус
- высота тона должна зависеть от sample rate
- поведение левого/правого канала должно соответствовать выбранному формату, если аппаратный путь асимметричен

Интерпретация:
- если это не работает, проблема находится ниже обычного audio engine fill path
- подозреваемые: геометрия DMA ring, BDL programming, stream start, HDMI transport или аппаратно-специфичное поведение HDMI

### 2. Проверка Buffer Service Без Фиксации Буфера

Выключить:
- `Freeze buffer after first fill`

Оставить включённым:
- `Enable diagnostic mode`
- `Inject tone direct to sample buffer`
- `Prime full DMA buffer on start`

Ожидаемый результат:
- синус продолжает звучать, но буфер уже обслуживается повторно

Интерпретация:
- если шаг 1 работает, а этот ломается, наиболее вероятна проблема в buffer servicing cadence или overwrite timing

### 3. Проверка Erase Path

Начиная с шага 2, включить:
- `Skip eraseOutputSamples`

Интерпретация:
- если звук стабилизируется только с `Skip eraseOutputSamples`, драйвер с высокой вероятностью затирает ещё не проигранные данные

### 4. Проверка Clip И Conversion

Выключить:
- `Inject tone direct to sample buffer`

Включить:
- `Inject tone in mix buffer`

Оставить:
- `Enable diagnostic mode`

Интерпретация:
- если direct injection работает, а mix injection нет, поломка находится выше DMA, но ниже client stream
- подозреваемые: `clipOutputSamples()`, format conversion, sample packing, frame offset math или clip-position handling

### 5. Проверка Legacy Voodoo Processing

Начиная с шага 4, включить:
- `Bypass Voodoo processing`

Интерпретация:
- если сигнал становится чистым только с этим флагом, искажение находится внутри legacy Voodoo processing path
- подозреваемые: boost, stereo enhancement или другая in-place обработка сэмплов

### 6. Runtime Logging

`Verbose logging` используйте только во время воспроизведения проблемы.

Рекомендуемый порядок:
- начинать с `Level 0`
- обычно достаточно `Level 1` или `Level 2`
- более высокие уровни включать только на короткий прогон, потому что они создают лишний лог-шум и дополнительное timing pressure

### 7. Проверка Источника ELD

Начните с обычного воспроизведения, без tone injection, и включайте по одному:
- `Skip framebuffer ELD`
- `Force any-framebuffer ELD`
- `Force ATI ELD verbs`

Интерпретация:
- если звук появляется только с `Skip framebuffer ELD`, значит framebuffer-инъекция ELD, скорее всего, неправильна для этого sink или pin mapping
- если звук появляется только с `Force any-framebuffer ELD`, значит точное сопоставление framebuffer→pin неверно, но на другом коннекторе уже есть рабочий ELD
- если помогает только `Force ATI ELD verbs`, значит ломается framebuffer ELD path, а ATI verb path на этой карте здоровее

### 8. Проверка Audio Pipe

Включить:
- `Skip framebuffer audio pipe`

Интерпретация:
- если ничего не меняется, путь включения framebuffer audio pipe, вероятно, не корень проблемы
- если поведение резко меняется, значит ветка Apple framebuffer `kConnectionEnableAudio` участвует в сбое

### 9. Проверка HDMI Programming Path

Используйте обычное воспроизведение и попробуйте:
- `Force standard HDA/DIP path`
- `Force ATI vendor HDMI path`

Интерпретация:
- если работает только `Force standard HDA/DIP path`, подозреваем ATI vendor verb path
- если работает только `Force ATI vendor HDMI path`, подозреваем standard HDA DIP path
- если оба режима ломаются одинаково, проблема, вероятно, находится ниже финальной ветки программирования InfoFrame

### 10. Снимок GPU MMIO

Включить:
- `Dump GPU AZ/MMIO on stream`

Использовать только во время воспроизведения проблемы.

Интерпретация:
- драйвер сбросит в лог выбранную GPU register table и текущее состояние AZ/AFMT/DP около stream setup
- это нужно для сравнения рабочей и проблемной карты и для проверки, что драйвер выбрал ожидаемую Polaris/Vega MMIO table

## Быстрая Матрица Диагностики

`Direct tone + prime + freeze` работает:
- HDMI transport и статическое DMA playback живы

`Direct tone + prime + freeze` работает, но без `freeze` воспроизведение ломается:
- проблема в repeated buffer service или overwrite timing

`Direct tone` работает, а `Mix tone` нет:
- сломан clip / conversion / sample layout path

`Mix tone` работает только с `Bypass Voodoo processing`:
- legacy Voodoo DSP path портит сэмплы

`Mix tone` или `Direct tone` работают только с `Skip eraseOutputSamples`:
- erase path затирает ещё живые аудиоданные

Поведение меняется только с `Skip framebuffer ELD` или `Force ATI ELD verbs`:
- проблема в ветке sink-data / ELD

Поведение меняется только с `Skip framebuffer audio pipe`:
- проблема связана с framebuffer audio-pipe enable path

Поведение меняется только с `Force standard HDA/DIP path` или `Force ATI vendor HDMI path`:
- проблема в финальной ветке HDMI programming

Не работает ничего, даже direct tone:
- проблема находится ниже software fill path

## Что Обязательно Добавлять В Лог

При сборе полевого лога всегда указывайте:
- commit id драйвера из лога
- имя выбранного канала и то, это `HDMI` или `DP`
- выбранный путь ELD (`framebuffer`, `any-framebuffer`, `ATI verbs` или `skip framebuffer`)
- выбранный HDMI programming path (`auto`, `standard` или `ATI vendor`)
- sample rate
- bit depth / format
- точный набор diagnostic flags
- был ли тестовый файл коротким или длинным

Для коротких файлов отдельно отмечайте:
- продолжалось ли воспроизведение после конца файла
- двигался ли прогресс в PrefPane
- что именно было слышно: тишина, щелчки, всхлип, burst или непрерывный тон

## Область Применения

Эти инструменты в первую очередь предназначены для изоляции HDMI/DP проблем. Их можно использовать и на analog/SPDIF путях, но максимальная практическая польза сейчас именно для digital playback.
