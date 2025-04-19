@interface SCNJSValue : NSValue

+ (id)SCNJSExportProtocol;
+ (id)valueWithMatrix4:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
+ (id)valueWithVector3:(struct SCNVector3 { double x0; double x1; double x2; })a0;
+ (id)valueWithVector4:(struct SCNVector4 { double x0; double x1; double x2; double x3; })a0;

- (struct SCNVector4 { double x0; double x1; double x2; double x3; })vector4;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })matrix4;
- (struct SCNVector3 { double x0; double x1; double x2; })vector3;

@end
