@interface _TtC7SwiftUIP33_9FEAD73C8B0BC1AFBEE663AAA2C9BA4C32_PlatformDraggingDestinationView : NSView {
    void /* unknown type, empty encoding */ dropDelegate;
    void /* unknown type, empty encoding */ dropContentTypes;
    void /* unknown type, empty encoding */ lastDropSession;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)draggingExited:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;

@end
