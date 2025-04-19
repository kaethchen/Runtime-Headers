@class NSBitmapImageRep, NSColor;

@interface NSColorScaleSliderCell : NSSliderCell {
    long long _scaleType;
    NSBitmapImageRep *_scaleBitmap;
    BOOL _scaleBitmapValid;
    NSColor *_scaleColor;
    BOOL _flippedHorizontally;
}

@property BOOL flippedHorizontally;

- (void)setColor:(id)a0;
- (void)_computeColorScaleIfNecessaryWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawBarInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (void)drawTickMarks;
- (BOOL)isOpaque;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkAtIndex:(long long)a0;
- (void)setDrawsTrackAsColorScaleType:(long long)a0;

@end
