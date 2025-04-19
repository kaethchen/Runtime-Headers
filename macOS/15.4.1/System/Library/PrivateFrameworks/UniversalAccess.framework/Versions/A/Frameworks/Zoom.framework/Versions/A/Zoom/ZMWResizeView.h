@class CALayer, ZMWButtonView;

@interface ZMWResizeView : ZMWView {
    ZMWButtonView *_doneButton;
    int _highlightBorder;
    CALayer *_resizeHandles[4];
}

- (void).cxx_destruct;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)refresh;
- (void)_initArrowArt;
- (void)_initResizeButton;
- (int)adjustmentTypeForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)highlightBorder:(int)a0;
- (void)highlightDoneButton:(BOOL)a0;
- (id)initWithSuperlayer:(id)a0 connection:(unsigned int)a1;

@end
