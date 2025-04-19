@interface KHPrintsProductSpecification : KHProductSpecification

- (void)_makeLayoutsForProject:(id)a0 usingSlices:(id)a1 andTheme:(id)a2 params:(id)a3;
- (id)_pieSlicesForProject:(id)a0 usingPhotoAnalyzer:(id)a1 withTheme:(id)a2 params:(id)a3;
- (void)ensureComponentsForProject:(id)a0;
- (void)ensureProperSizeForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (void)ensureSectionsForProject:(id)a0;
- (void)generateEmptyLayoutsForProject:(id)a0 withTheme:(id)a1 params:(id)a2;
- (void)performAutoflowForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (void)performSimpleflowForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (unsigned long long)placementForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;

@end
