@interface JetUI.JUNavigationBar : NSView {
    void /* unknown type, empty encoding */ stack;
    void /* unknown type, empty encoding */ topItemView;
    void /* unknown type, empty encoding */ cachedFittingSize;
    void /* unknown type, empty encoding */ backTarget;
    void /* unknown type, empty encoding */ backAction;
    void /* unknown type, empty encoding */ standardAppearance;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic, readonly) BOOL mouseDownCanMoveWindow;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)topItemViewSizeDidChange:(id)a0;

@end
