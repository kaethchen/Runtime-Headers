@protocol GGLLayerDelegate;

@interface GGLOpenGLLayer : CAOpenGLLayer <GGLLayer> {
    struct shared_ptr<ggl::OGLDevice> { struct OGLDevice *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
    struct unique_ptr<ggl::OGLContext, std::default_delete<ggl::OGLContext>> { struct __compressed_pair<ggl::OGLContext *, std::default_delete<ggl::OGLContext>> { struct OGLContext *__value_; } __ptr_; } _context;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _texture;
    int _framebuffer;
    BOOL _readPixels;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } backingSize;
@property (readonly) int backingFormat;
@property (readonly, nonatomic) void *texture;
@property (weak) id<GGLLayerDelegate> renderDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDevice:(struct shared_ptr<ggl::OGLDevice> { struct OGLDevice *x0; struct __shared_weak_count *x1; })a0;
- (void)layoutSublayers;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (struct _CGLContextObject { } *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject { } *)a0;
- (struct _CGLPixelFormatObject { } *)copyCGLPixelFormatForDisplayMask:(unsigned int)a0;
- (void)drawInCGLContext:(struct _CGLContextObject { } *)a0 pixelFormat:(struct _CGLPixelFormatObject { } *)a1 forLayerTime:(double)a2 displayTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a3;
- (void)releaseCGLContext:(struct _CGLContextObject { } *)a0;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject { } *)a0;
- (void)didEnterBackground;
- (void)_deleteBuffers;
- (void)_updateTexture;
- (void)onTimerFired:(double)a0;
- (void)onTimerFired:(double)a0 presentAtTime:(double)a1;

@end
