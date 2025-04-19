@class NSString;

@interface NSValue : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } CATransform3DValue;
@property (readonly) const char *objCType;

+ (id)bs_valueWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)bs_valueWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)bs_valueWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)bs_valueWithCGSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)valueWithCAColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0;
+ (id)valueWithCACornerRadii:(struct CACornerRadii { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; })a0;
+ (id)valueWithCATransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
+ (id)valueWithCAPoint3D:(struct CAPoint3D { double x0; double x1; double x2; })a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)valueWithPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
+ (id)valueWithNonretainedObject:(id)a0;
+ (id)valueWithPointer:(const void *)a0;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)valueWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)valueWithWeakObject:(id)a0;

- (struct CGPoint { double x0; double x1; })bs_CGPointValue;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })bs_CGAffineTransformValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bs_CGRectValue;
- (struct CGSize { double x0; double x1; })bs_CGSizeValue;
- (BOOL)bs_getValue:(out void *)a0 ofSize:(unsigned long long)a1;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)supportsBSXPCSecureCoding;
- (id)CA_interpolateValue:(id)a0 byFraction:(float)a1;
- (struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })CAColorMatrixValue;
- (struct CACornerRadii { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; })CACornerRadiiValue;
- (id)CA_addValue:(id)a0 multipliedBy:(int)a1;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)a0;
- (unsigned long long)CA_copyNumericValue:(double *)a0;
- (unsigned long long)CA_numericValueCount;
- (id)CA_roundToIntegerFromValue:(id)a0;
- (id)CAMLType;
- (struct CAPoint3D { double x0; double x1; double x2; })CAPoint3DValue;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })CA_CGAffineTransformValue;
- (id)CA_interpolateValues:(id)a0 :(id)a1 :(id)a2 interpolator:(const struct ValueInterpolator { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; BOOL x14; } *)a3;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void)getValue:(void *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isNSValue__;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeValue;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)weakObjectValue;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (id)nonretainedObjectValue;
- (struct CGPoint { double x0; double x1; })pointValue;
- (void *)pointerValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectValue;
- (id)replacementObjectForPortCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeValue;

@end
