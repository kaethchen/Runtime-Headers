@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {
    struct { double m11; double m12; double m21; double m22; double tX; double tY; } _transformStruct;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property struct { double x0; double x1; double x2; double x3; double x4; double x5; } transformStruct;

+ (id)transformWithRotationInDegrees:(double)a0;
+ (id)transformWithRotationInRadians:(double)a0;
+ (id)transform;
+ (id)transformWithFlipUsingHeight:(double)a0;
+ (id)transformWithScale:(double)a0;
+ (id)transformWithTransformStruct:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)transformWithXScale:(double)a0 yScale:(double)a1;
+ (id)transformWithXTranslation:(double)a0 yTranslation:(double)a1;

- (id)CA_interpolateValue:(id)a0 byFraction:(float)a1;
- (id)CA_addValue:(id)a0 multipliedBy:(int)a1;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (unsigned long long)CA_copyNumericValue:(double *)a0;
- (unsigned long long)CA_numericValueCount;
- (id)CAMLType;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })CA_CGAffineTransformValue;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invert;
- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)appendTransform:(id)a0;
- (id)initWithTransform:(id)a0;
- (void)prependTransform:(id)a0;
- (void)rotateByDegrees:(double)a0;
- (void)rotateByRadians:(double)a0;
- (void)scaleBy:(double)a0;
- (void)scaleXBy:(double)a0 yBy:(double)a1;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (void)translateXBy:(double)a0 yBy:(double)a1;

@end
