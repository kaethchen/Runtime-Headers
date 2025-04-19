@class NSObject, VFXWorld, VFXNode, VFXView;
@protocol OS_dispatch_queue;

@interface PUBrushEffectOverlay : NSView {
    VFXWorld *_world;
    VFXView *_vfxView;
    VFXNode *_emitterWand;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)layout;
- (id)initWithTimeScale:(double)a0;
- (void)_layoutSubviews;
- (void)_recycleVFXView;
- (void)setBrushRadius:(double)a0;
- (void)_disableRendersContinuously:(id)a0;
- (void)endEmission;
- (void)loadEffect;
- (void)setBrushPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setMaxEDR:(double)a0;
- (void)setNormalizedBrushPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)startEmission;

@end
