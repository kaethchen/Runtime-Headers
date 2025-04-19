@class NSString;

@interface CIColor : NSObject <NSSecureCoding, NSCopying> {
    void *_priv;
    void *_pad[3];
}

@property (class, readonly) CIColor *blackColor;
@property (class, readonly) CIColor *whiteColor;
@property (class, readonly) CIColor *grayColor;
@property (class, readonly) CIColor *redColor;
@property (class, readonly) CIColor *greenColor;
@property (class, readonly) CIColor *blueColor;
@property (class, readonly) CIColor *cyanColor;
@property (class, readonly) CIColor *magentaColor;
@property (class, readonly) CIColor *yellowColor;
@property (class, readonly) CIColor *clearColor;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long numberOfComponents;
@property (readonly) const double *components;
@property (readonly) double alpha;
@property (readonly) struct CGColorSpace { } *colorSpace;
@property (readonly) double red;
@property (readonly) double green;
@property (readonly) double blue;
@property (readonly) NSString *stringRepresentation;

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 colorSpace:(struct CGColorSpace { } *)a3;
+ (id)colorWithString:(id)a0;

- (id)CA_interpolateValue:(id)a0 byFraction:(float)a1;
- (id)CA_addValue:(id)a0 multipliedBy:(int)a1;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)a0;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGColor { } *)cgColor;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)debugQuickLookObject;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 colorSpace:(struct CGColorSpace { } *)a3;
- (struct CGColor { } *)rgbColor;

@end
