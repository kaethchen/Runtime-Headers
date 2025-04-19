@class NSXPCListener, NSString, NSXPCConnection, NSMutableDictionary, NSFileAccessNode, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NSFileAccessArbiter : NSObject <NSXPCListenerDelegate, NSFileAccessArbiterXPCInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listenerConnection;
    BOOL _isStopped;
    BOOL _isSubarbiter;
    NSMutableDictionary *_accessClaimsByID;
    NSMutableDictionary *_accessClaimTransactionsByID;
    NSMutableDictionary *_subarbitrationClaimsByID;
    NSMutableDictionary *_reactorsByID;
    NSMutableDictionary *_reactorTransactionsByID;
    NSMutableDictionary *_kernelMaterializationClaimCancellers;
    NSMutableDictionary *_kernelMaterializationClaimTransactions;
    NSFileAccessNode *_rootNode;
    NSXPCConnection *_superarbitrationServer;
    NSObject<OS_dispatch_source> *_debugSignalSource;
    struct _CFVolumeObserver { } *_volumeObserver;
    struct __CFDictionary { } *_volumeGroupUUIDToFakelinkGroupCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _volumeGroupUUIDToFakelinkGroupCacheLock;
}

@property (readonly) NSXPCConnection *superarbitrationConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_wakeUpFileProviderWithUID:(unsigned int)a0 urls:(id)a1 queue:(id)a2 thenContinue:(id /* block */)a3;
+ (void)ensureProvidersIfNecessaryForClaim:(id)a0 user:(unsigned int)a1 atLocations:(id)a2 queue:(id)a3 thenContinue:(id /* block */)a4;
+ (id)entitlementForConnection:(id)a0 key:(id)a1;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (oneway void)revokeSubarbitrationClaimForID:(id)a0;
- (void)stopArbitrating;
- (void)_writerWithPurposeID:(id)a0 didMoveItemAtURL:(id)a1 toURL:(id)a2 withFSID:(struct fsid { int x0[2]; })a3 andFileID:(unsigned long long)a4;
- (BOOL)_addPresenter:(id)a0 ofItemAtURL:(id)a1 watchingFile:(BOOL)a2 withLastEventID:(id)a3;
- (BOOL)_addProvider:(id)a0 ofItemsAtURL:(id)a1;
- (void)_enumerateSubarbitersUsingBlock:(id /* block */)a0;
- (void)_grantAccessClaim:(id)a0;
- (void)_grantSubarbitrationClaim:(id)a0 withServer:(id)a1;
- (void)_handleCanceledClient:(id)a0;
- (void)_handleDiskEvent:(unsigned long long)a0 forDisk:(struct __DADisk { } *)a1 volumeURL:(struct __CFURL { } *)a2 alreadyOnQueue:(BOOL)a3;
- (void)_installImposterFirmlinksWithUUID:(id)a0 firmlinkURL:(id)a1 destinationURL:(id)a2 withFirmlinkManifestURL:(id)a3;
- (void)_registerForDebugInfoRequests;
- (void)_removeReactorForID:(id)a0;
- (void)_renameImposterFirmlinksWithUUID:(id)a0 toFirmlinkURL:(id)a1 andDestinationURL:(id)a2 withFirmlinkManifestURL:(id)a3;
- (void)_requestSandboxExtensionForPath:(id)a0 primaryPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)_revokeAccessClaimForID:(id)a0 fromLocal:(BOOL)a1;
- (void)_startArbitratingItemsAtURLs:(id)a0 withSuperarbitrationServer:(id)a1;
- (void)_uninstallImposterFirmlinksWithUUID:(id)a0;
- (void)_updateNodesForRemovedGroup:(id)a0 andNewGroup:(id)a1 alreadyOnQueue:(BOOL)a2;
- (void)_willRemoveReactor:(id)a0;
- (void)addPresenter:(id)a0 withID:(id)a1 fileURL:(id)a2 lastPresentedItemEventIdentifier:(id)a3 ubiquityAttributes:(id)a4 options:(unsigned long long)a5 responses:(unsigned long long)a6;
- (void)addProvider:(id)a0 withID:(id)a1 uniqueID:(id)a2 forProvidedItemsURL:(id)a3 options:(unsigned long long)a4 withServer:(id)a5 reply:(id /* block */)a6;
- (oneway void)cancelAccessClaimForID:(id)a0;
- (void)cancelMaterializationWithRequestID:(id)a0;
- (void)getDebugInformationIncludingEverything:(BOOL)a0 withString:(id)a1 fromPid:(int)a2 thenContinue:(id /* block */)a3;
- (void)getItemHasPresentersAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)grantAccessClaim:(id)a0 withReply:(id /* block */)a1;
- (void)grantSubarbitrationClaim:(id)a0 withServer:(id)a1 reply:(id /* block */)a2;
- (id)initWithQueue:(id)a0 isSubarbiter:(BOOL)a1 listener:(id)a2;
- (void)makeProviderMaterializeFileAtURL:(id)a0 kernelInfo:(id)a1 withRequestID:(id)a2 fromProcess:(struct { unsigned int x0[8]; })a3 completionHandler:(id /* block */)a4;
- (void)performBarrierWithCompletionHandler:(id /* block */)a0;
- (void)performMateralizationOfURL:(id)a0 withProvider:(id)a1 fakeClaim:(id)a2 kernelInfo:(id)a3 requestID:(id)a4 fromProcess:(struct { unsigned int x0[8]; })a5 completionHandler:(id /* block */)a6;
- (oneway void)prepareToArbitrateForURLs:(id)a0;
- (void)provideDebugInfoWithLocalInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)provideSubarbiterDebugInfoIncludingEverything:(BOOL)a0 completionHandler:(id /* block */)a1;
- (oneway void)removePresenterWithID:(id)a0;
- (oneway void)removeProviderWithID:(id)a0 uniqueID:(id)a1;
- (void)resolveReparentRequestOfFileAtURL:(id)a0 toDestinationDirectory:(id)a1 withRequestID:(id)a2 operation:(unsigned int)a3 fromProcess:(struct { unsigned int x0[8]; })a4 completionHandler:(id /* block */)a5;
- (oneway void)revokeAccessClaimForID:(id)a0;
- (id)rootNode;
- (void)startArbitratingWithReply:(id /* block */)a0;
- (oneway void)tiePresenterForID:(id)a0 toItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeSharingOfItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeUbiquityAttributes:(id)a1 ofItemAtURL:(id)a2;
- (oneway void)writerWithPurposeID:(id)a0 didChangeUbiquityOfItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didDisconnectItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didMakeItemDisappearAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didMoveItemAtURL:(id)a1 toURL:(id)a2 withFSID:(struct fsid { int x0[2]; })a3 andFileID:(unsigned long long)a4;
- (oneway void)writerWithPurposeID:(id)a0 didReconnectItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didVersionChangeOfKind:(id)a1 toItemAtURL:(id)a2 withClientID:(id)a3 name:(id)a4;

@end
