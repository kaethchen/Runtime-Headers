@interface VFXPhysicsSliderJoint : VFXPhysicsJoint {
    struct { void /* unknown type, empty encoding */ axisA; void /* unknown type, empty encoding */ anchorA; void /* unknown type, empty encoding */ axisB; void /* unknown type, empty encoding */ anchorB; float minLinearLimit; float maxLinearLimit; float minAngularLimit; float maxAngularLimit; float motorTargetLinearVelocity; float motorMaximumForce; float motorTargetAngularVelocity; float motorMaximumTorque; } _definition;
}

@property (nonatomic) void /* unknown type, empty encoding */ axisA;
@property (nonatomic) void /* unknown type, empty encoding */ anchorA;
@property (nonatomic) void /* unknown type, empty encoding */ axisB;
@property (nonatomic) void /* unknown type, empty encoding */ anchorB;
@property (nonatomic) float minimumLinearLimit;
@property (nonatomic) float maximumLinearLimit;
@property (nonatomic) float minimumAngularLimit;
@property (nonatomic) float maximumAngularLimit;
@property (nonatomic) float motorTargetLinearVelocity;
@property (nonatomic) float motorMaximumForce;
@property (nonatomic) float motorTargetAngularVelocity;
@property (nonatomic) float motorMaximumTorque;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBody:(id)a0 axis:(SEL)a1 anchor:(id)a2;
+ (id)jointWithBodyA:(id)a0 axisA:(SEL)a1 anchorA:(id)a2 bodyB:(id)a3 axisB:(void /* unknown type, empty encoding */)a4 anchorB:(void /* unknown type, empty encoding */)a5;
+ (id)sliderWithBody:(id)a0 axis:(id)a1 anchor:(id)a2;
+ (id)sliderWithBodyA:(id)a0 axisA:(id)a1 anchorA:(id)a2 bodyB:(id)a3 axisB:(id)a4 anchorB:(id)a5;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithBody:(id)a0 axis:(SEL)a1 anchor:(id)a2;
- (id)initWithBodyA:(id)a0 axisA:(SEL)a1 anchorA:(id)a2 bodyB:(id)a3 axisB:(void /* unknown type, empty encoding */)a4 anchorB:(void /* unknown type, empty encoding */)a5;
- (void)copyFrom:(id)a0;
- (struct btTypedConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; } *)_createConstraint;
- (struct btSliderConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; BOOL x13; BOOL x14; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x15; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x16; BOOL x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; BOOL x46; BOOL x47; int x48; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x49[3]; float x50[3]; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x51[3]; float x52; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x53; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x54; struct btVector3 { union { float x0[4]; } x0; } x55; struct btVector3 { union { float x0[4]; } x0; } x56; struct btVector3 { union { float x0[4]; } x0; } x57; struct btVector3 { union { float x0[4]; } x0; } x58; struct btVector3 { union { float x0[4]; } x0; } x59; struct btVector3 { union { float x0[4]; } x0; } x60; struct btVector3 { union { float x0[4]; } x0; } x61; struct btVector3 { union { float x0[4]; } x0; } x62; float x63; float x64; float x65; float x66; BOOL x67; float x68; float x69; float x70; BOOL x71; float x72; float x73; float x74; } *)_sliderHandle;
- (id)anchorAValue;
- (id)anchorBValue;
- (id)axisAValue;
- (id)axisBValue;
- (void)setAnchorAValue:(id)a0;
- (void)setAnchorBValue:(id)a0;
- (void)setAxisAValue:(id)a0;
- (void)setAxisBValue:(id)a0;

@end
