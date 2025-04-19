@interface CSAudioPlayingAppMonitor : CSEventMonitor

+ (id)sharedMonitor;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingAudioPlayingState;
- (void)handleAudioPlayingStateChange:(id)a0;
- (id)playingApps;

@end
