@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CMContinuityCaptureXPCServerDelegateCCA;

@interface CMContinuityCaptureXPCServerCCA : NSObject <NSXPCListenerDelegate, CMContinuityCaptureXPCClientActionCCA> {
    NSMutableArray *_connections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    NSXPCListener *_serviceListener;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    id<CMContinuityCaptureXPCServerDelegateCCA> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_enumerateConnectionsWithBlock:(id /* block */)a0;
- (void)currentDeviceList:(id /* block */)a0;
- (void)debugInfo:(id /* block */)a0;
- (void)disableAutoTransportSwitch:(BOOL)a0 deviceIdentifier:(id)a1;
- (void)disconnectSession:(id)a0;
- (void)notifyStateChange:(id)a0 forEntity:(unsigned long long)a1;
- (void)postEvent:(id)a0 data:(id)a1 deviceIdentifier:(id)a2;
- (void)setControl:(id)a0 withValue:(id)a1 deviceIdentifier:(id)a2;
- (void)startListeningWithDelegate:(id)a0;
- (void)unhideDeviceWithIdentifier:(id)a0;

@end
