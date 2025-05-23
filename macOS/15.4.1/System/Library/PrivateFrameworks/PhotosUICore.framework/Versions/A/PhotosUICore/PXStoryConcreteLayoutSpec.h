@class PXExploreLayoutMetrics, NSShadow, PXStoryChromeButtonSpec, PXStoryDetailsViewButtonSpec, NSDictionary, NSColor;

@interface PXStoryConcreteLayoutSpec : PXFeatureSpec <PXStoryLayoutSpec>

@property (readonly, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) double interpageSpacing;
@property (readonly, nonatomic) long long scrollDecelerationRate;
@property (readonly, nonatomic) long long browserGridScrollDecelerationRate;
@property (readonly, nonatomic) PXExploreLayoutMetrics *browserGridLayoutMetrics;
@property (readonly, nonatomic) double browserGridCellCornersRadius;
@property (readonly, nonatomic) double thumbnailCornerRadius;
@property (readonly, nonatomic) NSShadow *thumbnailShadow;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailChromePadding;
@property (readonly, nonatomic) double thumbnailChromeButtonSpacing;
@property (readonly, nonatomic) PXStoryChromeButtonSpec *thumbnailChromeButtonSpec;
@property (readonly, nonatomic) PXStoryChromeButtonSpec *thumbnailChromePlayButtonSpec;
@property (readonly, nonatomic) BOOL thumbnailChromeShowsPlayButton;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailPlayButtonPadding;
@property (readonly, nonatomic) PXStoryDetailsViewButtonSpec *thumbnailChromeDetailsViewButtonSpec;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailChromeDetailsViewButtonPadding;
@property (readonly, nonatomic) BOOL thumbnailChromeShowsActionMenuButton;
@property (readonly, nonatomic) BOOL thumbnailChromeShowsFavoriteButton;
@property (readonly, nonatomic) BOOL thumbnailMenuIncludesFavoriteAction;
@property (readonly, nonatomic) BOOL thumbnailMenuIncludesFeatureLessAction;
@property (readonly, nonatomic) BOOL canScaleWhenPressed;
@property (readonly, nonatomic) PXStoryChromeButtonSpec *styleSwitcherChromeButtonSpec;
@property (readonly, nonatomic) double styleSwitcherChromeButtonHorizontalMargin;
@property (readonly, nonatomic) BOOL styleSwitcherWantsChromeButtonsTitleCenterAligned;
@property (readonly, nonatomic) BOOL styleSwitcherShowsRestartButton;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } styleSwitcherViewportInset;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } styleSwitcherChromeInset;
@property (readonly, nonatomic) double styleSwitcherViewportSpacing;
@property (readonly, nonatomic) BOOL styleSwitcherShowsTitle;
@property (readonly, nonatomic) double styleSwitcherPageControlHeight;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } styleSwitcherPageControlInset;
@property (readonly, nonatomic) long long styleSwitcherLayoutDirection;
@property (readonly, nonatomic) NSDictionary *styleSwitcherTitleAttributes;
@property (readonly, nonatomic) double scrubberVerticalPadding;
@property (readonly, nonatomic) struct CGSize { double width; double height; } scrubberCurrentAssetSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bufferingIndicatorSize;
@property (readonly, nonatomic) double distanceBetweenBufferingIndicatorCenterAndBottom;
@property (readonly, nonatomic) double distanceBetweenChapterTitleBaselineAndBottomWithoutChrome;
@property (readonly, nonatomic) double distanceBetweenChapterTitleBaselineAndBottomWithChrome;
@property (readonly, nonatomic) double bottomTitleContentOffset;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 storyConfigurationOptions:(unsigned long long)a2;

@end
