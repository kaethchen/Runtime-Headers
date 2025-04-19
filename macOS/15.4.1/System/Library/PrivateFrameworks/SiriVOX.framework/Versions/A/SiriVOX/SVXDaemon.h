@class NSString, SVXSiriActivationListenerDelegate, SVXQueuePerformer, SVXVirtualDeviceManager, SVXRemoraVirtualDeviceManager, SVXPlatformDependenciesTracker, SVXDaemonRunningObserver, SVXHomeHubManagerObserver, NSXPCListener, SVXRebootExecutor, SVXClientServiceServerConnectionFactory;

@interface SVXDaemon : NSObject <NSXPCListenerDelegate, SVXClientServiceServerConnectionDelegate> {
    SVXQueuePerformer *_clientServiceQueuePerformer;
    SVXQueuePerformer *_mainQueuePerformer;
    NSXPCListener *_clientServiceListener;
    SVXPlatformDependenciesTracker *_platformDependenciesTracker;
    SVXVirtualDeviceManager *_virtualDeviceManager;
    SVXDaemonRunningObserver *_runningObserver;
    SVXSiriActivationListenerDelegate *_siriActivationListenerDelegate;
    SVXRemoraVirtualDeviceManager *_remoraVirtualDeviceManager;
    SVXHomeHubManagerObserver *_homeHubManagerObserver;
    SVXRebootExecutor *_rebootExecutor;
    SVXClientServiceServerConnectionFactory *_connectionFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stop;
- (void)_enumerateVirtualDevicesUsingBlock:(id /* block */)a0;
- (void)clientServiceServerConnectionDidInvalidate:(id)a0;
- (BOOL)handleClientServiceXPCConnection:(id)a0;
- (id)initWithClientServiceQueuePerformer:(id)a0 mainQueuePerformer:(id)a1 clientServiceListener:(id)a2 platformDependenciesTracker:(id)a3 virtualDeviceManager:(id)a4 runningObserver:(id)a5 siriActivationListenerDelegate:(id)a6 remoraVirtualDeviceManager:(id)a7 homeHubManagerObserver:(id)a8 rebootExecutor:(id)a9 connectionFactory:(id)a10;
- (void)startWithPlatformDependencies:(id)a0;

@end
