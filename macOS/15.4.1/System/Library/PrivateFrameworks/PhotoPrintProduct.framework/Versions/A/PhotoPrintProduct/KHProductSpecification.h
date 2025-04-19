@class NSLock, NSMutableDictionary, KHProduct, NSMutableArray;

@interface KHProductSpecification : NSObject {
    KHProduct *_product;
    NSMutableDictionary *_sections;
    NSMutableArray *_components;
    long long _projectId;
    unsigned long long _layoutCount;
    unsigned long long _insideCount;
    unsigned long long _pdfPageCount;
    unsigned long long _userCount;
    NSLock *_componentLock;
}

+ (id)_findSuitableSpreadLayoutsForPhotos:(id)a0 inLayouts:(id)a1;
+ (BOOL)coverFlapsRequiredForProductCode:(id)a0;

- (void)dealloc;
- (id)init;
- (id)product;
- (void)setProduct:(id)a0;
- (id)initWithProduct:(id)a0;
- (id)_chooseBestLayoutInLayouts:(id)a0 forPhotos:(id)a1 layoutIndex:(unsigned long long)a2 layoutUsageCounts:(id)a3 preferredLayouts:(id)a4;
- (id)_linkedSectionsForSectionAtIndex:(unsigned long long)a0;
- (void)_makeLayoutsForProject:(id)a0 usingSlices:(id)a1 andTheme:(id)a2 params:(id)a3;
- (id)_performReflowOuterCrustLayoutsForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (id)_pieInnerSlicesForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (id)_pieOuterCrustUsingPhotoAnalyzer:(id)a0 withTheme:(id)a1 params:(id)a2;
- (id)_pieSlicesForProject:(id)a0 usingPhotoAnalyzer:(id)a1 withTheme:(id)a2 params:(id)a3;
- (void)_sizeLayoutForCover:(id)a0;
- (void)_sizeLayoutForFlap:(id)a0;
- (void)_sizeLayoutForInside:(id)a0 bindingMargin:(double)a1;
- (void)_sizeLayoutForSpread:(id)a0;
- (void)applyDefaultBackgroundTreatmentsForProject:(id)a0;
- (void)applyDefaultBackgroundTreatmentsForProject:(id)a0 withSeedTreatment:(id)a1;
- (BOOL)autoflowWouldExceedPageCount:(long long)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2;
- (id)componentAtIndex:(unsigned long long)a0 forProject:(id)a1;
- (id)componentsForProject:(id)a0;
- (struct CGPoint { double x0; double x1; })coverOffset;
- (struct CGSize { double x0; double x1; })coverPageSize;
- (struct CGSize { double x0; double x1; })coverWrapSize;
- (id)defaultBackgroundTreatmentForLayout:(id)a0 inProject:(id)a1;
- (id)defaultBackgroundTreatmentForLayout:(id)a0 inProject:(id)a1 withSeedTreatment:(id)a2;
- (void)ensureComponentsForProject:(id)a0;
- (void)ensureLayoutsForProject:(id)a0;
- (void)ensurePageCountForBookProject:(id)a0;
- (void)ensureProperSizeForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (void)ensureSectionsForProject:(id)a0;
- (unsigned long long)finalPDFPageCountForProject:(id)a0;
- (struct CGSize { double x0; double x1; })flapPageSize;
- (void)generateEmptyLayoutsForProject:(id)a0 withTheme:(id)a1 params:(id)a2;
- (unsigned long long)indexOfFirstInsideLayoutInProject:(id)a0;
- (unsigned long long)indexOfLastInsideLayoutInProject:(id)a0;
- (unsigned long long)indexOfNextBoundaryPage:(unsigned long long)a0 inProject:(id)a1;
- (unsigned long long)insideCountForProject:(id)a0;
- (struct CGSize { double x0; double x1; })insidePageSize;
- (id)linkedSectionsForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (unsigned long long)nextIndexFromIndex:(unsigned long long)a0 inProject:(id)a1;
- (unsigned long long)outsideComponentCount;
- (id)pageNameForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (long long)pageNumberForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (void)performAutoflowForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (void)performSimpleflowForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (unsigned long long)placementForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (unsigned long long)previousIndexFromIndex:(unsigned long long)a0 inProject:(id)a1;
- (id)printComponentsForProject:(id)a0;
- (void)resetPaginationForProject:(id)a0;
- (double)spineWidthForProject:(id)a0;
- (struct CGSize { double x0; double x1; })spreadPageSize;
- (unsigned long long)userFacingPDFCountForProject:(id)a0;

@end
