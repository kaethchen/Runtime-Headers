@class NSString, WiFiP2PXPCConnection;

@interface WiFiRemoteClientCountryCodeMonitor : NSObject <WiFiRemoteClientCountryCodeMonitorXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
}

@property (copy, nonatomic) id /* block */ setCountryCodeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)exportedObject;
- (void)beginMonitoring;
- (void)endMonitoring;
- (void)setCountryCode:(id)a0;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;

@end
