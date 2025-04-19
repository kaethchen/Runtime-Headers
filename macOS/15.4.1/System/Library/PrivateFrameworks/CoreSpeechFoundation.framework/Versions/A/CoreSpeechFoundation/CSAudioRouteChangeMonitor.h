@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)jarvisConnected;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)carPlayConnected;
- (void)getHearstRouteStatus:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (long long)hearstRouteStatus;
- (long long)hearstOwnership;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)routeIsDoAPSupportedWithRouteUID:(id)a0 withCompletion:(id /* block */)a1;

@end
