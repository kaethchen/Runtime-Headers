@protocol GGLLayerDelegate, CAMetalDrawable;

@interface MetalLayer : CAMetalLayer <GGLLayer> {
    struct shared_ptr<ggl::MetalDevice> { struct MetalDevice *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
    struct shared_ptr<ggl::Texture2D> { struct Texture2D *__ptr_; struct __shared_weak_count *__cntrl_; } _texture;
    struct shared_ptr<ggl::SamplerState> { struct SamplerState *__ptr_; struct __shared_weak_count *__cntrl_; } _samplerState;
    id<CAMetalDrawable> _prevDrawable;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } backingSize;
@property (readonly, nonatomic) BOOL sRGB;
@property (weak) id<GGLLayerDelegate> renderDelegate;
@property (readonly) int backingFormat;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layoutSublayers;
- (void)display;
- (void)didEnterBackground;
- (id)_updateDrawable;
- (void)_createTexture;
- (void)_onTimerFired:(double)a0 withPresent:(id /* block */)a1;
- (id)initWithDevice:(struct shared_ptr<ggl::MetalDevice> { struct MetalDevice *x0; struct __shared_weak_count *x1; })a0 sRGB:(BOOL)a1;
- (void)onTimerFired:(double)a0;
- (void)onTimerFired:(double)a0 presentAtTime:(double)a1;

@end
