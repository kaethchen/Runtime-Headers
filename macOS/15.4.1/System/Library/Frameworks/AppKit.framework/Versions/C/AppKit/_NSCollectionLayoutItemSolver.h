@class NSCollectionLayoutItem, NSArray, NSString, NSObject, _NSCollectionLayoutItemSolverState;
@protocol _NSCollectionLayoutSupplementaryEnrolling, NSCollectionLayoutContainer, _NSCollectionLayoutAuxiliaryOffsets, _NSCollectionPreferredSizes;

@interface _NSCollectionLayoutItemSolver : NSObject <NSCopying, _NSCollectionLayoutAuxiliaryHosting>

@property (retain, nonatomic) _NSCollectionLayoutItemSolverState *solveResult;
@property (retain, nonatomic) id<_NSCollectionPreferredSizes> preferredSizes;
@property (retain, nonatomic) id<_NSCollectionLayoutSupplementaryEnrolling> supplementaryEnroller;
@property (readonly, nonatomic) long long solutionRecursionDepth;
@property (readonly, nonatomic) long long maxFrameCount;
@property (readonly, nonatomic) int layoutAxis;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (readonly, nonatomic) id<NSCollectionLayoutContainer> container;
@property (readonly, nonatomic) NSObject *traitCollection;
@property (readonly, nonatomic) BOOL layoutRTL;
@property (readonly, nonatomic) long long frameCount;
@property (readonly, nonatomic) long long itemFrameCount;
@property (readonly, nonatomic) long long auxiliaryFrameCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) NSArray *itemFrames;
@property (readonly, nonatomic) NSArray *auxiliaryFrames;
@property (readonly, nonatomic) id<_NSCollectionLayoutAuxiliaryOffsets> supplementaryOffsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })auxiliaryHostPinningContentSize;
- (id)queryFramesApplyingFrameOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)_additionalDimensionForEdgeSpacingAlongAxis:(int)a0 group:(id)a1 trailingEdgeOnly:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)_arrangeSolutionItems:(id)a0 alongLayoutAxis:(int)a1 forContainer:(id)a2 additionalLayoutOffset:(struct CGPoint { double x0; double x1; })a3 interItemSpacing:(id)a4;
- (unsigned long long)_directionalEdgeForLayoutAxis:(int)a0 preEdge:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_effectiveContainerSizeForContainer:(id)a0;
- (struct CGSize { double x0; double x1; })_effectiveGroupSizeForGroup:(id)a0 container:(id)a1;
- (void)_enumerateSolutionFramesForQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemLimit:(long long)a1 withHandler:(id /* block */)a2;
- (id)_frameForAbsoluteIndex:(long long)a0 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a1 interSolutionSpacing:(double)a2 repeatAxis:(int)a3;
- (struct CGPoint { double x0; double x1; })_frameOffsetForAdditionalFrameOffset:(struct CGPoint { double x0; double x1; })a0 repeatOffset:(long long)a1 repeatAxis:(int)a2 interSolutionSpacing:(double)a3;
- (int)_layoutAxisForGroup:(id)a0;
- (struct CGPoint { double x0; double x1; })_layoutOffsetForContainer:(id)a0;
- (id)_normalizeVisualFormatParserItems:(id)a0 layoutAxis:(int)a1;
- (struct CGPoint { double x0; double x1; })_outerContainerOffsetForGroup:(id)a0 groupComputedSize:(struct CGSize { double x0; double x1; })a1 container:(id)a2 outerLayoutAxis:(int)a3;
- (id)_queryFramesWithQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a1 itemIndexOffset:(long long)a2 itemLimit:(long long)a3 supplementaryRepeatOffset:(long long)a4;
- (id)_queryFramesWithQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a1 itemIndexOffset:(long long)a2 supplementaryOffsets:(id)a3 itemLimit:(long long)a4;
- (void)_solve;
- (void)_solveForContainer:(id)a0 layoutAxis:(int)a1 traitCollection:(id)a2 maxFrameCount:(long long)a3 layoutRTL:(BOOL)a4 preferredSizes:(id)a5 solutionRecursionDepth:(long long)a6;
- (void)_solveGroup;
- (void)_solveSingleItem;
- (void)_solveWithCustomGroupItemProvider;
- (id)_supplementaryFrameWithKind:(id)a0 absoluteIndex:(long long)a1 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a2 interSolutionSpacing:(double)a3 repeatAxis:(int)a4;
- (id)_supplementaryFrameWithKind:(id)a0 index:(long long)a1 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)_transformGroupArrangementItemsForRTL:(id)a0;
- (void)_updateGroupByQueryingItemsIfNeeded:(id)a0 container:(id)a1;
- (void)_warnIfClientSpecifiesFlexibleRootGroupEdgeSpacingAlongLayoutAxisAsNeededForGroup:(id)a0 layoutAxis:(int)a1;
- (struct CGPoint { double x0; double x1; })auxiliaryHostAdditionalFrameOffset;
- (id)auxiliaryHostAuxiliaryItems;
- (long long)auxiliaryHostAuxiliaryKind;
- (id)auxiliaryHostContainer;
- (struct CGSize { double x0; double x1; })auxiliaryHostContentSize;
- (int)auxiliaryHostLayoutAxis;
- (id)auxiliaryHostPreferredSizes;
- (BOOL)auxiliaryHostShouldLayoutRTL;
- (id)auxiliaryHostSupplementaryEnroller;
- (id)availableLayoutSpaces;
- (BOOL)canAccomodateItemWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })contentSizeForFrameCount:(long long)a0 layoutAxis:(int)a1;
- (id)frameForAbsoluteIndex:(long long)a0 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a1 interSolutionSpacing:(double)a2 repeatAxis:(int)a3;
- (id)initWithItem:(id)a0;
- (id)initWithItem:(id)a0 supplementaryEnroller:(id)a1;
- (id)initWithItem:(id)a0 supplementaryEnroller:(id)a1 container:(id)a2 layoutAxis:(int)a3 traitCollection:(id)a4 maxFrameCount:(long long)a5 layoutRTL:(BOOL)a6 preferredSizes:(id)a7 solverResult:(id)a8 solutionRecursionDepth:(long long)a9;
- (id)queryFramesWithItemLimit:(long long)a0;
- (id)queryFramesWithQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)queryFramesWithQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)queryFramesWithQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a1 itemIndexOffset:(long long)a2 itemLimit:(long long)a3 supplementaryRepeatOffset:(long long)a4;
- (id)queryFramesWithQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a1 itemIndexOffset:(long long)a2 supplementaryOffsets:(id)a3 itemLimit:(long long)a4;
- (void)solveForContainer:(id)a0 layoutAxis:(int)a1 traitCollection:(id)a2 maxFrameCount:(long long)a3 layoutRTL:(BOOL)a4;
- (void)solveForContainer:(id)a0 layoutAxis:(int)a1 traitCollection:(id)a2 maxFrameCount:(long long)a3 layoutRTL:(BOOL)a4 preferredSizes:(id)a5;
- (id)supplementaryFrameWithKind:(id)a0 absoluteIndex:(long long)a1 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a2 interSolutionSpacing:(double)a3 repeatAxis:(int)a4;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a2;
- (id)visualDescription;

@end
