@class PXCuratedLibraryLabelConfiguration;

@interface PXCuratedLibraryLabel : UXLabel <PXGReusableView>

@property (copy, nonatomic) PXCuratedLibraryLabelConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 withConfiguration:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)becomeReusable;

@end
