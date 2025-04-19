@interface AppKit._NSLatencyLightView : AppKit._NSSoftOutlineView {
    void /* unknown type, empty encoding */ accessibilityDisplayOptionsDidChangeObserver;
    void /* unknown type, empty encoding */ maskType;
}

@property (nonatomic) double alphaValue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidHide;
- (void)viewDidMoveToWindow;
- (void)viewDidUnhide;

@end
