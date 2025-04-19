@interface CPKWindowTitleView : NSTextField {
    struct CGPoint { double x; double y; } _mouseDownScreenLoc;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidResignKey:(id)a0;

@end
