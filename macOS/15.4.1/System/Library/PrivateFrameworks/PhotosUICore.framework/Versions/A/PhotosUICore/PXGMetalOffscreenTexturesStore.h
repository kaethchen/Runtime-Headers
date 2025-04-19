@class NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface PXGMetalOffscreenTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_queue_loadedTextures;
    NSMutableSet *_queue_usedTextures;
    NSHashTable *_queue_aliveTextures;
    id<MTLDevice> _queue_device;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _queue_size;
    long long _queue_sampleCount;
    unsigned long long _queue_pixelFormat;
}

- (id)init;
- (void).cxx_destruct;
- (id)_queue_checkoutOffscreenTextureWithSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 pixelFormat:(unsigned long long)a1;
- (id)_queue_loadTextureWithSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 pixelFormat:(unsigned long long)a1;
- (void)_queue_preloadTexturesCount:(long long)a0;
- (void)_queue_removeAllTextures;
- (void)_queue_willRenderFrameWithDevice:(id)a0 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 sampleCount:(long long)a2 pixelFormat:(unsigned long long)a3 preloadTexturesCount:(long long)a4;
- (id)checkoutOffscreenTextureWithSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 pixelFormat:(unsigned long long)a1;
- (void)removeAllTextures;
- (void)willRenderFrameWithDevice:(id)a0 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 sampleCount:(long long)a2 pixelFormat:(unsigned long long)a3 preloadTexturesCount:(long long)a4;

@end
