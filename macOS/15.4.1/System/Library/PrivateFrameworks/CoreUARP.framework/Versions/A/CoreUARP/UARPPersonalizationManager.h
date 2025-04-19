@class NSString, NSXPCListener, NSObject;
@protocol OS_os_log, OS_dispatch_queue, UARPPersonalizationHelperProtocol;

@interface UARPPersonalizationManager : NSObject <NSXPCListenerDelegate, UARPPersonalizationProtocol> {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceName;
    NSString *_entitlement;
    NSXPCListener *_listener;
    id<UARPPersonalizationHelperProtocol> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)getOutstandingPersonalizationRequests:(id)a0 reply:(id /* block */)a1;
- (id)initWithMachServiceName:(id)a0 entitlement:(id)a1 delegate:(id)a2 queue:(id)a3;
- (void)personalizationResponse:(id)a0 updaterName:(id)a1;
- (BOOL)xpcConnectionHasEntitlement:(id)a0;

@end
