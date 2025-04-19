@interface PXImageQueueLayer : CALayer {
    struct _CAImageQueue { } *_imageQueue;
    struct __CVBuffer { } *_pixelBuffer;
    unsigned long long _pixelBufferId;
}

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)dealloc;
- (id)init;
- (void)display;
- (void)_commonInit;
- (id)initWithLayer:(id)a0;

@end
