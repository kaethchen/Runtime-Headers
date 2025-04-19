@interface CSAVVCRecordingClientMonitor : CSEventMonitor

@property (readonly, nonatomic) unsigned long long numOfAVVCRecordingClients;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;

@end
