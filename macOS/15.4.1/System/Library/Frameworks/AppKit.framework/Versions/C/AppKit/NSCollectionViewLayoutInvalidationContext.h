@class NSArray, NSSet, NSMutableIndexSet, NSDictionary, NSMutableSet, NSMutableDictionary;

@interface NSCollectionViewLayoutInvalidationContext : NSObject {
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSArray *_updateItems;
    struct CGPoint { double x; double y; } _contentOffsetAdjustment;
    struct CGSize { double width; double height; } _contentSizeAdjustment;
    NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
    struct { unsigned char invalidateDataSource : 1; unsigned char invalidateEverything : 1; unsigned char initiatedFromReloadData : 1; unsigned char retainExistingSizingInfoForEstimates : 1; } _invalidationContextFlags;
}

@property (nonatomic, setter=_setInvalidateDataSourceCounts:) BOOL invalidateDataSourceCounts;
@property (nonatomic, setter=_setInvalidateEverything:) BOOL invalidateEverything;
@property (nonatomic, getter=_updateItems, setter=_setUpdateItems:) NSArray *updateItems;
@property (nonatomic, getter=_initiatedFromReloadData, setter=_setInitiatedFromReloadData:) BOOL initiatedFromReloadData;
@property (nonatomic, getter=_retainExistingSizingInfoForEstimates, setter=_setRetainExistingSizingInfoForEstimates:) BOOL retainExistingSizingInfoForEstimates;
@property (nonatomic, getter=_intent, setter=_setIntent:) long long intent;
@property (readonly, nonatomic) NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
@property (readonly) NSSet *invalidatedItemIndexPaths;
@property (readonly) NSDictionary *invalidatedSupplementaryIndexPaths;
@property (readonly) NSDictionary *invalidatedDecorationIndexPaths;
@property struct CGPoint { double x0; double x1; } contentOffsetAdjustment;
@property struct CGSize { double x0; double x1; } contentSizeAdjustment;

- (void).cxx_destruct;
- (id)_invalidatedSupplementaryViews;
- (void)_setInvalidatedSupplementaryViews:(id)a0;
- (void)invalidateDecorationElementsOfKind:(id)a0 atIndexPaths:(id)a1;
- (void)invalidateItemsAtIndexPaths:(id)a0;
- (void)invalidateSupplementaryElementsOfKind:(id)a0 atIndexPaths:(id)a1;

@end
