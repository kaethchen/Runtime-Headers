@interface VFXPhysicsConeTwistJoint : VFXPhysicsJoint {
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } frameA; struct { void /* unknown type, empty encoding */ columns[4]; } frameB; float maximumAngularLimit1; float maximumAngularLimit2; float maximumTwistAngle; } _definition;
}

@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } frameA;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } frameB;
@property (nonatomic) float maximumAngularLimit1;
@property (nonatomic) float maximumAngularLimit2;
@property (nonatomic) float maximumTwistAngle;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBody:(id)a0 frame:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
+ (id)jointWithBodyA:(id)a0 frameA:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 bodyB:(id)a2 frameB:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithBody:(id)a0 frame:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithBodyA:(id)a0 frameA:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 bodyB:(id)a2 frameB:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (void)copyFrom:(id)a0;
- (struct btTypedConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; } *)_createConstraint;
- (struct btConeTwistConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x13[3]; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x14; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; struct btVector3 { union { float x0[4]; } x0; } x24; struct btVector3 { union { float x0[4]; } x0; } x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; float x38; float x39; struct btVector3 { union { float x0[4]; } x0; } x40; BOOL x41; BOOL x42; struct btQuaternion { union { float x0[4]; } x0; } x43; float x44; struct btVector3 { union { float x0[4]; } x0; } x45; int x46; float x47; float x48; float x49; } *)_twistHandle;

@end
