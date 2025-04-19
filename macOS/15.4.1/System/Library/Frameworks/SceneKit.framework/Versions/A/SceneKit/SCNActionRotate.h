@interface SCNActionRotate : SCNAction {
    struct SCNCActionRotate { void /* function */ **x0; double x1; id /* block */ x2; id x3; BOOL x4; double x5; double x6; double x7; double x8; double x9; BOOL x10; BOOL x11; id /* block */ x12; struct __CFString *x13; long long x14; double x15; double x16; double x17; double x18; float x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; } *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)rotateByAngle:(double)a0 aroundAxis:(struct SCNVector3 { double x0; double x1; double x2; })a1 duration:(double)a2;
+ (id)rotateByX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3;
+ (id)rotateToAxisAngle:(struct SCNVector4 { double x0; double x1; double x2; double x3; })a0 duration:(double)a1;
+ (id)rotateToX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3;
+ (id)rotateToX:(double)a0 y:(double)a1 z:(double)a2 duration:(double)a3 shortestUnitArc:(BOOL)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)parameters;
- (BOOL)isRelative;
- (id)reversedAction;

@end
