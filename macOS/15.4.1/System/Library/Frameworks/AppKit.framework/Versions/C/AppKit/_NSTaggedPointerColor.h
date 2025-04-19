@interface _NSTaggedPointerColor : NSColor

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)set;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (void)setFill;
- (id)colorUsingType:(long long)a0;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (double)alphaComponent;
- (double)blueComponent;
- (double)brightnessComponent;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)colorWithAlphaComponent:(double)a0;
- (void)getComponents:(double *)a0;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (double)greenComponent;
- (double)hueComponent;
- (long long)numberOfComponents;
- (double)redComponent;
- (double)saturationComponent;
- (double)whiteComponent;

@end
