@class NSMutableData, NSMutableArray, NSArray;

@interface MOPhotosMomentsLayout : MOPhotosLayout {
    struct { struct NSEdgeInsets { double top; double left; double bottom; double right; } columnsAndRowsInset; struct CGSize { double width; double height; } interItemSpacing; unsigned long long columnCount; } _configurationParameters;
    NSMutableArray *_boundsIndependentSectionGridItemAttributesArray;
    NSMutableData *_gridSectionRectsLookupArrayBuffer;
    NSArray *_invalidationTimeTempArrayForSavingItemAttributes;
    NSArray *_invalidationTimeTempArrayForSavingPerSectionItemAttributes;
}

@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } columnsAndRowsInset;
@property (nonatomic) struct CGSize { double x0; double x1; } interItemSpacing;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) BOOL showsCaptions;

+ (Class)invalidationContextClass;
+ (Class)layoutAccessibilityClass;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)sectionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathOfItemAbove:(id)a0;
- (id)indexPathOfItemAfter:(id)a0;
- (id)indexPathOfItemBefore:(id)a0;
- (id)indexPathOfItemBelow:(id)a0;
- (id)_sectionGridItemAttributesDataPopulatedFromSectionCalculations:(const struct { double x0; double x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; long long x4; long long x5; long long x6; unsigned long long x7; struct CGSize { double x0; double x1; } x8; } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRectForGridRect:(struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; })a0 withItemAspectRatio:(double)a1 placedInCandidateRowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 usingSectionCalculations:(const struct { double x0; double x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; long long x4; long long x5; long long x6; unsigned long long x7; struct CGSize { double x0; double x1; } x8; } *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_prepareSectionInCandidateBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 candidateHeaderBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingSectionCalculations:(const struct { double x0; double x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; long long x4; long long x5; long long x6; unsigned long long x7; struct CGSize { double x0; double x1; } x8; } *)a2 sectionGridItemAttributes:(const struct { struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x0; double x1; } *)a3;
- (double)_processRowItemsArray:(struct { long long x0; struct { struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; void *x3; } *)a0 forPlacementInCandidateRowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingSectionCalculations:(const struct { double x0; double x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; long long x4; long long x5; long long x6; unsigned long long x7; struct CGSize { double x0; double x1; } x8; } *)a2;
- (BOOL)_shouldFlushCachedAttributesForInvalidationContext:(id)a0;
- (id)debuggingLayoutOptionsDescriptions;

@end
