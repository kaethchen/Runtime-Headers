@class SEMSettings, NSString, NSXPCListener, SEMIndexSiteCache, SEMIndexSiteManager, NSObject, CCSetChangeXPCListener;
@protocol OS_dispatch_queue;

@interface SEMDispatcher : NSObject <SEMIndexSiteAvailabilityObserver, NSXPCListenerDelegate> {
    SEMIndexSiteManager *_indexSiteManager;
    SEMIndexSiteCache *_indexSiteCache;
    SEMSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_adminServiceListener;
    CCSetChangeXPCListener *_setChangeListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)handleXPCEvent:(id)a0;
- (void)registerXPCActivities;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (id)administrator;
- (void)setupXPCListeners;
- (void)handleSettingsChange;
- (void)handleSetChangeBatch:(id)a0;
- (void)indexSiteAvailableWithType:(unsigned char)a0;
- (id)initWithIndexSiteManager:(id)a0 indexSiteCache:(id)a1 settings:(id)a2 queue:(id)a3;
- (void)runMaintenanceWithShouldDefer:(id /* block */)a0;

@end
