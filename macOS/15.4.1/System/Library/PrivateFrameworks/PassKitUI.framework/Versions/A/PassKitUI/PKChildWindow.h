@class PKWindowController;

@interface PKChildWindow : NSWindow {
    PKWindowController *_windowAnimationController;
}

@property (retain) PKWindowController *passWindowController;

- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;

@end
