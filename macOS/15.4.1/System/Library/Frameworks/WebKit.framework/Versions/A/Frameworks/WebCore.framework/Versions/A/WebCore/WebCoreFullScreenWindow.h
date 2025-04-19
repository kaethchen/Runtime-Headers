@interface WebCoreFullScreenWindow : NSWindow

- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)cancelOperation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)keyDown:(id)a0;
- (void)performClose:(id)a0;
- (void)setStyleMask:(unsigned long long)a0;

@end
