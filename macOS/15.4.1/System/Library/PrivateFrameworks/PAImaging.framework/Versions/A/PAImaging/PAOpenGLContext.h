@class IPAColorProfile, PAGLFramebuffer, PAOpenGLDevice;

@interface PAOpenGLContext : NSObject {
    double _targetScaleFactor;
    IPAColorProfile *_targetColorProfile;
    unsigned int _threadId;
}

@property (nonatomic) double targetScaleFactor;
@property (retain, nonatomic) IPAColorProfile *targetColorProfile;
@property unsigned int threadID;
@property (readonly, weak, nonatomic) PAOpenGLDevice *device;
@property (readonly, nonatomic) PAGLFramebuffer *framebuffer;
@property (readonly, nonatomic) PAGLFramebuffer *readBuffer;
@property (readonly, nonatomic) PAGLFramebuffer *drawBuffer;
@property (readonly, nonatomic) struct _CGLContextObject { } *CGLContext;
@property (readonly, nonatomic) struct _CGLPixelFormatObject { } *CGLPixelFormat;

+ (id)currentContext;
+ (id)contextWithCGLContext:(struct _CGLContextObject { } *)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)executeBlock:(id /* block */)a0;
- (BOOL)isGeometryProcessingAccelerated;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (BOOL)isFragmentProcessingAccelerated;
- (id)_basicDrawingProgram;
- (id)_basicDrawingProgramInstance;
- (void)_deleteFBOs;
- (id)_simpleDrawingProgram;
- (id)_simpleDrawingProgramInstance;
- (void)drawTextLine:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 flipped:(BOOL)a2;
- (void)drawTexture2DRect:(unsigned int)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isCurrentContext;
- (BOOL)isVertexProcessingAccelerated;
- (void)setupForDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flip:(BOOL)a1;

@end
