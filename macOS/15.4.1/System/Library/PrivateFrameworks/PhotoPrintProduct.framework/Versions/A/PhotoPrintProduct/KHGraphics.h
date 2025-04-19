@interface KHGraphics : NSObject

+ (id)defaultColorSpace;
+ (void)drawNinePartImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withLeft:(long long)a2 right:(long long)a3 top:(long long)a4 bottom:(long long)a5 inset:(long long)a6 scale:(double)a7;
+ (struct CGContext { } *)createBitmapContextWithSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGImage { } *)createScaledImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGImage { } *)createScaledImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 interpolationQuality:(int)a2;
+ (struct __CFString { } *)defaultCGColorSpaceName;
+ (id)floatStringRepresentingColor:(id)a0;
+ (struct CGColor { } *)frameSelectionColorRef;
+ (struct CGColor { } *)layoutSelectionColorRef;
+ (double)selectionStrokeWidth;
+ (id)standardFontSizes;
+ (id)stringRepresentingColor:(id)a0;

@end
