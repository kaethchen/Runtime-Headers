@class CWFXPCRequestProxy, NSString, CWFPrivateMACManager, CWFAutoJoinManager, NSSet, NSObject, NSMutableArray, RBSProcessMonitor, NSMutableSet;
@protocol CWFXPCManagerDelegate, OS_dispatch_queue;

@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate> {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableArray *_mutableXPCListeners;
    CWFXPCRequestProxy *_XPCRequestProxy;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processMonitorPIDs;
}

@property (retain) id<CWFXPCManagerDelegate> delegate;
@property (copy) NSSet *supportedRequestTypes;
@property (readonly) CWFAutoJoinManager *autoJoinManager;
@property (readonly) CWFPrivateMACManager *privateMACManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)XPCListener:(id)a0 addedXPCConnection:(id)a1;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 updatedRegisteredEventIDs:(id)a2;
- (void)XPCListener:(id)a0 invalidatedXPCConnection:(id)a1;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (void)XPCRequestProxy:(id)a0 invalidatedXPCConnection:(id)a1;
- (void)XPCRequestProxy:(id)a0 sendXPCEvent:(id)a1 reply:(id /* block */)a2;
- (void)__updateProcessMonitorConfiguration;
- (id)endpointWithServiceType:(long long)a0;
- (id)initWithServiceTypes:(id)a0;
- (id)localXPCClientWithServiceType:(long long)a0;
- (id)privateMACManager;
- (id)registeredActivities;
- (id)registeredEventIDs;
- (void)sendXPCEvent:(id)a0 reply:(id /* block */)a1;
- (void)setTargetQueue:(id)a0 requestType:(long long)a1 interfaceName:(id)a2;

@end
