@class NSMutableDictionary, NSString, DDSMAAutoAssetManager, NSObject;
@protocol DDSManagingDelegate, DDSAssetObserving, DDSManagerDataSource, DDSAssetProviding, DDSAssetTracking, OS_dispatch_queue;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSAssetObservingDelegate, DDSManagingDelegate, DDSRemoteSyncStateDelegate, DDSManaging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<DDSAssetTracking> tracker;
@property (readonly, nonatomic) id<DDSAssetProviding> provider;
@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver;
@property (readonly, nonatomic) NSMutableDictionary *remoteSyncStateByAssetType;
@property (readonly, nonatomic) NSMutableDictionary *pendingAssertionsToUpdateByAssetType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<DDSManagerDataSource> dataSource;
@property (readonly, nonatomic) DDSMAAutoAssetManager *autoAssetManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<DDSManagingDelegate> delegate;
@property (readonly, copy) NSString *xpcServiceName;

+ (id)updateCatalogMetadataKeyForAssetType:(id)a0;

- (void).cxx_destruct;
- (void)triggerUpdate;
- (void)removeOldAssets;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)assertionIDsForClientID:(id)a0 reply:(id /* block */)a1;
- (long long)assetUpdateStatusForAssertion:(id)a0;
- (id)autoAssetQueryForAssertion:(id)a0;
- (void)beginUpdateCycleForAssetType:(id)a0 forced:(BOOL)a1 discretionaryDownload:(BOOL)a2;
- (id)catalogUpdateDateForAssetType:(id)a0;
- (void)createAutoAssetAssertionForExistingAssertions;
- (void)createRemoteSyncStateForAssetType:(id)a0;
- (void)deleteV1AssetsIfNecessary;
- (void)didBeginUpdateCatalog;
- (void)didChangeDownloadState:(unsigned long long)a0 forAsset:(id)a1;
- (void)didCompleteDownloadForAssertion:(id)a0 error:(id)a1;
- (void)didCompleteDownloadForAssertions:(id)a0 error:(id)a1;
- (void)didEndUpdateCycleWithAssetType:(id)a0 error:(id)a1;
- (void)didStartUpdateCycleForAssetType:(id)a0;
- (void)didUpdateCatalogWithAssetType:(id)a0 error:(id)a1;
- (void)fetchAssetUpdateStatusForQuery:(id)a0 callback:(id /* block */)a1;
- (void)fetchCatalogBasedAssetUpdateStatusForAssertion:(id)a0 callback:(id /* block */)a1;
- (void)handleAddedNewDescriptor:(id)a0 forAssertion:(id)a1;
- (void)handleNewAssertions:(id)a0;
- (void)handleRemovedAssertions:(id)a0;
- (id)initWithProvider:(id)a0 tracker:(id)a1;
- (id)initWithProvider:(id)a0 tracker:(id)a1 dataSource:(id)a2;
- (id)initWithProvider:(id)a0 tracker:(id)a1 dataSource:(id)a2 autoAssetManager:(id)a3;
- (long long)modifyAssetUpdateStatusForAssertion:(id)a0 status:(long long)a1;
- (void)remoteSyncStateRequestsResetForAssetType:(id)a0;
- (void)remoteSyncStateRequestsRetryForAssetType:(id)a0;
- (void)remoteSyncStateRequestsUpdateForAssetType:(id)a0;
- (void)removeAssertionWithID:(id)a0;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)setCatalogUpdateDate:(id)a0 forAssetType:(id)a1;
- (void)triggerDump;
- (void)updateAssetForQuery:(id)a0 callback:(id /* block */)a1;
- (void)updateAutoAssetForAssetType:(id)a0;
- (void)updateCatalogBasedAssetForAssertion:(id)a0 callback:(id /* block */)a1;
- (void)updateCatalogForAssetType:(id)a0 withCompletion:(id /* block */)a1;
- (void)willRetryUpdateCycle;

@end
