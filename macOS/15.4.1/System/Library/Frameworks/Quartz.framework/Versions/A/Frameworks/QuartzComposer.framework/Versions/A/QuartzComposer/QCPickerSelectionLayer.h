@interface QCPickerSelectionLayer : CALayer {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectionSelectionFrame;
    struct CGColor { } *_focusRingColor;
}

- (void)dealloc;
- (void)finalize;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)__finalize_QCPickerSelectionLayer;
- (void)setFocusRingColor:(struct CGColor { } *)a0;
- (void)updateSelectionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
