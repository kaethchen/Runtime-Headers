@class CADisplayLink;

@interface PXCADisplayLink : PXDisplayLink {
    CADisplayLink *_displayLink;
    double _updateCycleTimestamp;
    double _updateCycleTargetTimestamp;
    unsigned long long _frameRateRangeType;
}

@property (nonatomic) BOOL isHighFrameRateActive;

+ (BOOL)supportsSpecificScreen;
+ (BOOL)highFramerateRequiresReasonAndRange;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (double)timestamp;
- (id)queue;
- (double)duration;
- (double)targetTimestamp;
- (unsigned int)highFrameRateReason;
- (long long)preferredFramesPerSecond;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (void)setPaused:(BOOL)a0;
- (BOOL)paused;
- (double)currentMediaTime;
- (void)_tick:(id)a0;
- (unsigned long long)frameRateRangeType;
- (double)resolvedDuration;
- (void)setFrameRateRangeType:(unsigned long long)a0;
- (void)_addToRunLoop;
- (void)_updateIsHighFrameRateActive;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4 screen:(id)a5 queue:(id)a6;

@end
