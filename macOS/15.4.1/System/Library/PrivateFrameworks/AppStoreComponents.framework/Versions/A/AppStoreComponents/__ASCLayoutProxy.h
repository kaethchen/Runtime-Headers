@class NSString, JUTraitCollection;

@interface __ASCLayoutProxy : NSObject {
    void /* unknown type, empty encoding */ base;
}

@property (class, nonatomic, readonly) JUTraitCollection *traitCollectionForMainScreen;

@property (nonatomic, readonly) NSString *description;

+ (id)traitCollectionForView:(id)a0;
+ (double)offerButtonRegularWidthForSize:(id)a0;
+ (double)axOfferButtonHeightForSize:(id)a0;
+ (id)lockupLayoutOfSize:(id)a0 traitCollection:(id)a1 artworkView:(id)a2 headingText:(id)a3 titleText:(id)a4 subtitleText:(id)a5 offerText:(id)a6 offerButton:(id)a7 badge:(id)a8;
+ (struct CGSize { double x0; double x1; })mediumLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })miniLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (double)offerButtonFixedHeightForSize:(id)a0;
+ (double)offerButtonHeightForSize:(id)a0;
+ (id)offerDisclosureLayoutWithDisclosureIndicator:(id)a0;
+ (id)offerEmptyLayoutWithImageView:(id)a0 titleView:(id)a1 subtitleView:(id)a2;
+ (id)offerIconLayoutForSize:(id)a0 imageView:(id)a1 titleView:(id)a2 subtitleView:(id)a3 hasTrailingSubtitle:(BOOL)a4 shouldTopAlign:(BOOL)a5 topPadding:(double)a6 shouldTrailingAlign:(BOOL)a7;
+ (double)offerProgressDiameterForSize:(id)a0;
+ (id)offerTextLayoutForSize:(id)a0 titleBackgroundView:(id)a1 titleView:(id)a2 subtitleView:(id)a3 hasTrailingSubtitle:(BOOL)a4 shouldTopAlign:(BOOL)a5 topPadding:(double)a6 shouldExpandBackground:(BOOL)a7;
+ (id)preferredFontDescriptorForTextStyle:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithLayoutDirectionForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithLayoutDirectionForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutDirection:(long long)a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGSize { double x0; double x1; })smallLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })smallOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (id)traitEnvironmentWithTraitCollection:(id)a0;
+ (id)tvTextPillOverlayWithBackgroundView:(id)a0 textView:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentInsetsInTraitEnvironment:(id)a0;
- (struct CGSize { double x0; double x1; })measuredSizeFittingSize:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;
- (void)placeChildrenRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1;

@end
