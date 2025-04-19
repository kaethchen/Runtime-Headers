@class _MKUIViewController;

@interface _MKUIViewControllerRootView : NSView

@property (weak, nonatomic) _MKUIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithViewController:(id)a0;

@end
