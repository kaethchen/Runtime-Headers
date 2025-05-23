@interface VFXSourceRendererRegistry : NSObject {
    struct __CFDictionary { } *_registry;
}

+ (id)sharedRegistry;

- (void)dealloc;
- (id)init;
- (void)rendererDidChange:(id)a0;
- (void)removeSourceRenderersForSource:(id)a0;
- (id)sourceRendererForEngineContext:(struct __CFXEngineContext { } *)a0 source:(id)a1 textureSource:(id)a2 targetTexture:(id)a3;

@end
