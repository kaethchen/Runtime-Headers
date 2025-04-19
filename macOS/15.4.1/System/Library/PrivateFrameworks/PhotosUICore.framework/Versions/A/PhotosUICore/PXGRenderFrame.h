@interface PXGRenderFrame : NSObject

@property (readonly, nonatomic) long long frameID;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (void)dealloc;
- (id)initWithFrameID:(long long)a0 pixelBuffer:(struct __CVBuffer { } *)a1;

@end
