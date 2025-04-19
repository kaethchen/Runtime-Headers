@class QCCache;

@interface QCProviderImageCache : QCCache {
    QCCache *_imageCache;
    QCCache *_representationCache;
}

- (void)dealloc;
- (void)_collectResourcesForSize;
- (id)_copyCacheWithFunction:(void /* function */ *)a0 userInfo:(void *)a1 userInfoReleaseCallback:(void /* function */ *)a2 md5List:(struct { unsigned char x0[16]; } *)a3 md5Indices:(unsigned long long *)a4 md5Count:(unsigned long long)a5;
- (void)_removeResourceAtIndex:(unsigned long long)a0;
- (void)addResource:(id)a0 withSize:(double)a1 cost:(double)a2 md5List:(struct { unsigned char x0[16]; } *)a3 count:(unsigned long long)a4;
- (id)initWithMaximumSize:(double)a0 maximumResourceAge:(double)a1 options:(id)a2;

@end
