@class NSColor, PXExtendedImageConfiguration, NSFont;

@interface PXCuratedLibraryChapterHeaderLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentInset;
@property (readonly, nonatomic) NSFont *titleFont;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) NSColor *titleEmphasizedColor;
@property (readonly, nonatomic) NSColor *floatingTitleEmphasizedColor;
@property (readonly, nonatomic) NSColor *titleDeemphasizedColor;
@property (readonly, nonatomic) NSColor *floatingTitleDeemphasizedColor;
@property (readonly, nonatomic) PXExtendedImageConfiguration *chevronImageConfiguration;
@property (readonly, nonatomic) BOOL wantsChevron;
@property (readonly, nonatomic) double spacingBetweenTitleAndChevron;
@property (readonly, nonatomic) double spacingBetweenTitleTopAndPreviousCardBottom;
@property (readonly, nonatomic) double spacingBetweenTitleBottomAndNextCardTop;
@property (readonly, nonatomic) BOOL shouldFloat;
@property (readonly, nonatomic) BOOL shouldAbbreviateMonth;
@property (readonly, nonatomic) double floatingDistanceFromSafeAreaTop;
@property (readonly, nonatomic) double floatingAppearanceCrossfadeStartDistance;
@property (readonly, nonatomic) double floatingAppearanceCrossfadeDistance;
@property (readonly, nonatomic) double floatingAppearanceCrossfadeDuration;
@property (readonly, nonatomic) double floatingFadeOutDistance;
@property (readonly, nonatomic) BOOL shouldAlwaysShowFloatingVersion;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
