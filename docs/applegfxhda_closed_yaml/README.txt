This archive is a closed YAML documentation set for the uploaded AppleGFXHDA-related decompilations.

Closure claim:
- Graphics event source is covered by Intel CFL/KBL framebuffer decompiles plus IOGraphicsFamily baseline.
- Audio superclass behavior is covered by IOAudioFamily.
- AppleGFXHDA kernel stack is covered by AppleGFXHDA_decompiled.c.
- User-space HAL side is covered by AppleGFXHDAHALPlugIn_decompiled.c.

Interpretation rules:
- "confirmed" content comes directly from named methods and visible call edges.
- "inferred_but_grounded" means the decompiler kept only vtable slots, thunk stubs or partial control flow; the transition is still tied to named surrounding methods and not invented.
- Service lifecycle is modeled as:
  graphics/display state -> controller association/event handling -> driver policy -> engine activation/runtime -> HAL exposure.

Reading order:
1) 00_package_overview.yaml
2) cross_layer/closure_map.yaml
3) master_callgraph.yaml
4) classes/AppleGFXHDADriver.yaml
5) classes/AppleGFXHDAController.yaml
6) classes/AppleGFXHDAEngine.yaml
7) classes/AppleGFXHDAEngineOutputDP.yaml
8) cross_layer/IOAudioEngine_baseline.yaml
9) cross_layer/IntelFramebuffer_audio_bridge.yaml
10) cross_layer/AppleGFXHDAHALPlugIn.yaml
