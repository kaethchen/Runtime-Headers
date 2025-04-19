@class LUI2TintView, LUI2DarkenView;

@interface LUI2TextFieldBackgroundView : LUI2VisualEffectView

@property (retain) LUI2DarkenView *darkenView;
@property (readonly) LUI2TintView *tintView;
@property (weak) id mouseUpTarget;
@property SEL mouseUpAction;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)addSubview:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;

@end
