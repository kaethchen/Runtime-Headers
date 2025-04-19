@interface WeatherDaemon.WDSJWTAuthenticatorServiceListener : NSObject <WeatherDaemon.WDSJWTAuthenticatorServiceListenerType, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ authServiceRequestDeduper;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)generateTokenWithUrl:(id)a0 completion:(id /* block */)a1;

@end
