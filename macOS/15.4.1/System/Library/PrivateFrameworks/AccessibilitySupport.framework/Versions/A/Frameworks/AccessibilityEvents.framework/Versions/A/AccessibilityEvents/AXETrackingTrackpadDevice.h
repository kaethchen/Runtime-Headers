@class NSArray, AXFThrottler, AXETrackingGestureEvent, NSString;
@protocol AXETrackingTouchInputDeviceDelegate;

@interface AXETrackingTrackpadDevice : NSObject <AXEEventTapListener, AXETrackingTouchInputDevice>

@property (nonatomic) BOOL _eventCaptureStarted;
@property (retain, nonatomic) AXFThrottler *_throttler;
@property (retain, nonatomic) AXETrackingGestureEvent *_previousGestureEvent;
@property (copy, nonatomic, getter=_availableTrackpadInfos, setter=_setAvailableTrackpadInfos:) NSArray *_availableTrackpadInfos;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
@property (weak, nonatomic) id<AXETrackingTouchInputDeviceDelegate> delegate;
@property (nonatomic) BOOL swallowAllGestureEvents;
@property (nonatomic) BOOL ignorePalmEevnts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct __CGEvent { } *)eventTapManager:(id)a0 activelyTappedGestureEvent:(id)a1 cgEvent:(struct __CGEvent { } *)a2 withProxy:(struct __CGEventTapProxy { } *)a3;
- (struct __CGEvent { } *)eventTapManager:(id)a0 activelyTappedMouseEvent:(id)a1 cgEvent:(struct __CGEvent { } *)a2 withProxy:(struct __CGEventTapProxy { } *)a3;
- (id)_delegateTrackingNumberOfTouches;
- (BOOL)_isDelegateTrackingEvent:(id)a0;
- (BOOL)_isPalmEventWithRadius:(double)a0;
- (id)_nonSyntheticGestureEventFromCGEvent:(struct __CGEvent { } *)a0;
- (void)_processNonSyntheticGestureEvent:(id)a0;
- (BOOL)_shouldProcessEvent:(id)a0;
- (BOOL)_shouldProcessUpEvent:(id)a0;
- (void)_updateAvailableTrackpadInfoWithDeviceID:(unsigned long long)a0;
- (id)initWithMinimumEventInterval:(double)a0;
- (void)startEventCapture;
- (void)stopEventCapture;

@end
