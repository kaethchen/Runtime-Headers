@class UINSScrollState;

@interface UINSMouseEventTranslator : UINSEventTranslator {
    id _changeModeMonitor;
    UINSScrollState *_scrollState;
    struct __IOHIDEvent { } *_lastPressureEvent;
    unsigned int _mouseContextId;
    unsigned int _gestureContextId;
    unsigned int _hoverContextId;
    unsigned int _dragContextId;
    BOOL _mouseIsInside;
    BOOL _needMouseExitOnUp;
    unsigned long long _lastButtonMask;
    unsigned char _lastClickCount;
    unsigned long long _lastModifiers;
    struct CGPoint { double x; double y; } _lastSceneLoc;
    BOOL _dragAndDropDragging;
    unsigned long long _gesturePhase;
    unsigned long long _lastSeenTouchSenderID;
}

@property (readonly, getter=isLeftMouseDown) BOOL leftMouseDown;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (void)rightMouseDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)draggingEnded:(id)a0;
- (void)draggingEntered:(id)a0;
- (void)draggingUpdated:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)prepareForDragOperation:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (void)quickLookWithEvent:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rotateWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)translateWithEvent:(id)a0;
- (void)_coalescePinchStartingWithEvent:(id)a0 outputMagnify:(struct __IOHIDEvent **)a1 rotate:(struct __IOHIDEvent **)a2 translate:(struct __IOHIDEvent **)a3;
- (void)_cancelMomentumScrollForDeviceType:(unsigned char)a0;
- (void)_cancelScrollIfNeededWithTimestamp:(unsigned long long)a0;
- (struct __IOHIDEvent { } *)_copyCoalescedPressureEventUntilDate:(id)a0;
- (struct __IOHIDEvent { } *)_createDirectDigitizerEventFromSyntheticTouches:(id)a0;
- (struct __IOHIDEvent { } *)_createDirectDigitizerIOHIDEventFromDirectEvent:(struct __IOHIDEvent { } *)a0;
- (struct __IOHIDEvent { } *)_createPinchEventWithPhase:(unsigned long long)a0 magnify:(struct __IOHIDEvent { } *)a1 rotate:(struct __IOHIDEvent { } *)a2 translate:(struct __IOHIDEvent { } *)a3;
- (void)_handleChangeModeEvent:(id)a0;
- (void)_handleGestureScrollEvent:(id)a0;
- (void)_handleMomentumScrollEvent:(id)a0;
- (void)_handleMouseEvent:(id)a0 contextId:(unsigned int)a1;
- (void)_handleMouseEventAtSceneLocation:(struct CGPoint { double x0; double x1; })a0 type:(unsigned long long)a1 buttonMask:(long long)a2 clickCount:(unsigned char)a3 modifierFlags:(unsigned long long)a4 childEvent:(struct __IOHIDEvent { } *)a5 contextId:(unsigned int)a6;
- (void)_handlePinchEvent:(id)a0;
- (void)_handleRelativeScrollEvent:(id)a0;
- (void)_handleScrollWheelEvent:(id)a0;
- (void)_handleSqueezeEvent:(id)a0;
- (void)_handleTouchEvent:(id)a0 cancel:(BOOL)a1;
- (BOOL)_nextScrollGestureDelta:(struct CGPoint { double x0; double x1; } *)a0 wait:(BOOL)a1;
- (void)_sendDragAndDropEvent:(id)a0 isInsideApp:(BOOL)a1 isDragging:(BOOL)a2;
- (BOOL)cancelOutstandingUserInput;
- (BOOL)wantsKeyEvents;

@end
