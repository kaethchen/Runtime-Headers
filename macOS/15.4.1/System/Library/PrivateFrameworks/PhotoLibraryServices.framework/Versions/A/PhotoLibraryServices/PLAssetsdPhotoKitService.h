@class NSString, NSPersistentStoreCoordinator, PLCameraCaptureTaskConstraintCoordinator, PLAssetsdConnectionAuthorization;

@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLSyndicationSyncEngineDelegate, PLAssetsdPhotoKitServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCameraCaptureTaskConstraintCoordinator *_cameraTaskConstraintCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)persistentStoreCoordinator;
- (id)clientBundleID;
- (id)clientDisplayName;
- (id)clientDescription;
- (unsigned long long)libraryRole;
- (id)analyzeLibraryForFeature:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)analyzeAssets:(id)a0 forFeature:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)_processUniversalSearchJITForAsset:(id)a0 cssiUniqueIdentifier:(id)a1 bundleID:(id)a2 processingTypes:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)applyChangesRequest:(id)a0 reply:(id /* block */)a1;
- (void)cancelReservedCloudIdentifiersWithEntityName:(id)a0 reply:(id /* block */)a1;
- (void)commitRequest:(id)a0 reply:(id /* block */)a1;
- (void)executeQueryForSyncManager:(id)a0 type:(long long)a1 startDate:(id)a2 endDate:(id)a3 batchHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)executeQueryForSyncManager:(id)a0 type:(long long)a1 startDate:(id)a2 endDate:(id)a3 itemHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)getUUIDsForAssetObjectURIs:(id)a0 filterPredicate:(id)a1 reply:(id /* block */)a2;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (void)processUniversalSearchJITForAssetUUID:(id)a0 processingTypes:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(id)a0 bundleID:(id)a1 processingTypes:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)reserveCloudIdentifiersWithEntityName:(id)a0 count:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)reservedCloudIdentifiersWithEntityName:(id)a0 reply:(id /* block */)a1;
- (id)resetStateForMediaProcessingTaskID:(unsigned long long)a0 assetUUIDs:(id)a1 resetOptions:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)resolveLocalIdentifiersForCloudIdentifiers:(id)a0 reply:(id /* block */)a1;
- (BOOL)syncManager:(id)a0 shouldContinueWithLibrary:(id)a1;

@end
