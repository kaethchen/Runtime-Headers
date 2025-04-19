@interface VFXClock : NSObject {
    double _lastUpdateTime;
    BOOL _wasPaused;
    struct __CFXWorld { } *_world;
}

@property (nonatomic) struct VFXClockTimeRange { double begin; double end; } replayLoopRange;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) float speed;
@property (nonatomic) double time;

- (void)dealloc;
- (id)init;
- (void)setWorld:(struct __CFXWorld { } *)a0;
- (void)_updateVFXCorePause;
- (void)_updateVFXCoreSpeedFactor;
- (void)_updateVFXCoreTime:(double)a0;
- (void)_updateWithAbsoluteTime:(double)a0 usingLoopRange:(struct VFXClockTimeRange { double x0; double x1; })a1;
- (void)updateWithAbsoluteTime:(double)a0;

@end
