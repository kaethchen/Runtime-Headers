@interface MediaCoreUI.EnvironmentMonitor : NSObject <ICEnvironmentMonitorObserver> {
    void /* unknown type, empty encoding */ _isNetworkConstrained;
    void /* unknown type, empty encoding */ _thermalLevel;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)environmentMonitorDidChangeThermalLevel:(id)a0;

@end
