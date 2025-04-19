@class NSImage;

@interface NSColorPickerUserView : NSView {
    NSImage *currImage;
    struct CGPoint { double x; double y; } currentPt;
    id colorPanel;
    id controllingPicker;
    NSImage *_imageForLockFocusUse;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (id)color;
- (BOOL)_pointInPicker:(struct CGPoint { double x0; double x1; } *)a0;
- (id)colorFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)moveUp:(id)a0;
- (void)_clearImageForLockFocusUse;
- (void)_createImageForLockFocusUseIfNecessary;
- (id)_getColorFromImageAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isShowingKeyboardFocus;
- (void)_resizeImage;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)moveCurrentPointInDirection:(struct CGPoint { double x0; double x1; })a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)performDragOperation:(id)a0;
- (void)registerForFilenameDragTypes;
- (BOOL)resignFirstResponder;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)storeColorPanel:(id)a0;

@end
