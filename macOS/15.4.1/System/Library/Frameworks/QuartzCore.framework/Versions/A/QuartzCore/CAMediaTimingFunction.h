@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {
    struct CAMediaTimingFunctionPrivate { float x0[2]; float x1[2]; } *_priv;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)functionWithControlPoints:(float)a0 :(float)a1 :(float)a2 :(float)a3;
+ (id)functionWithName:(id)a0;
+ (void)CAMLParserEndElement:(id)a0 content:(id)a1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (unsigned long long)CA_copyNumericValue:(double *)a0;
- (unsigned long long)CA_numericValueCount;
- (float)_solveForInput:(float)a0;
- (id)initWithControlPoints:(float)a0 :(float)a1 :(float)a2 :(float)a3;
- (void)getControlPointAtIndex:(unsigned long long)a0 values:(float[2])a1;
- (id)CAMLType;
- (void)_getPoints:(double *)a0;
- (void)encodeWithCAMLWriter:(id)a0;

@end
