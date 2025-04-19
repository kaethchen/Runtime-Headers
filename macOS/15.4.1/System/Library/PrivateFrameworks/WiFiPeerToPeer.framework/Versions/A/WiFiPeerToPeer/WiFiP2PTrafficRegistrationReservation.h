@class NSString, WiFiP2PXPCConnection;

@interface WiFiP2PTrafficRegistrationReservation : NSObject <WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    unsigned long long _enabledCount;
}

@property (readonly, nonatomic) NSString *service;
@property (nonatomic) BOOL showsUIAlertOnError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)remoteObjectInterface;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initForService:(id)a0;
- (void)handleConnectionEstablishedWithProxy:(id)a0;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (id)trafficRegistrationConfiguration;

@end
