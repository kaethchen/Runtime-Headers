@interface CSAudioServerCrashMonitor : CSEventMonitor

@property (nonatomic) unsigned long long serverState;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveMediaserverNotification:(unsigned long long)a0;
- (void)_mediaserverdDidRestart;
- (void)_notifyObserver:(id)a0 withMediaserverState:(unsigned long long)a1;

@end
