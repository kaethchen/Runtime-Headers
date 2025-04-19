@interface ZMWCursorView : ZMWView {
    unsigned int _currentSeed;
}

@property (nonatomic) long long cursorType;
@property (nonatomic) double cursorZoomFactor;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawCrosshairInLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (struct CGImage { } *)_newCursorImageToShow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 hotSpot:(struct CGPoint { double x0; double x1; } *)a1;
- (struct CGImage { } *)_newSystemCursorImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 hotSpot:(struct CGPoint { double x0; double x1; } *)a1;
- (struct CGImage { } *)_newSystemCursorImageHIDPI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 hotSpot:(struct CGPoint { double x0; double x1; } *)a1;
- (id)initWithSuperlayer:(id)a0 connection:(unsigned int)a1;
- (void)redrawCursorArt:(BOOL)a0;

@end
