@class AXFThrottler, NSSet, AXETrackingGestureEvent, NSString, NSObject, NSTouch;
@protocol OS_dispatch_queue, AXETrackingTouchInputDeviceDelegate;

@interface AXEDFRDevice : NSObject <AXEEventTapListener, AXETrackingTouchInputDevice>

@property (nonatomic) struct CGSize { double width; double height; } nativeDisplaySize;
@property (nonatomic) BOOL eventCaptureStarted;
@property (retain, nonatomic) AXETrackingGestureEvent *_previousDFRGestureEvent;
@property (retain, nonatomic) AXFThrottler *_throttler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_syntheticEventPostingDispatchQueue;
@property (retain, nonatomic) NSSet *_currentTouches;
@property (retain, nonatomic) NSTouch *_currentTrackedTouch;
@property (nonatomic) double _splitTouchStartDistance;
@property (nonatomic) BOOL _changingZoomScale;
@property (readonly, nonatomic) double synthesizedTapDownUpInterval;
@property (weak, nonatomic) id<AXETrackingTouchInputDeviceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct __CGEvent { } *)eventTapManager:(id)a0 activelyTappedEvent:(struct __CGEvent { } *)a1 type:(unsigned int)a2 withProxy:(struct __CGEventTapProxy { } *)a3;
- (BOOL)_isNonSyntheticDFRGestureEvent:(struct __CGEvent { } *)a0;
- (id)_nonSyntheticDFRGestureNSEventFromCGEvent:(struct __CGEvent { } *)a0;
- (void)_processNonSyntheticDFRGestureNSEvent:(id)a0;
- (id)initWithMinimumEventInterval:(double)a0;
- (void)startEventCapture;
- (void)stopEventCapture;
- (void)synthesizeTapAtLocation:(struct CGPoint { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)synthesizeTouchDownAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)synthesizeTouchMoveToLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)synthesizeTouchUpAtLocation:(struct CGPoint { double x0; double x1; })a0;

@end
