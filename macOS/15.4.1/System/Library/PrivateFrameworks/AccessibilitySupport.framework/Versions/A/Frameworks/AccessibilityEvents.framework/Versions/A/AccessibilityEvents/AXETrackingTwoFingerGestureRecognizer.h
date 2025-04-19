@class NSString, NSMutableArray;
@protocol AXETrackingTwoFingerGestureRecognizerDelegate;

@interface AXETrackingTwoFingerGestureRecognizer : NSObject <AXETrackingGestureRecognizer>

@property (nonatomic) unsigned long long _currentState;
@property (retain, nonatomic) NSMutableArray *_touchStartEvents;
@property (nonatomic) double _initialTouchSeparation;
@property (nonatomic) struct CGPoint { double x; double y; } _initialCentroidLocation;
@property (nonatomic) double _initialAngleInDegrees;
@property (readonly, nonatomic) double minimumPanDistance;
@property (readonly, nonatomic) double minimumPinchSeparationDeviation;
@property (readonly, nonatomic) double minimumRotateAngleDeviation;
@property (weak, nonatomic) id<AXETrackingTwoFingerGestureRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_processGestureTouchEvents:(id)a0;
- (void)_signalEndOfGesture;
- (id)initWithMinimumPanDistance:(double)a0 minimumPinchSeparationDeviation:(double)a1 minimumRotateAngleDeviation:(double)a2;
- (void)processGestureEvent:(id)a0;

@end
