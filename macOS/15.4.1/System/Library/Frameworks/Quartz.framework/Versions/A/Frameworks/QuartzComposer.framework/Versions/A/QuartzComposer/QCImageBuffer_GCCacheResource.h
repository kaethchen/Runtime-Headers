@class QCCGLContext, QCPixelFormat, QCImageBuffer;

@interface QCImageBuffer_GCCacheResource : QCResource {
    QCImageBuffer *_buffer;
    void *_refBuffer;
    QCCGLContext *_refContext;
    QCPixelFormat *_format;
    void *_backing;
    void *_backingInfo;
}

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithImageBuffer:(id)a0;
- (BOOL)purgeable;
- (BOOL)setPurgeable:(BOOL)a0;
- (void /* function */ *)backingReleaseCallback;
- (void *)backingReleaseInfo;
- (void)cacheRelease:(id)a0;
- (id)cacheRetain:(id)a0;
- (unsigned long long)cacheRetainCount;
- (BOOL)didRecycleResource:(id)a0;
- (void)removeFromAllCachesExcept:(id)a0;
- (void)setResourcePool:(id)a0;
- (void)willRecycleResource:(id)a0;

@end
