@class CPKTestWindowView;

@interface CPKTestWindow : NSWindow

@property (retain, nonatomic) CPKTestWindowView *testView;

- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)setAction:(SEL)a0 target:(id)a1;

@end
