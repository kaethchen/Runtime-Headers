@interface NSSegmentItemLabelView : NSTextField

+ (Class)cellClass;

- (int)_defaultVibrancyBlendMode;
- (id)_preferredAppearance;
- (int)_vibrancyBlendMode;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)viewDidChangeEffectiveAppearance;

@end
