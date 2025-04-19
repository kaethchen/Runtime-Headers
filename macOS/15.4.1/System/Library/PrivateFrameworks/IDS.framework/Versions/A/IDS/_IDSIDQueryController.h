@class NSString, NSMutableDictionary, NSMapTable, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {
    NSString *_listenerGUID;
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_transactionIDToBlockMap;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceToken;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_listenerIDToServicesMap;
    id _delegateContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_createXPCConnectionOnQueue:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)_connect;
- (void)IDQueryCompletedWithFromURI:(id)a0 idStatusUpdates:(id)a1 service:(id)a2 success:(BOOL)a3 error:(id)a4;
- (void)flushQueryCache;
- (void)___oldDealloc;
- (id)__sendMessage:(id)a0 queue:(id)a1 reply:(id /* block */)a2 failBlock:(id /* block */)a3 waitForReply:(BOOL)a4;
- (id)_cacheForService:(id)a0;
- (id)_cachedStatusForDestination:(id)a0 service:(id)a1;
- (void)_callDelegatesForService:(id)a0 destinationToVerifierResult:(id)a1;
- (void)_callDelegatesWithBlock:(id /* block */)a0;
- (void)_callDelegatesWithBlock:(id /* block */)a0 delegateMap:(id)a1;
- (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)_currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 waitForReply:(BOOL)a5 completionBlock:(id /* block */)a6 completionBlockWithError:(id /* block */)a7;
- (id)_delegateMapForListenerID:(id)a0 service:(id)a1;
- (void)_disconnectFromQueryService;
- (BOOL)_flushQueryCacheForService:(id)a0;
- (BOOL)_hasCacheForService:(id)a0;
- (void)_idStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 allowRenew:(BOOL)a4 respectExpiry:(BOOL)a5 waitForReply:(BOOL)a6 forceRefresh:(BOOL)a7 bypassLimit:(BOOL)a8 completionBlock:(id /* block */)a9;
- (BOOL)_isListenerWithID:(id)a0 listeningToService:(id)a1;
- (void)_purgeIDStatusCache;
- (void)_purgeIDStatusCacheAfter:(double)a0;
- (BOOL)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 allowRefresh:(BOOL)a4 respectExpiry:(BOOL)a5 waitForReply:(BOOL)a6 forceRefresh:(BOOL)a7 bypassLimit:(BOOL)a8 queue:(id)a9 completionBlock:(id /* block */)a10;
- (void)_requestCacheForService:(id)a0 completionBlock:(id /* block */)a1;
- (void)_requestCachedStatusForDestinations:(id)a0 fromID:(id)a1 service:(id)a2 waitForReply:(BOOL)a3 respectExpiry:(BOOL)a4 listenerID:(id)a5 completionBlock:(id /* block */)a6;
- (void)_requestIDInfoForDestinations:(id)a0 fromID:(id)a1 service:(id)a2 infoTypes:(unsigned long long)a3 options:(id)a4 listenerID:(id)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (void)_requestRemoteDevicesForDestination:(id)a0 fromID:(id)a1 service:(id)a2 listenerID:(id)a3 waitForReply:(BOOL)a4 completionBlock:(id /* block */)a5;
- (void)_requestStatusForDestinations:(id)a0 fromID:(id)a1 service:(id)a2 waitForReply:(BOOL)a3 forceRefresh:(BOOL)a4 bypassLimit:(BOOL)a5 listenerID:(id)a6 completionBlock:(id /* block */)a7;
- (void)_setCurrentIDStatus:(long long)a0 forDestination:(id)a1 service:(id)a2;
- (BOOL)_sync_currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)_sync_currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)_sync_refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 completionBlock:(id /* block */)a4;
- (void)_updateCacheWithDictionary:(id)a0 service:(id)a1;
- (BOOL)_warmupQueryCacheForService:(id)a0;
- (void)addDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2 queue:(id)a3;
- (void)addListenerID:(id)a0 forService:(id)a1;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlockWithError:(id /* block */)a5;
- (void)daemonDisconnected;
- (BOOL)idInfoForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 infoTypes:(unsigned long long)a3 options:(id)a4 listenerID:(id)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (id)initWithDelegateContext:(id)a0 queueController:(id)a1;
- (void)ktPeerVerificationResultsUpdated:(id)a0 forService:(id)a1;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 forceRefresh:(BOOL)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (void)removeDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (BOOL)requiredIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)requiredIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void)setFromID:(id)a0;

@end
