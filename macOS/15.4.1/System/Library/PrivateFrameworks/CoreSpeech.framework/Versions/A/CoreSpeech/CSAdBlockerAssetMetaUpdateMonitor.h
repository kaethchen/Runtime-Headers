@interface CSAdBlockerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (const char *)_asssetMetaUpdatedKey;
- (void)_didReceiveNewAdBlockerAssetMetaData;
- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;

@end
