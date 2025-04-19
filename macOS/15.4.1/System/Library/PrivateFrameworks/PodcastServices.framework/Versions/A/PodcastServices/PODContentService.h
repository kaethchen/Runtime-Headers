@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PODContentService : PODService <PODContentServiceClientProtocol, PODContentServiceProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addChanges:(id)a0 completion:(id /* block */)a1;
- (void)addContentObserver:(id)a0;
- (void)addServiceObserver:(id)a0;
- (void)contentServiceDidReceiveChangesInDomain:(id)a0;
- (void)discardChangesUpToAnchor:(id)a0 completion:(id /* block */)a1;
- (void)markFinishedMigratingChangeSet:(id)a0 completion:(id /* block */)a1;
- (void)obtainSecurityScopedURL:(id)a0 response:(id /* block */)a1;
- (void)removeContentObserver:(id)a0;
- (void)removeServiceObserver:(id)a0;
- (void)requestAllMigratableContent:(id)a0 response:(id /* block */)a1;
- (void)requestChangesSinceAnchor:(id)a0 response:(id /* block */)a1;
- (void)requestContentImportStateForDomain:(id)a0 response:(id /* block */)a1;
- (void)requestITunesManagedLibraryLocation:(id /* block */)a0;
- (void)requestSyncableContentSince:(id)a0 response:(id /* block */)a1;
- (void)sendChangesToPodcastWithUpdatedPlayMetadata:(id)a0 sourceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)withEachObserver:(id /* block */)a0;
- (void)withProxyForwardingForMessage:(SEL)a0 perform:(id /* block */)a1 errorHandler:(id /* block */)a2;

@end
