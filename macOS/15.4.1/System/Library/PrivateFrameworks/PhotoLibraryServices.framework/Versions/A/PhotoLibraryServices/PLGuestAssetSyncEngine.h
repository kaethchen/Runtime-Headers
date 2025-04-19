@protocol PLGuestAssetSyncEngineDelegate;

@interface PLGuestAssetSyncEngine : NSObject

@property (weak, nonatomic) id<PLGuestAssetSyncEngineDelegate> delegate;

+ (BOOL)_guestAssetSyncStatusIsSet:(long long)a0 inLibrary:(id)a1;
+ (id)_resumeMarkerObjectIDInGlobalValuesOfLibrary:(id)a0 storedInLibrary:(id)a1;
+ (void)_setGuestAssetSyncStatus:(long long)a0 inLibrary:(id)a1;
+ (BOOL)didIngestGuestAssetsInLibrary:(id)a0;
+ (void)setDidIngestGuestAssetsInLibrary:(id)a0;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_markAsWasGuestAssetOnAssetWithSyndicationIdentifier:(id)a0 inLibrary:(id)a1;
- (void)processWorkItemObjectID:(id)a0 sourceLibrary:(id)a1 targetLibrary:(id)a2 completion:(id /* block */)a3;
- (id)_assetWithUUID:(id)a0 orSyndicationIdentifier:(id)a1 inLibrary:(id)a2;
- (void)_deleteAllWorkItemsInSourceLibrary:(id)a0;
- (BOOL)_deleteAssetWithUuid:(id)a0 syndicationIdentifier:(id)a1 fromLibrary:(id)a2;
- (void)_finishProcessingWorkItemManagedObjectID:(id)a0 library:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (BOOL)_inTransaction_deleteAssetWithUuid:(id)a0 syndicationIdentifier:(id)a1 fromLibrary:(id)a2;
- (void)_initialSyncTransferNextAssetFromSourceLibrary:(id)a0 targetLibrary:(id)a1 iterator:(id)a2 completion:(id /* block */)a3;
- (void)_processSyndicationLibraryAsset:(id)a0 targetLibrary:(id)a1 completion:(id /* block */)a2;
- (void)_syncAsset:(id)a0 toLibrary:(id)a1 completion:(id /* block */)a2;
- (void)performInitialSyncWithSourceLibrary:(id)a0 targetLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemObjectIDsInLibrary:(id)a0 error:(id *)a1;

@end
