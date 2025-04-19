@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    long long _hearstRouteStatus;
}

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (BOOL)jarvisConnected;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_systemControllerDied:(id)a0;
- (BOOL)carPlayConnected;
- (void)getHearstRouteStatus:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (long long)hearstRouteStatus;
- (void)_startObservingAudioRouteChange;
- (long long)hearstOwnership;
- (void)_fetchHearstRouteStatusWithCompletion:(id /* block */)a0;
- (void)_notifyHearstRouteStatus:(long long)a0;
- (void)activeAudioRouteDidChange:(id)a0;
- (void)getHearstOwnershipStatus:(id /* block */)a0;

@end
