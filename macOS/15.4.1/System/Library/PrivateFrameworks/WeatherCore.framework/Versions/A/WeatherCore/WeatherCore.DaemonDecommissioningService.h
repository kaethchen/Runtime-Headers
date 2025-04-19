@interface WeatherCore.DaemonDecommissioningService : NSObject <WeatherCore.DaemonDecommissioningServiceType, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ notificationManager;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)decommissionWith:(id /* block */)a0;

@end
