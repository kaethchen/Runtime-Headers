@class PXExtendedImageConfiguration, PXCuratedLibrarySectionHeaderLayoutSpec, NSFont, NSColor;

@interface PXPhotosSectionHeaderLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) NSColor *dividerColor;
@property (readonly, nonatomic) NSColor *titleColor;
@property (readonly, nonatomic) NSColor *gradientTitleColor;
@property (readonly, nonatomic) NSColor *subtitleColor;
@property (readonly, nonatomic) NSColor *badgeColor;
@property (readonly, nonatomic) NSColor *buttonColor;
@property (readonly, nonatomic) NSFont *titleFont;
@property (readonly, nonatomic) NSFont *subtitleFont;
@property (readonly, nonatomic) NSFont *badgeFont;
@property (readonly, nonatomic) NSFont *buttonFont;
@property (readonly, nonatomic) double minimumHeaderContentHeight;
@property (readonly, nonatomic) double titleHorizontalInset;
@property (readonly, nonatomic) double titleSubtitleHorizontalSpacing;
@property (readonly, nonatomic) double dividerBaselineToTextBaselineSpacing;
@property (readonly, nonatomic) double chevronSpacing;
@property (readonly, nonatomic) struct CGSize { double width; double height; } chevronSize;
@property (readonly, nonatomic) double chevronAlpha;
@property (readonly, nonatomic) double buttonSpacing;
@property (readonly, nonatomic) PXExtendedImageConfiguration *chevronImageConfiguration;
@property (readonly, nonatomic) PXExtendedImageConfiguration *legibilityGradientImageConfiguration;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) double gradientAlpha;
@property (readonly, nonatomic) double gradientOverhang;
@property (readonly, nonatomic) BOOL dividerLineVisible;
@property (readonly, nonatomic) BOOL minimizeTitleBottomPadding;
@property (readonly, nonatomic) BOOL titleShouldFadeOnScroll;
@property (readonly, nonatomic) BOOL filterButtonLayoutForSearch;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *curatedLibraryHeaderSpec;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
