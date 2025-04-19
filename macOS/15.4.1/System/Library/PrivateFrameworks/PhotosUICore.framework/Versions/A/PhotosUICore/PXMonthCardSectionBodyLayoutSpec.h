@interface PXMonthCardSectionBodyLayoutSpec : PXCuratedLibraryCardSectionBodyLayoutSpec {
    unsigned long long _layoutStyle;
}

@property (readonly, nonatomic) double interitemSpacing;

- (double)_cardHeightWithExtendedTraitCollection:(id)a0;
- (void)_configureDynamicAspectRatioWithExtendedTraitCollection:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
