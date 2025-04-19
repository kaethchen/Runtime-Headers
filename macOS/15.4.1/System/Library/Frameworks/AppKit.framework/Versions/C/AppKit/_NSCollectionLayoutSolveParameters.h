@class NSIndexSet, NSSet, NSString, NSMutableIndexSet, NSMutableDictionary;
@protocol _NSCollectionLayoutAuxiliaryOffsets;

@interface _NSCollectionLayoutSolveParameters : NSObject <_NSCollectionLayoutSolveResult> {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxiliaryDict;
    BOOL _isFullResolve;
}

@property (readonly, nonatomic) BOOL isFullResolve;
@property (readonly, nonatomic) BOOL hasInvalidatedItems;
@property (readonly, nonatomic) id<_NSCollectionLayoutAuxiliaryOffsets> invalidatedSupplementaryOffsets;
@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly, nonatomic) NSSet *invalidatedAuxiliaryKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parametersForFullResolve;

- (id)init;
- (void).cxx_destruct;
- (void)addAuxiliaryIndex:(long long)a0 elementKind:(id)a1;
- (void)addItemIndex:(long long)a0;
- (id)indexesForInvalidatedAuxiliariesOfKind:(id)a0;
- (id)initWithInvalidatedIndexes:(id)a0;
- (id)initWithInvalidatedIndexes:(id)a0 isFullResolve:(BOOL)a1;
- (id)invalidatedAuxiliaryOffsets;

@end
