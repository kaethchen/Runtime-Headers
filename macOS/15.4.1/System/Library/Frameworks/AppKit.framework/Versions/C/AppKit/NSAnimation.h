@class NSRunLoop, NSArray, NSDisplayLink1, NSMutableArray;
@protocol NSAnimationDelegate;

@interface NSAnimation : NSObject <NSCopying, NSCoding> {
    double _duration;
    float _currentProgress;
    float _framesPerSecond;
    id<NSAnimationDelegate> _delegate;
    NSDisplayLink1 *_displayLink;
    double _startTime;
    NSMutableArray *_progressMarks;
    NSAnimation *_startAnimation;
    float _startProgressTrigger;
    NSAnimation *_stopAnimation;
    float _stopProgressTrigger;
    NSRunLoop *_scheduledRunLoop;
    id /* block */ _progressHandler;
    int _nextProgressMark;
    struct { unsigned char delegateAnimationShouldStart : 1; unsigned char delegateAnimationDidStop : 1; unsigned char delegateAnimationDidEnd : 1; unsigned char delegateAnimationValueForProgress : 1; unsigned char delegateAnimationDidReachProgressMark : 1; unsigned char animating : 1; unsigned char blocking : 1; unsigned char sendProgressAllTheTime : 1; unsigned char animationCurve : 8; unsigned char animationBlockingMode : 2; unsigned short  : 14; } _aFlags;
}

@property (getter=_progressHandler, setter=_setProgressHandler:) id /* block */ _progressHandler;
@property (readonly, getter=isAnimating) BOOL animating;
@property float currentProgress;
@property double duration;
@property unsigned long long animationBlockingMode;
@property float frameRate;
@property unsigned long long animationCurve;
@property (readonly) float currentValue;
@property (weak) id<NSAnimationDelegate> delegate;
@property (copy) NSArray *progressMarks;
@property (readonly, copy) NSArray *runLoopModesForAnimating;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_screen;
- (void)_startAnimation;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (void)_runInNewThread;
- (void)_stopAnimation:(long long)a0;
- (void)_addTargetAnimation:(id)a0 start:(BOOL)a1 atProgress:(float)a2;
- (void)_advanceTimeWithDisplayLink:(id)a0;
- (void)_callHandlerWithProgress:(float)a0 didStop:(BOOL)a1 didFinish:(BOOL)a2;
- (void)_clearAllTargetAnimations;
- (void)_createDisplayLink;
- (double)_instantProgress;
- (void)_removeTargetAnimation:(id)a0 start:(BOOL)a1;
- (void)_runBlocking;
- (void)_setSendProgressAllTheTime:(BOOL)a0;
- (void)_setStartTime:(double)a0;
- (void)_startRunningNonBlocking;
- (void)addProgressMark:(float)a0;
- (void)clearStartAnimation;
- (void)clearStopAnimation;
- (id)initWithDuration:(double)a0 animationCurve:(unsigned long long)a1;
- (void)removeProgressMark:(float)a0;
- (void)startAnimation;
- (void)startWhenAnimation:(id)a0 reachesProgress:(float)a1;
- (void)stopAnimation;
- (void)stopWhenAnimation:(id)a0 reachesProgress:(float)a1;

@end
