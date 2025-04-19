@interface SwiftUI.AppKitGestureRecognizer : NSGestureRecognizer {
    void /* unknown type, empty encoding */ eventBridge;
    void /* unknown type, empty encoding */ gestureCategory;
    void /* unknown type, empty encoding */ lastInheritedPhase;
    void /* unknown type, empty encoding */ lastState;
    void /* unknown type, empty encoding */ mouseSeed;
    void /* unknown type, empty encoding */ magnifySeed;
    void /* unknown type, empty encoding */ accumulatedMagnification;
    void /* unknown type, empty encoding */ rotateSeed;
    void /* unknown type, empty encoding */ accumulatedRotation;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)_updateForActiveEvents;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rotateWithEvent:(id)a0;

@end
