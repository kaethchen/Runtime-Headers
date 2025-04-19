@class NSVisualEffectView;

@interface SOInputVibrantView : NSView

@property (retain, nonatomic) NSVisualEffectView *blurView;
@property (nonatomic) BOOL drawBorder;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_commonInitInputLineBackground;
- (void)setToDefaultAppearance;
- (void)setupBlurView;

@end
