@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)stopAnimation:(BOOL)a0;
- (void)setRunsForever:(BOOL)a0;
- (void)onTimerFired:(double)a0;
- (BOOL)runsForever;

@end
