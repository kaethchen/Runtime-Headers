@class QCCompositionPickerController;

@interface QCCompositionPickerLayer : CALayer {
    QCCompositionPickerController *_controller;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setBackgroundColor:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)wakeup;
- (void)_setDrawsBackground:(BOOL)a0;
- (void)_finishInitializationWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andController:(id)a1;
- (id)gridWithCompositions:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andController:(id)a1;
- (void)sleep;

@end
