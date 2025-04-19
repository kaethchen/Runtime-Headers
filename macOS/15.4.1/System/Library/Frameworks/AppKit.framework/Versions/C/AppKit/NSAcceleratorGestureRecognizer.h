@interface NSAcceleratorGestureRecognizer : NSGestureRecognizer <NSCoding> {
    struct CGPoint { double x; double y; } _location;
}

@property (readonly) long long stage;
@property (readonly) double pressure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)otherMouseDown:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)_appendSubclassDescription:(id)a0;
- (id)_desiredPressureBehavior;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (void)tabletPoint:(id)a0;

@end
