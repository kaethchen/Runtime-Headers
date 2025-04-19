@class NSString, NSMutableDictionary;

@interface _NSCollectionCompositionalLayoutSolverResolveResult : NSObject <_NSCollectionCompositionalLayoutSolverResolveResult> {
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;
}

@property (nonatomic) struct CGPoint { double x; double y; } contentOffsetAdjustment;
@property (nonatomic) struct CGSize { double width; double height; } contentSizeAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addDeletedAuxiliaryOfElementKind:(id)a0 atIndexPath:(id)a1 isSupplementary:(BOOL)a2;
- (void)addInsertedAuxiliaryOfElementKind:(id)a0 atIndexPath:(id)a1 isSupplementary:(BOOL)a2;
- (id)indexPathsForDeletedDecorationsForElementKind:(id)a0;
- (id)indexPathsForDeletedSupplememtariesForElementKind:(id)a0;
- (id)indexPathsForInsertedDecorationsForElementKind:(id)a0;
- (id)indexPathsForInsertedSupplememtariesForElementKind:(id)a0;

@end
