@class CCSetChangeXPCListener, CCRapportSyncEngine, NSObject;
@protocol OS_dispatch_queue;

@interface CCPersonaSyncManager : NSObject {
    CCRapportSyncEngine *_syncEngine;
    NSObject<OS_dispatch_queue> *_queue;
    CCSetChangeXPCListener *_setChangeListener;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)handleSetChanges:(id)a0;
- (void)setupSyncEngineToHandleIncomingRequestsForPersona:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncAllPersonasNowWithReason:(unsigned long long)a0 activity:(id)a1 completionHandler:(id /* block */)a2;
- (id)syncEngineForCurrentPersona;

@end
