@class NSLock;

@interface SCROutputTimerComponent : SCROutputComponent {
    struct __CFDictionary { } *_activeTimers;
    NSLock *_timersArrayLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (int)preflightSequentialSteps:(id)a0 runnerName:(id)a1;
- (void)timer:(struct __CFRunLoopTimer { } *)a0 firedForAction:(id)a1 runner:(id)a2;

@end
