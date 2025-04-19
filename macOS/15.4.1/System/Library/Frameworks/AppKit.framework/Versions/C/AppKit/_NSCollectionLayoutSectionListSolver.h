@class NSString, _NSCollectionLayoutAuxiliaryItemSolver, _NSCollectionLayoutSectionGeometryTranslator, _NSCollectionLayoutSupplementaryRegistrar, NSCollectionLayoutSection, NSObject, NSIndexSet, _NSCollectionLayoutItemSolver;
@protocol NSCollectionLayoutContainer, _NSCollectionPreferredSizes;

@interface _NSCollectionLayoutSectionListSolver : NSObject <_NSCollectionLayoutSectionSolver, _NSCollectionLayoutAuxiliaryHosting> {
    struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } _itemFrames;
}

@property (retain, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> container;
@property (retain, nonatomic) NSObject *traitCollection;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) int layoutAxis;
@property (nonatomic) int containerLayoutAxis;
@property (nonatomic) long long frameCount;
@property (retain, nonatomic) _NSCollectionLayoutItemSolver *solution;
@property (retain, nonatomic) _NSCollectionLayoutAuxiliaryItemSolver *sectionAuxiliarySolution;
@property (retain, nonatomic) _NSCollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar;
@property (retain, nonatomic) _NSCollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> memoizedAuxiliaryHostContainer;
@property (retain, nonatomic) id<_NSCollectionPreferredSizes> preferredSizes;
@property (nonatomic) struct CGVector { double dx; double dy; } orthogonalScrollingPrefetchingUnitVector;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveContentFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic) struct CGPoint { double x0; double x1; } orthogonalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGSize { double x0; double x1; })auxiliaryHostPinningContentSize;
- (long long)_binarySearchInitialFrameIndexForStartIndex:(long long)a0 endIndex:(long long)a1 lowIndex:(long long)a2 queryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (double)_dimensionForRootGroupAlongAxis:(int)a0;
- (id)_queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)_resolveWithParameters:(id)a0;
- (id)_sectionContainer;
- (void)_setOrthogonalOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)allSupplementaryKeys;
- (id)auxiliaryHostAuxiliaryItems;
- (long long)auxiliaryHostAuxiliaryKind;
- (id)auxiliaryHostContainer;
- (struct CGSize { double x0; double x1; })auxiliaryHostContentSize;
- (int)auxiliaryHostLayoutAxis;
- (id)auxiliaryHostPreferredSizes;
- (BOOL)auxiliaryHostShouldLayoutRTL;
- (id)auxiliaryHostSupplementaryEnroller;
- (id)frameForIndex:(long long)a0;
- (id)initWithLayoutSection:(id)a0;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)resolveWithParameters:(id)a0 preferredSizes:(id)a1;
- (id)sectionSupplementaryFrameForIndex:(long long)a0;
- (id)sectionSupplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)a0;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(int)a2 frameCount:(long long)a3;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(int)a2 frameCount:(long long)a3 preferredSizes:(id)a4;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(int)a2 frameCount:(long long)a3 preferredSizes:(id)a4 layoutRTL:(BOOL)a5;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)supplementaryKeysAssociatedWithItemAtIndex:(long long)a0;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)visualDescription;

@end
