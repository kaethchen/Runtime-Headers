@interface _PFDeferredInitializationTriggerWorkItem : _PFTriggeredWorkItem {
    struct __CFRunLoopObserver { } *_runLoopWakeObserver;
    struct __CFRunLoopObserver { } *_runLoopSleepObserver;
    unsigned long long _wakeTime;
    unsigned long long _sleepTime;
    unsigned long long _startTime;
    unsigned long long _wakePercent;
    unsigned long long _targetPercent;
    id /* block */ _timerFired;
}

- (id)init;
- (void).cxx_destruct;
- (void)startTimer;
- (void)beginMonitoring;
- (void)endMonitoring;
- (void)timerFired;
- (void)runLoopSleep;
- (void)runLoopWake;
- (BOOL)runsWorkItemsConcurrently;

@end
