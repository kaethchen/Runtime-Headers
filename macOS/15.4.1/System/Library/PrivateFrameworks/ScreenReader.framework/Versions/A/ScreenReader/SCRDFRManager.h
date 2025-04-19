@class SCRDFRFocusManager, AXETrackingTouchEvent, SCRCThreadKey, SCROutputManager, NSDate, AXETrackingSplitTapGestureRecognizer, SCRElement, SCRApplicationManager, NSString, AXETrackingFlickGestureRecognizer, AXEDFRDevice, AXETrackingTapGestureRecognizer, AXETrackingHoldGestureRecognizer, SCRThrottler;

@interface SCRDFRManager : NSObject <AXETrackingTouchInputDeviceDelegate, AXETrackingFlickGestureRecognizerDelegate, AXETrackingHoldGestureRecognizerDelegate, AXETrackingSplitTapGestureRecognizerDelegate, AXETrackingTapGestureRecognizerDelegate>

@property (nonatomic) BOOL isProcessingDFRGestureEvents;
@property (retain, nonatomic) SCRCThreadKey *_threadKey;
@property (retain, nonatomic) SCRDFRFocusManager *_dfrFocusManager;
@property (retain, nonatomic) SCROutputManager *_outputManager;
@property (retain, nonatomic) SCRApplicationManager *_applicationManager;
@property (retain, nonatomic) AXEDFRDevice *_dfrDevice;
@property (retain, nonatomic) AXETrackingFlickGestureRecognizer *_flickGestureRecognizer;
@property (retain, nonatomic) AXETrackingTapGestureRecognizer *_singleTapGestureRecognizer;
@property (retain, nonatomic) AXETrackingTapGestureRecognizer *_doubleTapGestureRecognizer;
@property (retain, nonatomic) AXETrackingHoldGestureRecognizer *_singleTapAndHoldGestureRecognizer;
@property (retain, nonatomic) AXETrackingSplitTapGestureRecognizer *_splitTapGestureRecognizer;
@property (nonatomic) BOOL _flickGestureRecognizerAborted;
@property (nonatomic) BOOL _singleTapAndHoldGestureRecognizerAborted;
@property (nonatomic) long long _currentState;
@property (nonatomic) int _currentTouchCount;
@property (retain, nonatomic) SCRElement *_elementUnderFinger;
@property (nonatomic) struct CGPoint { double x; double y; } _lastEmptyHitPoint;
@property (retain, nonatomic) NSDate *_lastEmptyHitTimestamp;
@property (nonatomic) struct CGPoint { double x; double y; } _lastTouchPoint;
@property (retain, nonatomic) AXETrackingTouchEvent *_lastTapEvent;
@property (nonatomic) struct CGPoint { double x; double y; } _passthruTouchStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } _lastPassthruTouchPoint;
@property (nonatomic) struct CGSize { double width; double height; } _passthruTouchOffset;
@property (retain, nonatomic) SCRThrottler *_passthruFeedbackThrottler;
@property struct CGPoint { double x; double y; } _pointToMoveFocusTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_transitionToState:(long long)a0;
- (void)flickGestureRecognizer:(id)a0 aborted:(id)a1;
- (void)flickGestureRecognizer:(id)a0 flickedAngle:(double)a1;
- (void)holdGestureRecognizer:(id)a0 aborted:(id)a1;
- (void)holdGestureRecognizer:(id)a0 stabilized:(id)a1;
- (void)splitTapGestureRecognizer:(id)a0 splitTapped:(id)a1;
- (void)synthesizeTouchDownAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)synthesizeTouchMoveToLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)synthesizeTouchUpAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)tapGestureRecognizer:(id)a0 tapAborted:(id)a1;
- (void)tapGestureRecognizer:(id)a0 tapped:(id)a1;
- (void)touchInputDevice:(id)a0 capturedGestureEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_dfrCoordinateFromNormalizedCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawFocusRingAroundAndAnnounceElement:(id)a0;
- (void)_drawFocusRingAroundElement:(id)a0;
- (void)_echoFocusedElement:(id)a0;
- (void)_enterDirectTouchModeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_exitDirectTouchMode;
- (void)_handleDirectTouchMoveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_moveFocusToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_performDefaultActionOnFocusedElement;
- (void)_resetLastEmptyHitPointAndTimestamp;
- (void)_sendDFRBrailleLine;
- (void)_trySwitchingToTrackingMode;
- (void)handleContextualHelpEvent:(id)a0;
- (void)handleDFRBrailleRoutingEvent:(id)a0 request:(id)a1 uiElement:(id)a2;
- (void)handleRefreshBrailleLineEvent:(id)a0;
- (id)initWithFocusManager:(id)a0 outputManager:(id)a1 applicationManager:(id)a2;
- (void)synthesizeTapAtLocation:(struct CGPoint { double x0; double x1; })a0;

@end
