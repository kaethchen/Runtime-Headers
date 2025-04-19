@interface QCSCN_CARendererRegistry : NSObject {
    struct __CFDictionary { } *_registry;
}

+ (id)sharedRegistry;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)rendererDidChange:(id)a0;
- (id)CARendererForCGLContextObj:(void *)a0 layer:(id)a1;
- (void)removeCARenderersForCGLContextObj:(void *)a0;
- (void)removeCARenderersForLayer:(id)a0;

@end
