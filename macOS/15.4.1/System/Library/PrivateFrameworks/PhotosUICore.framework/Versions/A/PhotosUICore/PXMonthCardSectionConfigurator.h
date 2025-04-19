@class PXMonthsAssetsSectionHeaderLayoutSpec;

@interface PXMonthCardSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {
    PXMonthsAssetsSectionHeaderLayoutSpec *_floatingHeaderSpec;
}

+ (long long)zoomLevel;

- (void).cxx_destruct;
- (void)configureAssetSectionLayout:(id)a0;
- (id)createCardSpecWithExtendedTraitCollection:(id)a0;
- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;

@end
