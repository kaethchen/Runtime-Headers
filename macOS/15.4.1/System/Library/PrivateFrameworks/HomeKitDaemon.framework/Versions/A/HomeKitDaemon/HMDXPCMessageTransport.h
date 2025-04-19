@class NSString, NSArray, NSXPCInterface, HMDProcessMonitor, NSDictionary, HMXPCMessageTransportConfiguration, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, HMDXPCListener, HMDAppProtectionGuard;

@interface HMDXPCMessageTransport : HMFMessageTransport <HMDXPCClientConnectionDelegate, HMDXPCListenerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMXPCMessageTransportConfiguration *_configuration;
    id<HMDXPCListener> _listener;
    id<HMDAppProtectionGuard> _appProtectionGuard;
    NSMutableSet *_mutableConnections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
}

@property (class, readonly) HMDXPCMessageTransport *defaultTransport;
@property (class, readonly) HMDXPCMessageTransport *accessorySetupTransport;

@property (copy) id /* block */ clientConnectionFactory;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMDProcessMonitor *processMonitor;
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSDictionary *stateDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)stop;
- (id)initWithConfiguration:(id)a0;
- (void)connectionDidStart:(id)a0;
- (id)logIdentifier;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)connectionDidActivate:(id)a0;
- (void)connectionDidDeactivate:(id)a0;
- (void)connectionDidInvalidate:(id)a0;
- (void)handleProcessStateDidChangeNotification:(id)a0;
- (id)initWithConfiguration:(id)a0 listener:(id)a1 processMonitor:(id)a2 appProtectionGuard:(id)a3;

@end
