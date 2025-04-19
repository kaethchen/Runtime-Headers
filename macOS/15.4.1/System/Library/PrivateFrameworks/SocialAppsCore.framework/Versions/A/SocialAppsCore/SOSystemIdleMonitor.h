@class NSMutableDictionary;

@interface SOSystemIdleMonitor : NSObject {
    id _globalEventMonitor;
    id _localEventMonitor;
    NSMutableDictionary *_listenerLookup;
    NSMutableDictionary *_timerLookup;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (double)idleTime;
- (void)_receivedEvent;
- (id)_createTimerWithInterval:(double)a0 originalInterval:(double)a1;
- (void)_timeoutTimerFired:(id)a0;
- (void)_timerActionOnSystemBecameActive;
- (void)addTimeoutListener:(id)a0 seconds:(unsigned long long)a1;
- (void)listenForNextSystemActivity;
- (void)removeTimeoutListener:(id)a0;

@end
