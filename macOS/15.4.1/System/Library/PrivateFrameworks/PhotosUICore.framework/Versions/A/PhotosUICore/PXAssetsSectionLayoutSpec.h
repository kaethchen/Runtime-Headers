@class PXMonthCardSectionConfigurator, NSShadow, PXMonthChapterSectionConfigurator, PXYearAssetsSectionConfigurator, PXDayAssetsSectionConfigurator, PXAssetsSectionGridConfigurator, PXZoomablePhotosLayoutSpec;

@interface PXAssetsSectionLayoutSpec : PXFeatureSpec {
    PXYearAssetsSectionConfigurator *_yearSectionConfigurator;
    PXMonthCardSectionConfigurator *_monthSectionConfigurator;
    PXMonthChapterSectionConfigurator *_monthsChapterConfigurator;
    PXDayAssetsSectionConfigurator *_daySectionConfigurator;
    PXAssetsSectionGridConfigurator *_gridConfigurator;
    NSShadow *_shadow;
}

@property (readonly, nonatomic) BOOL supportsGridAspectRatioToggle;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *zoomableSpec;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) double shadowCornerRadius;
@property (readonly, nonatomic) BOOL userInterfaceStyleAllowsShadow;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) BOOL allowsBlur;
@property (readonly, nonatomic) BOOL canShowSelectAllButton;
@property (readonly, nonatomic) long long numberOfLinesForShowAllButton;
@property (readonly, nonatomic) double showAllButtonHeight;
@property (readonly, nonatomic) double itemCornerRadius;
@property (readonly, nonatomic) long long preferredUserInterfaceStyle;
@property (readonly, nonatomic) BOOL disableConfigurators;

- (void).cxx_destruct;
- (id)_configuratorForZoomLevel:(long long)a0;
- (BOOL)allowsPositionDependentHeaderContentOpacityInZoomLevel:(long long)a0;
- (id)gridConfigurator;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 variant:(long long)a2 allowsBlur:(BOOL)a3 itemCornerRadius:(double)a4 zoomableSpec:(id)a5;
- (long long)numberOfGridZoomStepsWithDataSource:(id)a0;
- (id)sectionConfiguratorForAssetCollection:(id)a0 inZoomLevel:(long long)a1;

@end
