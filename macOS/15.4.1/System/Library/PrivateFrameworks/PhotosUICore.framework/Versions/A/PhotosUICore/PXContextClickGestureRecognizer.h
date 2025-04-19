@class NSEvent;

@interface PXContextClickGestureRecognizer : NSGestureRecognizer {
    NSEvent *_recognizedEvent;
    unsigned long long _cleanupEventType;
}

- (void).cxx_destruct;
- (void)reset;
- (void)rightMouseDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)popUpContextMenu:(id)a0 forView:(id)a1;

@end
