@class NSArray, NSString, NSDate, NSMutableArray;
@protocol AXETimer, AXETrackingTapGestureRecognizerDelegate;

@interface AXETrackingTapGestureRecognizer : NSObject <AXETrackingGestureRecognizer>

@property (retain, nonatomic) NSArray *_tapSequenceStartingTouchEvents;
@property (retain, nonatomic) NSMutableArray *_mostRecentTapStartTouchEvents;
@property (retain, nonatomic) NSDate *_mostRecentTapStartTime;
@property (retain, nonatomic) NSDate *_mostRecentTapEndTime;
@property (nonatomic) unsigned long long _currentState;
@property (nonatomic) unsigned long long _detectedTapCount;
@property (retain, nonatomic) id<AXETimer> _singleTapTimeoutTimer;
@property (retain, nonatomic) NSArray *_lastTouchingTouches;
@property (readonly, nonatomic) unsigned long long fingerCount;
@property (readonly, nonatomic) unsigned long long tapCount;
@property (readonly, nonatomic) double maximumTapDownDeviation;
@property (readonly, nonatomic) double maximumTapDownDuration;
@property (readonly, nonatomic) double maximumTapInterval;
@property (nonatomic) BOOL ignoreEventsAtEdge;
@property (weak, nonatomic) id<AXETrackingTapGestureRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_transitionToState:(unsigned long long)a0;
- (void)_abort;
- (BOOL)_isPointOnEdge:(struct CGPoint { double x0; double x1; })a0;
- (id)_filterEdgeEvents:(id)a0;
- (void)_signalTapAborted:(id)a0;
- (void)_signalTapped:(id)a0;
- (void)_singleTapTimeoutElapsed:(id)a0;
- (id)initWithFingerCount:(unsigned long long)a0 tapCount:(unsigned long long)a1;
- (id)initWithFingerCount:(unsigned long long)a0 tapCount:(unsigned long long)a1 maximumTapDownDeviation:(double)a2 maximumTapDownDuration:(double)a3 maximumTapInterval:(double)a4;
- (void)processGestureEvent:(id)a0;

@end
