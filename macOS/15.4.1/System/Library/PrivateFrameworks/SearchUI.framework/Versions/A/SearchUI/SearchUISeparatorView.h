@interface SearchUISeparatorView : TLKProminenceView

@property (nonatomic) double separatorHeight;

+ (id)separatorColorForAppearance:(id)a0;
+ (unsigned long long)separatorProminenceForAppearance:(id)a0;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;

@end
