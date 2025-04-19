@class NSXPCListenerEndpoint, LAEnvironmentState, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface LAEnvironment : NSObject {
    LAEnvironmentState *_state;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    int _notifyToken;
    NSXPCListenerEndpoint *_environmentServiceEndpoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (class, readonly, nonatomic) LAEnvironment *currentUser;

@property (readonly, nonatomic) LAEnvironmentState *state;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_updateState;
- (void)_bootstrapServiceType:(id)a0 completion:(id /* block */)a1;
- (id)_createConnectionToDaemon;
- (void)_environmentServiceEndpointWithCompletion:(id /* block */)a0;
- (void)_handleDarwinNotification;
- (void)_notifyObserversAboutUpdateFrom:(id)a0;
- (void)_registerDarwinNotification;
- (void)_synchronousProxyToEnvironmentServiceWithCompletion:(id /* block */)a0;
- (void)_synchronousProxyToEnvironmentServiceWithEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_unregisterDarwinNotification;
- (void)_updateStateWithSynchronousProxyToEnvironmentService:(id)a0;
- (void)waitForStateUpdate;

@end
