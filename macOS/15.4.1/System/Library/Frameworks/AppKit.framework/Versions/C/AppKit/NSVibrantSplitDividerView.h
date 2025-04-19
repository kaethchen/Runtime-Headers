@class NSSplitDividerView, NSVisualEffectView;

@interface NSVibrantSplitDividerView : NSSplitDividerView {
    NSSplitDividerView *_innerDividerView;
    NSVisualEffectView *_effectView;
}

@property long long blendingMode;

- (void)dealloc;
- (void)setOrientation:(long long)a0;
- (void)setStyle:(long long)a0;
- (id)_preferredAppearance;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStyle:(long long)a0 orientation:(long long)a1;
- (BOOL)isOpaque;
- (BOOL)isVibrantDivider;
- (void)setBackgroundColor:(id)a0;
- (void)setThickness:(id)a0;
- (void)updateLayer;

@end
