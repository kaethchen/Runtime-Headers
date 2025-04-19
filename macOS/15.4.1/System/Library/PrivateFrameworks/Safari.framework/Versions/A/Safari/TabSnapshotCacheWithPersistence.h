@protocol TabSnapshotVending;

@interface TabSnapshotCacheWithPersistence : NSObject

@property (readonly, nonatomic) id<TabSnapshotVending> tabSnapshotVendor;
@property (readonly, nonatomic) double snapshotWidth;

- (void).cxx_destruct;
- (void)cachedSnapshotForTabViewItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateCachedSnapshotForTabViewItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTabSnapshotVendor:(id)a0;

@end
