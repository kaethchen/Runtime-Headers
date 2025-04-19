@class PXAssetsSectionLayoutSpec, NSString, PXPhotosSectionHeaderLayoutSpec, PXExtendedImageConfiguration, NSFont, NSColor;

@interface PXPhotosLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) long long scrollSnapBehavior;
@property (readonly, nonatomic) double scrollSnapMaximumDecelerationFactor;
@property (readonly, nonatomic) double scrollSnapMaximumAccelerationFactor;
@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *assetsSpec;
@property (readonly, nonatomic) PXPhotosSectionHeaderLayoutSpec *sectionHeaderSpec;
@property (readonly, nonatomic) long long searchActionLocation;
@property (readonly, nonatomic) double headerTitleLeadingSpacing;
@property (readonly, nonatomic) double headerTitleButtonAlignmentSpacing;
@property (readonly, nonatomic) double headerTitleTopSpacing;
@property (readonly, nonatomic) double headerTitleBottomSpacing;
@property (readonly, nonatomic) NSFont *headerTitleFont;
@property (readonly, nonatomic) NSFont *headerSubtitleFont;
@property (readonly, nonatomic) NSColor *headerTitleOverBackgroundColor;
@property (readonly, nonatomic) NSColor *headerTitleOverContentColor;
@property (readonly, nonatomic) BOOL wantsToggleSidebarButton;
@property (readonly, nonatomic) double topTrailingChromeWidth;
@property (readonly, nonatomic) double topChromeHeight;
@property (readonly, nonatomic) double topChromeTitleTopPadding;
@property (readonly, nonatomic) double aspectFitContentVerticalPadding;
@property (readonly, nonatomic) double squareContentVerticalPadding;
@property (readonly, nonatomic) double backgroundGradientCornerRadius;
@property (readonly, nonatomic) PXExtendedImageConfiguration *backgroundGradientImageConfiguration;
@property (readonly, nonatomic) PXExtendedImageConfiguration *behindContentBackgroundGradientImageConfiguration;
@property (readonly, nonatomic) NSColor *contentBackgroundColor;
@property (readonly, nonatomic) double contentBackgroundOpacity;
@property (readonly, nonatomic) double interSectionSpacing;
@property (readonly, nonatomic) NSString *visualEffectViewGroupName;
@property (readonly, nonatomic) double interButtonSpacing;
@property (readonly, nonatomic) double endButtonSpacing;
@property (readonly, nonatomic) BOOL wantsShowAllButtonsInSectionFooters;
@property (readonly, nonatomic) BOOL wantsSectionsBlur;
@property (readonly, nonatomic) BOOL isTV;
@property (readonly, nonatomic) BOOL allowsEmptyTitles;
@property (readonly, nonatomic) double interPageSpacing;
@property (readonly, nonatomic) long long preferredUserInterfaceStyle;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentUnavailablePlaceholderDirectionalLayoutMargins;
@property (readonly, nonatomic) BOOL contentUnavailablePlaceholderDisablesVerticalBounce;

- (void).cxx_destruct;
- (void)configureScrollSnapController:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 gridStyle:(long long)a2 wantsToggleSidebarButton:(BOOL)a3 shouldMakeSpaceForLeadingChrome:(BOOL)a4;

@end
