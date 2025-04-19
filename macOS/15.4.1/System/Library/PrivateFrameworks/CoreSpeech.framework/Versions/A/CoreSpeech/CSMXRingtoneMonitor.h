@class NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface CSMXRingtoneMonitor : CSEventMonitor <CSMXSessionMonitorDelegate> {
    NSTimer *_ringtoneTimeoutTimer;
    NSObject<OS_dispatch_queue> *_eventMonitorQueue;
}

@property BOOL isAnyRingtoneCurrentlyPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_cancelTimeoutTimer;
- (void)_handleEndRingtone;
- (void)_handleStartRingtone;
- (void)_notifyObserversOfRingtoneChange;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startTimeoutTimer;
- (void)_timerCallback;
- (void)mxSessionMonitorSomeClientWentActive:(id)a0;

@end
