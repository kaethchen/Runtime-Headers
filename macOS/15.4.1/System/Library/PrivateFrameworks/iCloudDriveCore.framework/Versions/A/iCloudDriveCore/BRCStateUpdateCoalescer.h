@class NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCStateUpdateCoalescer : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_coalesceUpdateTimer;
    NSDate *_lastCompletedTimer;
    double _timerMinDelay;
    double _timerMaxDelay;
    double _stableStateMinThreshold;
}

@property (readonly, nonatomic) double timerDelay;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_cancelAndReleaseUpdateTimerIfExists;
- (void)_setupCoalesceUpdateTimerWithUtilityHandlerBlock:(id /* block */)a0;
- (double)_timeSinceLastCompletedTimer;
- (id)initWithCallbackQueue:(id)a0 timerMinDelay:(double)a1 timerMaxDelay:(double)a2 stableStateMinThreshold:(double)a3;
- (void)updateStateWithCoalescing:(id /* block */)a0 oldState:(BOOL)a1 newState:(BOOL)a2;

@end
