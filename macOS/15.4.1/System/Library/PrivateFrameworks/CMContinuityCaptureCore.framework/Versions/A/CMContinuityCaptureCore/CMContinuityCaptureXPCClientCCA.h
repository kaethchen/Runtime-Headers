@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CMContinuityCaptureXPCServerActionCCA;

@interface CMContinuityCaptureXPCClientCCA : NSObject <CMContinuityCaptureXPCServerActionCCA, CMContinuityCaptureXPCClientActionCCA> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id<CMContinuityCaptureXPCServerActionCCA> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_service;
- (void)connectToContinuityCaptureServerWithDelegate:(id)a0;
- (void)currentDeviceList:(id /* block */)a0;
- (void)debugInfo:(id /* block */)a0;
- (void)disableAutoTransportSwitch:(BOOL)a0 deviceIdentifier:(id)a1;
- (void)disconnectSession:(id)a0;
- (void)notifyStateChange:(id)a0 forEntity:(unsigned long long)a1;
- (void)postEvent:(id)a0 data:(id)a1 deviceIdentifier:(id)a2;
- (void)setControl:(id)a0 withValue:(id)a1 deviceIdentifier:(id)a2;
- (void)unhideDeviceWithIdentifier:(id)a0;

@end
