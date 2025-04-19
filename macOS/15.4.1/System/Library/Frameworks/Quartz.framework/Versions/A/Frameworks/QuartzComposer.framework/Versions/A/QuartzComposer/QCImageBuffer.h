@class QCPixelFormat;

@interface QCImageBuffer : QCResource {
    unsigned long long _identifier;
    int _status;
    struct CGColorSpace { } *_colorspace;
    QCPixelFormat *_format;
    unsigned long long _width;
    unsigned long long _height;
    BOOL _flipped;
    void *_backing;
    void /* function */ *_backingCallback;
    void *_backingInfo;
    double _cost;
    unsigned long long _cacheRetainCount;
    struct __CFArray { } *_caches;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _cachesMutex;
    void *_unused1[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (unsigned long long)identifier;
- (id)pixelFormat;
- (int)status;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGColorSpace { } *)colorSpace;
- (BOOL)isFlipped;
- (unsigned long long)pixelsHigh;
- (unsigned long long)pixelsWide;
- (BOOL)writeToFile:(id)a0;
- (double)cost;
- (void)setCost:(double)a0;
- (unsigned long long)byteSize;
- (void *)backing;
- (void)_invalidateData;
- (void)_finalize_QCImageBuffer;
- (void /* function */ *)backingReleaseCallback;
- (void *)backingReleaseInfo;
- (BOOL)beginUpdateBuffer:(BOOL)a0;
- (BOOL)beginUpdateBuffer:(BOOL)a0 colorSpace:(struct CGColorSpace { } *)a1;
- (void)cacheRelease:(id)a0;
- (id)cacheRetain:(id)a0;
- (unsigned long long)cacheRetainCount;
- (void)clearBuffer;
- (id)copyWithZone_GCCacheResource:(struct _NSZone { } *)a0;
- (BOOL)didRecycleResource:(id)a0;
- (void)endUpdateBuffer:(BOOL)a0;
- (id)initWithFormat:(id)a0 pixelsWide:(unsigned long long)a1 pixelsHigh:(unsigned long long)a2 options:(id)a3;
- (id)pixelBufferRepresentation;
- (void)removeFromAllCachesExcept:(id)a0;
- (void)setBacking:(void *)a0 releaseCallback:(void /* function */ *)a1 releaseInfo:(void *)a2;
- (void)willRecycleResource:(id)a0;

@end
