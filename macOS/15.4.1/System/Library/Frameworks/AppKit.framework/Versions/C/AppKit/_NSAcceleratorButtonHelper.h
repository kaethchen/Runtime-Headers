@class NSCell, NSTimer, NSValue;
@protocol _NSAcceleratorCell;

@interface _NSAcceleratorButtonHelper : NSObject {
    NSValue *_cellStorage;
    double _lastTime;
    double _accumulatedActions;
    double _timerTarget;
    double _initialDelay;
    float _minRate;
    float _maxRate;
    float _currentRate;
    BOOL _satisfiedInitialDelay;
}

@property (readonly, weak) NSCell<_NSAcceleratorCell> *cell;
@property (retain) NSTimer *timer;

+ (double)accelerationForGestureAmount:(double)a0;
+ (float)defaultPeriodicDelay;
+ (float)defaultPeriodicInterval;

- (void)dealloc;
- (void)_acceleratorTimerFired:(id)a0;
- (void)_scheduleTimer;
- (void)accelerationChanged:(double)a0;
- (id)initWithCell:(id)a0;
- (void)levelChanged:(unsigned long long)a0 withMaximum:(unsigned long long)a1;
- (void)pressComplete;
- (void)pressStarted:(BOOL)a0;

@end
