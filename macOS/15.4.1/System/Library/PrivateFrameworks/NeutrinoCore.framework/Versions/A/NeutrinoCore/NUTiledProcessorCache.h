@class NUColorSpace;
@protocol NUMutablePurgeableSurfaceImage;

@interface NUTiledProcessorCache : NUProcessorCache {
    id<NUMutablePurgeableSurfaceImage> _cachedTiledImage;
    struct { long long width; long long height; } _tileSize;
    NUColorSpace *_colorSpace;
    unsigned long long _textureCacheCount;
}

- (void).cxx_destruct;
- (id)initWithImage:(id)a0;
- (void)_render:(id)a0;

@end
