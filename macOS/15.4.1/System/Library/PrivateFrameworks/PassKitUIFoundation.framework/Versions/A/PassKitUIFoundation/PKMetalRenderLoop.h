@class CALayer, CAMetalLayer;
@protocol PKMetalRenderLoopDelegate, MTLDevice, CAMetalDrawable;

@interface PKMetalRenderLoop : PKRenderLoop {
    CAMetalLayer *_layer;
    BOOL _drawableSizeDirty;
    id<CAMetalDrawable> _currentDrawable;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (weak, nonatomic) id<PKMetalRenderLoopDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isDrawableAvailable;
- (id)layer;
- (BOOL)framebufferOnly;
- (void)setFramebufferOnly:(BOOL)a0;
- (id)currentDrawable;
- (BOOL)_isForcingPause;
- (void)_didDraw;
- (void)_didInvalidate;
- (void)_willDraw;
- (id)initWithPixelFormat:(unsigned long long)a0 forDevice:(id)a1;

@end
