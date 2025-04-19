@class _NSCollectionLayoutAuxiliaryItemSolver, NSCollectionLayoutSection, NSIndexSet, _NSCollectionLayoutSupplementaryRegistrar, NSString, _NSCollectionLayoutSolutionState, NSObject;
@protocol _NSCollectionPreferredSizes, NSCollectionLayoutContainer;

@interface _NSCollectionLayoutSectionEstimatedSolver : NSObject <_NSCollectionLayoutSectionSolver, _NSCollectionLayoutAuxiliaryHosting>

@property (readonly, nonatomic) id<_NSCollectionPreferredSizes> preferredSizes;
@property (retain, nonatomic) _NSCollectionLayoutAuxiliaryItemSolver *sectionSupplementarySolution;
@property (retain, nonatomic) _NSCollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> memoizedSupplementaryHostContainer;
@property (retain, nonatomic) _NSCollectionLayoutSolutionState *solutionState;
@property (nonatomic) int containerLayoutAxis;
@property (nonatomic) struct CGVector { double dx; double dy; } orthogonalScrollingPrefetchingUnitVector;
@property (readonly, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (readonly, nonatomic) id<NSCollectionLayoutContainer> container;
@property (readonly, nonatomic) NSObject *traitCollection;
@property (readonly, nonatomic) BOOL layoutRTL;
@property (readonly, nonatomic) int layoutAxis;
@property (readonly, nonatomic) long long frameCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveContentFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic) struct CGPoint { double x; double y; } orthogonalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })auxiliaryHostPinningContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bookmarks:(id)a1;
- (void)_configureInitialOrthogonalPrefetchingUnitVector;
- (double)_dimensionForRootGroupAlongAxis:(int)a0;
- (id)_indexesOfBookmarksAffectedByResolveItems:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 layoutAxis:(int)a2;
- (id)_sectionContainer;
- (void)_setOrthogonalOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)_solveWithParameters:(id)a0;
- (void)_updateSolutionAuxiliaryRangeIndexerKindDict:(id)a0 fromBookmark:(id)a1;
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
