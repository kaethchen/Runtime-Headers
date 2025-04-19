@interface KHCalendarProductSpecification : KHWireboundProductSpecification

+ (double)calendarScaleForProject:(id)a0;

- (id)_linkedSectionsForSectionAtIndex:(unsigned long long)a0;
- (void)_makeLayoutsForProject:(id)a0 usingSlices:(id)a1 andTheme:(id)a2 params:(id)a3;
- (id)_pieOuterCrustForProject:(id)a0 usingPhotoAnalyzer:(id)a1 withTheme:(id)a2 params:(id)a3;
- (id)_pieSlicesForProject:(id)a0 usingPhotoAnalyzer:(id)a1 withTheme:(id)a2 params:(id)a3;
- (BOOL)autoflowWouldExceedPageCount:(long long)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2;
- (void)ensureProperSizeForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (void)ensureSectionsForProject:(id)a0;
- (void)generateEmptyLayoutsForProject:(id)a0 withTheme:(id)a1 params:(id)a2;
- (unsigned long long)indexOfFirstInsideLayoutInProject:(id)a0;
- (unsigned long long)indexOfLastInsideLayoutInProject:(id)a0;
- (id)pageNameForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (void)performAutoflowForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (void)performSimpleflowForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;

@end
