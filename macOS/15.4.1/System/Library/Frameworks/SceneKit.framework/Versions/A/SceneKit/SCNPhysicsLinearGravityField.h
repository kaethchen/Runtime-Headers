@interface SCNPhysicsLinearGravityField : SCNPhysicsField

- (struct SCNVector3 { double x0; double x1; double x2; })gravity;
- (void)setDirection:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (struct c3dPhysicsField { void /* function */ **x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *)_createField;
- (BOOL)supportsOffset;

@end
