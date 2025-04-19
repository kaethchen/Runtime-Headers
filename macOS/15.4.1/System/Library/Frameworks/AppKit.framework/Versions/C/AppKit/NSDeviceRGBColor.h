@interface NSDeviceRGBColor : NSCalibratedRGBColor

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)encodeWithCoder:(id)a0;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)a0;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
