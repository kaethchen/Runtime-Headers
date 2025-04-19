@class NUColorSpace;
@protocol NUMutablePurgeableBufferImage;

@interface NUTiledProviderCache : NUProviderCache {
    id<NUMutablePurgeableBufferImage> _cachedTiledImage;
    struct { long long width; long long height; } _tileSize;
    NUColorSpace *_colorSpace;
}

- (void).cxx_destruct;
- (id)initWithImage:(id)a0;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;

@end
