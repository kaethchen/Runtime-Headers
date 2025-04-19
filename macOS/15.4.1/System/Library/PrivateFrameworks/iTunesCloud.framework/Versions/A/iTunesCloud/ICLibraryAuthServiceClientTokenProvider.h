@class NSXPCConnection, NSString, AFMultiUserConnection, NSMutableDictionary, NSOperationQueue, NSObject, NSXPCListener, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_tokenCache;
    BOOL _isService;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
    AFMultiUserConnection *_siriConnection;
}

@property (class, readonly, nonatomic) ICLibraryAuthServiceClientTokenProvider *sharedProvider;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startService;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_addConnection:(id)a0;
- (void)_removeConnection:(id)a0;
- (void)stopService;
- (struct DevicePresetTokenResult { id x0; id x1; BOOL x2; })_checkTokenPresetsForDSIDs:(id)a0 forceRefresh:(BOOL)a1;
- (id)_clientConnection;
- (void)_commitCache;
- (struct DevicePresetTokenResult { id x0; id x1; BOOL x2; })_devicePresetErrorForConfiguration:(id)a0 WithSpecifiedDSIDs:(id)a1;
- (struct DevicePresetTokenResult { id x0; id x1; BOOL x2; })_devicePresetForConfiguration:(id)a0 withDSIDs:(id)a1;
- (struct DevicePresetTokenResult { id x0; id x1; BOOL x2; })_devicePresetNonDiscriminatoryFailForConfiguration:(id)a0;
- (struct DevicePresetTokenResult { id x0; id x1; BOOL x2; })_devicePresetNonDiscriminatorySucceedForConfiguration:(id)a0 DSIDsToUse:(id)a1;
- (void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)a0;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (BOOL)_isPrivacyAcknowledgementRequiredForAccountDSID:(id)a0;
- (void)_loadCache;
- (id)_loggableTokenCacheDictionary;
- (void)_refreshTokenForDSID:(id)a0 forExternalRequest:(BOOL)a1 completion:(id /* block */)a2;
- (void)_refreshTokensForDSIDs:(id)a0 forExternalRequest:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_shouldStopBackgroundRefreshForError:(id)a0;
- (BOOL)_updateEntriesForAccountsChanges;
- (void)_updateRefreshTimer;
- (void)_updateTokenCacheEntryForDSID:(id)a0 tokenResult:(id)a1 error:(id)a2;
- (void)addTokenResult:(id)a0 forDSID:(id)a1 completion:(id /* block */)a2;
- (id)cachedTokenAndResetCache:(BOOL)a0;
- (void)getAllTokenStatusForAssistantForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)getAllTokensForAssistantForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)getTokenForDSID:(id)a0 forceRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)getTokenForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)getTokenResultForDSID:(id)a0 forceRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)getTokenResultsForDSIDs:(id)a0 forceRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)getTokenStatusForDSIDs:(id)a0 forcingRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)getTokenStatusForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;

@end
