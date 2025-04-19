@class NSArray, AXETrackingTouchEvent, NSString;
@protocol AXETimer, AXETrackingFlickGestureRecognizerDelegate;

@interface AXETrackingFlickGestureRecognizer : NSObject <AXETrackingGestureRecognizer>

@property (nonatomic) unsigned long long _currentState;
@property (retain, nonatomic) AXETrackingTouchEvent *_flickStartTouchEvent;
@property (retain, nonatomic) NSArray *_lastTouchingTouches;
@property (retain, nonatomic) id<AXETimer> _flickTimeoutTimer;
@property (readonly, nonatomic) double minimumFlickDistance;
@property (readonly, nonatomic) double minimumFlickVelocity;
@property (readonly, nonatomic) double maximumFlickDuration;
@property (weak, nonatomic) id<AXETrackingFlickGestureRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_transitionToState:(unsigned long long)a0;
- (void)_signalFlickAborted:(id)a0;
- (void)_signalFlickRecognized:(double)a0;
- (void)_timeoutElapsed:(id)a0;
- (id)initWithMinimumFlickDistance:(double)a0 minimumFlickVelocity:(double)a1 maximumFlickDuration:(double)a2;
- (void)processGestureEvent:(id)a0;

@end
