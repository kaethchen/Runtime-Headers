@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _count;
    union { double vec[4]; double *ptr; } _u;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double *_values;
@property (readonly) unsigned long long count;
@property (readonly) double X;
@property (readonly) double Y;
@property (readonly) double Z;
@property (readonly) double W;
@property (readonly) struct CGPoint { double x0; double x1; } CGPointValue;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } CGRectValue;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } CGAffineTransformValue;
@property (readonly) NSString *stringRepresentation;

+ (void)CAMLParserEndElement:(id)a0 content:(id)a1;
+ (id)vectorWithValues:(const double *)a0 count:(unsigned long long)a1;
+ (id)vectorWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)vectorWithX:(double)a0 Y:(double)a1;
+ (id)vectorWithX:(double)a0 Y:(double)a1 Z:(double)a2;
+ (id)vectorWithX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)vectorWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)vectorWithString:(id)a0;
+ (id)vectorWithX:(double)a0;

- (id)CA_interpolateValue:(id)a0 byFraction:(float)a1;
- (id)CA_addValue:(id)a0 multipliedBy:(int)a1;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)a0;
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
- (double)valueAtIndex:(unsigned long long)a0;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)_dot:(id)a0;
- (float)_norm;
- (id)_orthonormalizeTo:(id)a0;
- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithX:(double)a0;
- (id)initWithX:(double)a0 Y:(double)a1;

@end
