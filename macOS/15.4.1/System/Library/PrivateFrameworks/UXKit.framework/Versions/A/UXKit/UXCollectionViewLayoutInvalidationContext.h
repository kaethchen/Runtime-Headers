@class NSArray, NSMutableDictionary;

@interface UXCollectionViewLayoutInvalidationContext : NSObject {
    NSMutableDictionary *_invalidatedSupplementaryViews;
    NSArray *_updateItems;
    struct { unsigned char invalidateDataSource : 1; unsigned char invalidateEverything : 1; unsigned char invalidateContentSize : 1; } _invalidationContextFlags;
}

@property (readonly, nonatomic) BOOL invalidateEverything;
@property (readonly, nonatomic) BOOL invalidateDataSourceCounts;

- (void)dealloc;
- (void)_setInvalidateDataSourceCounts:(BOOL)a0;
- (id)_invalidatedSupplementaryViews;
- (void)_setInvalidateEverything:(BOOL)a0;
- (void)_setInvalidatedSupplementaryViews:(id)a0;
- (void)_setUpdateItems:(id)a0;
- (id)_updateItems;
- (void)_invalidateSupplementaryElementsOfKind:(id)a0 atIndexPaths:(id)a1;
- (BOOL)invalidateContentSize;
- (void)setInvalidateContentSize:(BOOL)a0;

@end
