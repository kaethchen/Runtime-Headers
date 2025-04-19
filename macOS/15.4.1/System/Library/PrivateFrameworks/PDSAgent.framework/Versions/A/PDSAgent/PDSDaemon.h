@class PDSUserTracker, PDSXPCServer, PDSCoordinator, PDSRequestQueue, NSString, PDSCDCacheContainer, IDSServerBag, PDSConfiguration, PDSEntryStore;
@protocol PDSCDCache, PDSKVStore;

@interface PDSDaemon : NSObject <PDSDaemonListenerVendor>

@property (retain, nonatomic) PDSConfiguration *configuration;
@property (retain, nonatomic) PDSXPCServer *XPCServer;
@property (retain, nonatomic) PDSCDCacheContainer *cacheContainer;
@property (retain, nonatomic) IDSServerBag *bag;
@property (weak, nonatomic) PDSEntryStore *entryStore;
@property (weak, nonatomic) id<PDSCDCache, PDSKVStore> underlyingStorage;
@property (retain, nonatomic) PDSUserTracker *userTracker;
@property (retain, nonatomic) PDSCoordinator *coordinator;
@property (retain, nonatomic) PDSRequestQueue *requestQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (id)initWithConfiguration:(id)a0;
- (id)_entryStore;
- (void)_setupSysdiagnoseDump;
- (id)_underlyingStorage;
- (id)remoteInternalListener;
- (id)remoteListenerForAllClientIDs;
- (id)remoteListenerForClientIDs:(id)a0;

@end
