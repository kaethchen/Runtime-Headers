@interface QCCompositionPickerNavigationView : NSView {
    id _controller;
    id _leftButton;
    id _rightButton;
}

- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (void)update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andController:(id)a1;

@end
