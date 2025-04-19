@interface _MKAnnotationDragGestureRecognizer : NSPressGestureRecognizer {
    struct CGPoint { double x; double y; } _dragLocation;
    BOOL _hasCustomDragLocation;
}

- (void)reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (double)allowableMovement;
- (void)mouseDragged:(id)a0;

@end
