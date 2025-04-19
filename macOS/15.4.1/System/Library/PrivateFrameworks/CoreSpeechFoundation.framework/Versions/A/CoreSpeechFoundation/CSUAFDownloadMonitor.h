@class NSDictionary;

@interface CSUAFDownloadMonitor : CSEventMonitor {
    NSDictionary *_assetSetDict;
    id _observerToken;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)notifyAssets:(id)a0 onQueue:(id)a1;

@end
