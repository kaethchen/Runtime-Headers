@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriInCallEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isEnabled;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)_stopMonitoring;
- (BOOL)_checkSiriInCallEnabled;
- (void)_didReceiveSiriInCallChangedInQueue:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_siriInCallEnabledDidChangeEnabledDidChange;
- (void)_startMonitoringWithQueue:(id)a0;

@end
