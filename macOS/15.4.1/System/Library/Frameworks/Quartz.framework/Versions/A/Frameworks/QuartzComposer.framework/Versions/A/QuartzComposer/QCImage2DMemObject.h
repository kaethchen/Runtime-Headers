@class QCPixelFormat, QCImageBuffer;

@interface QCImage2DMemObject : QCMemObject {
    void /* function */ *_backingCallback;
    void *_backingInfo;
    void *_hostPtr;
    void *_unused3[4];
}

@property (readonly) unsigned long long pixelsWide;
@property (readonly) unsigned long long pixelsHigh;
@property (readonly) QCPixelFormat *pixelFormat;
@property (readonly) QCImageBuffer *imageBuffer;
@property (readonly) QCImageBuffer *backing;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (BOOL)attached;
- (unsigned long long)byteSize;
- (void)endUpdateStream;
- (BOOL)_readbackImage;
- (BOOL)beginUpdateStream;
- (void)finalize_QCImage2DMemObject;
- (id)initWithContext:(id)a0 format:(id)a1 hostPtr:(void *)a2 releaseCallback:(void /* function */ *)a3 releaseInfo:(void *)a4 pixelsWide:(unsigned long long)a5 pixelsHigh:(unsigned long long)a6 options:(id)a7;
- (id)initWithContext:(id)a0 format:(id)a1 pixelsWide:(unsigned long long)a2 pixelsHigh:(unsigned long long)a3 options:(id)a4;
- (id)initWithContext:(id)a0 imageBuffer:(id)a1 options:(id)a2;

@end
