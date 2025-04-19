@class VFXView, CALayer, _TtC3VFX9VFXEffect, _TtC3VFX8VFXScene;
@protocol MTLDevice;

@interface WBSScribbleEffectView : NSView {
    id<MTLDevice> _device;
    CALayer *_imageLayer;
    BOOL _sceneIsSetUp;
    _TtC3VFX9VFXEffect *_vfxEffect;
    _TtC3VFX8VFXScene *_vfxScene;
    VFXView *_vfxView;
}

+ (void)prewarm;
+ (void)discardPrewarmedContent;
+ (struct CGImage { } *)imageForScribbleEffectWithElementSnapshot:(struct CGImage { } *)a0 elementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 webViewSize:(struct CGSize { double x0; double x1; })a2 webViewScale:(double)a3;
+ (BOOL)_prewarmSceneAndEffect;

- (void).cxx_destruct;
- (id)initWithImage:(struct CGImage { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startEffectWithCompletion:(id /* block */)a0;
- (void)_bindAspectRatio;
- (BOOL)_loadSceneAndEffect;
- (BOOL)_loadTextureWithImage:(struct CGImage { } *)a0;
- (void)_setUpSceneWithImage:(struct CGImage { } *)a0;

@end
