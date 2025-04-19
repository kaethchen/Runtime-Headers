@interface NSTextCorrectionMarkerRendering : NSObject

+ (struct CGColor { } *)_colorForSpellType_iOS:(long long)a0;
+ (struct CGColor { } *)_colorForSpellType_macOS:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForCorrectionMarkerOfType:(long long)a0 font:(id)a1 origin:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 originalWidth:(double)a4;
+ (struct CGColor { } *)colorForType:(long long)a0 font:(id)a1 dotSize:(out double *)a2;
+ (void)drawCorrectionMarkerOfType:(long long)a0 font:(id)a1 origin:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 cgContext:(struct CGContext { } *)a4;
+ (void)drawCorrectionMarkerOfType:(long long)a0 font:(id)a1 origin:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 graphicsContext:(id)a4;
+ (void)drawCorrectionMarkerOfType:(long long)a0 font:(id)a1 origin:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 originalWidth:(double)a4 cgContext:(struct CGContext { } *)a5;
+ (void)drawCorrectionMarkerOfType:(long long)a0 font:(id)a1 origin:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 originalWidth:(double)a4 graphicsContext:(id)a5;
+ (id)textCorrectionAdjustmentAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 glyphOrigin:(struct CGPoint { double x0; double x1; })a2 yDelta:(double *)a3;
+ (long long)textCorrectionMarkerTypeWithAttributes:(id)a0;

@end
