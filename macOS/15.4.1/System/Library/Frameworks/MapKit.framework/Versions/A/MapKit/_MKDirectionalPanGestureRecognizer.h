@interface _MKDirectionalPanGestureRecognizer : _MKConditionalPanGestureRecognizer {
    struct CGPoint { double x; double y; } _mouseDownPoint;
    double _translation;
}

@property (nonatomic) long long direction;

- (void)reset;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)_handleMouseDragged:(id)a0;
- (double)directionalTranslationInView:(id)a0;

@end
