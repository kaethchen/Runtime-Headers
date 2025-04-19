@interface KHHardcoverProductSpecification : KHProductSpecification

- (id)_linkedSectionsForSectionAtIndex:(unsigned long long)a0;
- (id)_pieOuterCrustUsingPhotoAnalyzer:(id)a0 withTheme:(id)a1 params:(id)a2;
- (long long)coverComponentCount;
- (struct CGSize { double x0; double x1; })coverPageSize;
- (void)ensureComponentsForProject:(id)a0;
- (struct CGSize { double x0; double x1; })flapPageSize;
- (void)generateEmptyLayoutsForProject:(id)a0 withTheme:(id)a1 params:(id)a2;
- (unsigned long long)outsideComponentCount;

@end
