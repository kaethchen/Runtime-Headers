@class NSMutableDictionary, NSDate;

@interface AXETrackingGestureRecognizerTestsFingerSimulator : NSObject

@property (nonatomic) unsigned long long _eventSource;
@property (retain, nonatomic) NSDate *_lastGestureEventTimestamp;
@property (retain, nonatomic) NSMutableDictionary *_fingersToTouchEvents;

- (void).cxx_destruct;
- (id)createGestureEventAfterTimeInterval:(double)a0;
- (id)fingerWithID:(unsigned long long)a0;
- (id)initForEventSource:(unsigned long long)a0;
- (void)liftAllFingers;
- (id)liftFinger:(unsigned long long)a0;
- (id)moveFinger:(unsigned long long)a0 byDeltaX:(double)a1 deltaY:(double)a2;
- (id)moveFinger:(unsigned long long)a0 to:(struct CGPoint { double x0; double x1; })a1;

@end
