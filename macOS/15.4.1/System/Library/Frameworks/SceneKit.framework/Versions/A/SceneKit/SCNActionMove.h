@interface SCNActionMove : SCNAction {
    struct SCNCActionMove { void /* function */ **x0; double x1; id /* block */ x2; id x3; BOOL x4; double x5; double x6; double x7; double x8; double x9; BOOL x10; BOOL x11; id /* block */ x12; struct __CFString *x13; long long x14; double x15; double x16; double x17; double x18; double x19; BOOL x20; BOOL x21; } *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)moveBy:(struct SCNVector3 { double x0; double x1; double x2; })a0 duration:(double)a1;
+ (id)moveByX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3;
+ (id)moveTo:(struct SCNVector3 { double x0; double x1; double x2; })a0 duration:(double)a1;
+ (id)moveToX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)parameters;
- (BOOL)isRelative;
- (id)reversedAction;

@end
