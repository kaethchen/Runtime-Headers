@class NSString, RWIRelay, NSObject;
@protocol OS_xpc_object;

@interface RWIRelayDelegateMac : NSObject <RWIRelayDelegate> {
    RWIRelay *_relay;
    NSObject<OS_xpc_object> *_xpcClientConnectionListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_connection:(id)a0 hasEntitlement:(const char *)a1;
- (void)relayClientConnectionDidChange:(id)a0;
- (void)_handleIncomingConnectionEvent:(id)a0;
- (BOOL)_isProxyApplication:(id)a0;
- (void)relay:(id)a0 activateApplicationWithBundleIdentifier:(id)a1;
- (void)relay:(id)a0 applicationConnected:(id)a1;
- (void)relay:(id)a0 applicationDisconnected:(id)a1;
- (id)relay:(id)a0 applicationInfoForIncomingConnection:(id)a1 bundleIdentifier:(id)a2;
- (void)relay:(id)a0 applicationUpdated:(id)a1;
- (void)relay:(id)a0 remoteInspectionEnablementDidChange:(BOOL)a1;
- (void)relay:(id)a0 unhandledApplicationXPCMessage:(id)a1;
- (void)relayInitialize:(id)a0;
- (id)relaySetupResponseForClientConnection:(id)a0;

@end
