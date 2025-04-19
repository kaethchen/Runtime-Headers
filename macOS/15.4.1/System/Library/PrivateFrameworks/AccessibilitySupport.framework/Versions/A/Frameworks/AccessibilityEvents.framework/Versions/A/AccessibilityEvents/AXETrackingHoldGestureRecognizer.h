@class NSArray, NSMutableDictionary, AXETrackingTapGestureRecognizer, NSString;
@protocol AXETimer, AXETrackingHoldGestureRecognizerDelegate;

@interface AXETrackingHoldGestureRecognizer : NSObject <AXETrackingTapGestureRecognizerDelegate, AXETrackingGestureRecognizer>

@property (retain, nonatomic) NSArray *_touchingTouches;
@property (retain, nonatomic) NSMutableDictionary *_touchHistories;
@property (nonatomic) unsigned long long _currentState;
@property (retain, nonatomic) id<AXETimer> _preStabilizationTimer;
@property (retain, nonatomic) id<AXETimer> _holdStartTimeoutTimer;
@property (retain, nonatomic) id<AXETimer> _holdTimer;
@property (retain, nonatomic) AXETrackingTapGestureRecognizer *_preHoldTapRecognizer;
@property (readonly, nonatomic) unsigned long long fingerCount;
@property (readonly, nonatomic) unsigned long long preHoldTapCount;
@property (readonly, nonatomic) double maximumHoldDeviation;
@property (readonly, nonatomic) double minimumHoldDuration;
@property (readonly, nonatomic) double minimumPreStabilizationDuration;
@property (readonly, nonatomic) BOOL allowInstabilityBeforeHold;
@property (weak, nonatomic) id<AXETrackingHoldGestureRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_transitionToState:(unsigned long long)a0;
- (void)_signalAborted:(id)a0;
- (void)_holdStartTimeoutElapsed:(id)a0;
- (void)_minimumHoldDurationElapsed:(id)a0;
- (void)_minimumPreStabilizationDurationElapsed:(id)a0;
- (void)_signalStabilized:(id)a0;
- (void)_signalStartedStabilizing:(id)a0;
- (void)_signalTouchesMovedAfterStabilizing:(id)a0;
- (unsigned long long)_updateTouchHistoriesWithTouches:(id)a0;
- (id)initWithFingerCount:(unsigned long long)a0;
- (id)initWithFingerCount:(unsigned long long)a0 preHoldTapCount:(unsigned long long)a1;
- (id)initWithFingerCount:(unsigned long long)a0 preHoldTapCount:(unsigned long long)a1 maximumHoldDeviation:(double)a2 minimumHoldDuration:(double)a3 minimumPreStabilizationDuration:(double)a4 allowInstabilityBeforeHold:(BOOL)a5;
- (id)initWithMaximumHoldDeviation:(double)a0 minimumHoldDuration:(double)a1 minimumPreStabilizationDuration:(double)a2 allowInstabilityBeforeHold:(BOOL)a3;
- (id)initWithPreHoldTapCount:(unsigned long long)a0;
- (id)initWithPreHoldTapCount:(unsigned long long)a0 maximumHoldDeviation:(double)a1 minimumHoldDuration:(double)a2 minimumPreStabilizationDuration:(double)a3 allowInstabilityBeforeHold:(BOOL)a4;
- (void)processGestureEvent:(id)a0;
- (void)tapGestureRecognizer:(id)a0 tapAborted:(id)a1;
- (void)tapGestureRecognizer:(id)a0 tapped:(id)a1;

@end
