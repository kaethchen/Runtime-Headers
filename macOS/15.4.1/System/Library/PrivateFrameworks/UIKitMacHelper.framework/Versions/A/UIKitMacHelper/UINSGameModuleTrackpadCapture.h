@class NSTimer, NSEvent, UINSTouchAccommodationVisualizer;

@interface UINSGameModuleTrackpadCapture : UINSGameModule {
    BOOL _trackpadCaptured;
    NSTimer *_captureDebounceTimer;
    unsigned long long _lastSeenTouchSenderID;
    NSEvent *_lastTrackPadEvent;
    id _deactiveNotificationObserver;
    id _resignKeyNotificationObserver;
}

@property (weak) UINSTouchAccommodationVisualizer *touchVisualizer;

+ (id)name;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)flagsChanged:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (BOOL)wantsRestingTouches;
- (void)_captureTrackpad;
- (struct __IOHIDEvent { } *)_createDirectDigitizerEventFromSyntheticTouches:(id)a0;
- (struct __IOHIDEvent { } *)_createDirectDigitizerIOHIDEventFromIndirectEvent:(struct __IOHIDEvent { } *)a0;
- (void)_debouncedCaptureTrackpad;
- (void)_handleTouchEvent:(id)a0 cancel:(BOOL)a1;
- (void)_releaseTrackpad;
- (void)applyUserDefaults;

@end
