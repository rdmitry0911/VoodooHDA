# AppleGFXHDA lifecycle/state-machine YAML set

This archive contains reconstructed lifecycle and state-machine documents for the uploaded macOS audio decompilations:

- AppleGFXHDA_decompiled.c
- AppleGFXHDAHALPlugIn_decompiled.c

Methodology:
- extracted symbolic function names from the decompiles
- traced explicit startup / shutdown / power / notification paths
- separated **confirmed** behavior from **inferred** behavior where class names or vtable targets were stripped
- focused on modules materially participating in audio bring-up and runtime

Conventions:
- "confirmed" means directly grounded in a visible decompiled function body
- "inferred" means reconstructed from surrounding calls, fields, or exported entrypoints
- state numbers on Node/Engine/PathSet follow the observed decompiled API, not guessed CoreAudio labels

Caveats:
- many vtable calls remain unnamed
- some vendor/model subclasses exist but only the semantically distinct ones are documented separately
- the userspace HAL bundle is heavily stripped, so object role names are behavioral reconstructions

Recommended reading order:
1. 00_overall_boot_audio_init_sequence.yaml
2. 03_AppleGFXHDAController.lifecycle.yaml
3. 01_AppleGFXHDADriver.lifecycle.yaml
4. 04_AppleGFXHDAEngine.power_and_lifecycle.yaml
5. HAL plugin docs (10 and 11)
