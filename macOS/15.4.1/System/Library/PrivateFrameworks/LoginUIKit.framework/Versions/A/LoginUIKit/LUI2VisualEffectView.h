@interface LUI2VisualEffectView : NSVisualEffectView

+ (id)init;

- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)_setMaterialCornerRadius:(double)a0;
- (void)_setUseContinuousCorners:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;

@end
