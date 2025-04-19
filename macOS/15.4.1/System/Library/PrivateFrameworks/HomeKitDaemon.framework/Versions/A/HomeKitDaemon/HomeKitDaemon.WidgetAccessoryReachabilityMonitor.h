@interface HomeKitDaemon.WidgetAccessoryReachabilityMonitor : SwiftNativeNSObject <HMDWidgetAccessoryReachabilityMonitor> {
    void /* unknown type, empty encoding */ widgetReachabilityByMonitoredAccessories;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ notificationCenter;
}

- (id)init;
- (void)handleAccessoryReachabilityChangedWithNotification:(id)a0;
- (void)handlePrimaryResidentDeviceManagerUpdatePrimaryResidentWithNotification:(id)a0;
- (BOOL)isAccessoryReachable:(id)a0;
- (void)startMonitoringAccessories:(id)a0 stopMonitoring:(id)a1 completionHandler:(id /* block */)a2;

@end
