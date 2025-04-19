@class NSTimer;

@interface SSReconnectProgressIndicator : NSView {
    int iterator;
    NSTimer *animationTimer;
    struct CGPoint { double x; double y; } origin;
    struct CGPoint { double x; double y; } center;
    float scale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dirtyRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pillRect;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } rotation12;
    struct CGColor *colors[12];
}

- (void)dealloc;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToSuperview;
- (void)deallocColors;
- (void)drawSpinner:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTextOverlay:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupColorsForAppearance:(id)a0;
- (void)stepAnimation:(id)a0;
- (void)updateFrameAndRedraw;
- (void)viewDidBecomeOverlay;
- (void)viewWillResignOverlay;

@end
