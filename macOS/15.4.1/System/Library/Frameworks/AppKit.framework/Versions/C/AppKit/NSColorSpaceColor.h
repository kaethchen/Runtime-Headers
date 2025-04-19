@class NSColorSpace;

@interface NSColorSpaceColor : NSColor {
    NSColorSpace *colorSpace;
    struct CGColor { } *_cachedCGColor;
    long long numComponents;
    double components[0];
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;
+ (id)newWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2;

- (void)dealloc;
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
- (double)yellowComponent;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)_release;
- (double)alphaComponent;
- (double)blackComponent;
- (double)blueComponent;
- (double)brightnessComponent;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)colorWithAlphaComponent:(double)a0;
- (double)cyanComponent;
- (void)getComponents:(double *)a0;
- (void)getCyan:(double *)a0 magenta:(double *)a1 yellow:(double *)a2 black:(double *)a3 alpha:(double *)a4;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (double)greenComponent;
- (double)hueComponent;
- (id)initWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2;
- (BOOL)isUniform;
- (double)magentaComponent;
- (long long)numberOfComponents;
- (double)redComponent;
- (double)saturationComponent;
- (double)whiteComponent;

@end
