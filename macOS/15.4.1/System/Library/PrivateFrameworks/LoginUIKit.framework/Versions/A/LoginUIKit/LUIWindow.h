@interface LUIWindow : NSWindow

@property BOOL canBecomeKey;
@property id target;
@property SEL action;

- (void)dealloc;
- (id)description;
- (id)accessibilityTitle;
- (BOOL)canBecomeKeyWindow;
- (void)center;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)sendEvent:(id)a0;
- (void)setAlphaValue:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)setLevel:(long long)a0;
- (void)setIsSuperSticky;

@end
