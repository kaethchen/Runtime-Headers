@class NSArray, NSDictionary, _NSCollectionLayoutAuxiliaryOffsets, NSIndexSet, NSSet, _NSRTree;
@protocol _NSCollectionLayoutAuxiliaryHosting;

@interface _NSCollectionLayoutAuxiliaryItemSolver : NSObject {
    long long _memoizedSupplementaryKind;
    NSArray *_memoizedAuxiliaryItems;
    NSSet *_elementKinds;
}

@property (weak, nonatomic) id<_NSCollectionLayoutAuxiliaryHosting> auxiliaryHost;
@property (retain, nonatomic) NSArray *frames;
@property (retain, nonatomic) NSDictionary *enrolledSupplementaryFramesDict;
@property (retain, nonatomic) NSDictionary *supplementaryFramesKeyedByKindIndex;
@property (retain, nonatomic) _NSCollectionLayoutAuxiliaryOffsets *supplementariesThatCanAffectContentSize;
@property (readonly, nonatomic) long long memoizedSupplementaryKind;
@property (readonly, nonatomic) NSArray *memoizedSupplementaryItems;
@property (nonatomic) BOOL hasEstimatedSizes;
@property (retain, nonatomic) _NSRTree *supplementaryItemGeometricIndexer;
@property (retain, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } hostContentSizeInsets;
@property (readonly, nonatomic) NSArray *supplementaryFrames;
@property (readonly, nonatomic) NSSet *elementKinds;
@property (readonly, nonatomic) BOOL contentSizeDiffersFromHostContentSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } hostContentOffset;

- (void).cxx_destruct;
- (void)resolve;
- (struct CGSize { double x0; double x1; })_computeContentSizeForEmptyHostContentSizeForContainer:(id)a0 hostContentSize:(struct CGSize { double x0; double x1; })a1 layoutAxis:(int)a2 supplementaryFrames:(id)a3 preferredSizes:(id)a4 layoutRTL:(BOOL)a5 supplementaryKind:(long long)a6;
- (id)_effectiveBoundarySupplementrayItem:(id)a0 forLayoutAxis:(int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSupplementaryItem:(id)a0 container:(id)a1 contentSize:(struct CGSize { double x0; double x1; })a2 frameOffset:(struct CGPoint { double x0; double x1; })a3 applyPinning:(BOOL)a4 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 preferredSizes:(id)a6 preferredIndex:(long long)a7 layoutRTL:(BOOL)a8;
- (struct CGSize { double x0; double x1; })_largestPossibleHostContentSizeForContainerSize:(struct CGSize { double x0; double x1; })a0 layoutAxis:(int)a1;
- (id)_normalizedFramesAlongLayoutAxisForFrames:(id)a0 layoutAxis:(int)a1;
- (struct CGPoint { double x0; double x1; })_offsetForContentSizeInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)_rearrangeSupplementaryItems:(id)a0 byUpdatingPinning:(BOOL)a1 forVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 frameOffset:(struct CGPoint { double x0; double x1; })a3;
- (id)_rearrangedFramesForFrames:(id)a0 container:(id)a1 contentSize:(struct CGSize { double x0; double x1; })a2 applyPinning:(BOOL)a3 frameOffset:(struct CGPoint { double x0; double x1; })a4 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 preferredSizes:(id)a6 layoutRTL:(BOOL)a7 supplementaryKind:(long long)a8;
- (struct CGSize { double x0; double x1; })_requiredContentSizeForSupplementaryFrames:(id)a0 forLayoutAxis:(int)a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (void)_solveForPinning:(BOOL)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateGeometricIndexer;
- (id)initWithAuxiliaryHost:(id)a0;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)resolveSupplementaryItemsForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a2;
- (id)supplementaryFramesWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)visualDescription;

@end
