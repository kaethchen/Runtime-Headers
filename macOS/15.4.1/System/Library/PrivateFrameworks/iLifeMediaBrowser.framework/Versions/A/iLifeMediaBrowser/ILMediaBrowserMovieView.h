@class NSWindow;

@interface ILMediaBrowserMovieView : AVPlayerView {
    id _representedGroup;
    id _representedObject;
    BOOL _showingThumbnail;
    id _enterKeyTarget;
    SEL _enterKeyAction;
    id _viewDelegate;
    NSWindow *_flagWindow;
}

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)draggedImage:(id)a0 beganAt:(struct CGPoint { double x0; double x1; })a1;
- (void)draggedImage:(id)a0 movedTo:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_dragSelectionWithEvent:(id)a0;
- (void)setEnterKeyAction:(SEL)a0;
- (void)setEnterKeyTarget:(id)a0;

@end
