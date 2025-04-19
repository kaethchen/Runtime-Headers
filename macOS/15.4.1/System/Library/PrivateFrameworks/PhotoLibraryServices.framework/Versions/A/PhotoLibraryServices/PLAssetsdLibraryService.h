@class PLPhotoLibraryBundleController, NSString, PLAssetsdService, PLAssetsdConnectionAuthorization, PLXPCPhotoLibraryStoreContainer, NSMutableArray;

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol> {
    PLXPCPhotoLibraryStoreContainer *_xpcPhotoLibraryStoreContainer;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSMutableArray *_preRunningProgressFollowers;
    NSMutableArray *_postRunningProgressFollowers;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLAssetsdService *_assetsdService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)requiredLibraryServicesStateForURL:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)libraryBundle;
- (void)recoverFromCrashIfNeeded;
- (id)_postRunningProgress;
- (id)_preRunningProgress;
- (id)_returnValueForProgress:(id)a0 addTo:(id)a1;
- (void)_sendClientReply:(id /* block */)a0 sandboxExtensionsByPath:(id)a1 error:(id)a2;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (void)getCurrentModelVersionWithReply:(id /* block */)a0;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(id /* block */)a0;
- (id)importFileSystemAssetsWithReason:(id)a0 force:(BOOL)a1 reply:(id /* block */)a2;
- (id)initWithLibraryServicesManager:(id)a0 bundleController:(id)a1 connectionAuthorization:(id)a2 assetsdService:(id)a3;
- (void)isLibraryReadyForImportWithReply:(id /* block */)a0;
- (void)launchAssetsd;
- (id)newLibraryOpener;
- (void)openApplicationOwnedFoldersWithReply:(id /* block */)a0;
- (void)openPhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (id)postOpenProgressWithReply:(id /* block */)a0;
- (void)proxyLockFileWithDatabasePath:(id)a0 reply:(id /* block */)a1;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 reply:(id /* block */)a2;
- (void)repairSingletonObjectsWithReply:(id /* block */)a0;
- (void)resetFaceAnalysisWithResetLevel:(long long)a0 withReply:(id /* block */)a1;
- (id)resetPersonsWithReply:(id /* block */)a0;
- (id)resetSocialGroupsWithReply:(id /* block */)a0;
- (id)sandboxExtensionsByPathForLibraryAccessRole:(long long)a0;
- (void)searchDonationProgressForTaskIDs:(id)a0 reply:(id /* block */)a1;
- (id)transferAssetsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 reply:(id /* block */)a3;
- (id)transferPersonsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 reply:(id /* block */)a3;
- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 reply:(id /* block */)a3;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)validateOrRebuildPhotoLibraryDatabaseWithReply:(id /* block */)a0;

@end
