@class NSView;

@interface _NSKeyboardFocusClipView : NSClipView {
    NSView *_representedView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _adjustment;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFocusRingRect;
    BOOL _drawFocus;
    char _bezelStyle;
}

- (void)dealloc;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_adjustFocusRingLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_adjustFocusRingSize:(struct CGSize { double x0; double x1; })a0;
- (void)_clearFocusForView;
- (void)_drawKeyboardFocusRingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawKeyboardFocusRingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCell:(id)a1;
- (BOOL)_drawRectIfEmpty;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getFocusRingFrame;
- (void)_setFocusForCell:(id)a0 forView:(id)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withFocusRingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 withInset:(double)a4;
- (void)_setKeyboardFocusRingNeedsDisplay;
- (BOOL)canBecomeKeyView;
- (void)removeFromSuperview;

@end
