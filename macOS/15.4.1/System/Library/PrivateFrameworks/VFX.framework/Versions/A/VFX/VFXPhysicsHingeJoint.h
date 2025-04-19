@interface VFXPhysicsHingeJoint : VFXPhysicsJoint {
    struct { void /* unknown type, empty encoding */ anchorA; void /* unknown type, empty encoding */ anchorB; void /* unknown type, empty encoding */ axisA; void /* unknown type, empty encoding */ axisB; } _definition;
}

@property (nonatomic) void /* unknown type, empty encoding */ axisA;
@property (nonatomic) void /* unknown type, empty encoding */ anchorA;
@property (nonatomic) void /* unknown type, empty encoding */ axisB;
@property (nonatomic) void /* unknown type, empty encoding */ anchorB;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBody:(id)a0 axis:(SEL)a1 anchor:(id)a2;
+ (id)jointWithBodyA:(id)a0 axisA:(SEL)a1 anchorA:(id)a2 bodyB:(id)a3 axisB:(void /* unknown type, empty encoding */)a4 anchorB:(void /* unknown type, empty encoding */)a5;
+ (id)hingeWithBody:(id)a0 axis:(id)a1 anchor:(id)a2;
+ (id)hingeWithBodyA:(id)a0 axisA:(id)a1 anchorA:(id)a2 bodyB:(id)a3 axisB:(id)a4 anchorB:(id)a5;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithBody:(id)a0 axis:(SEL)a1 anchor:(id)a2;
- (id)initWithBodyA:(id)a0 axisA:(SEL)a1 anchorA:(id)a2 bodyB:(id)a3 axisB:(void /* unknown type, empty encoding */)a4 anchorB:(void /* unknown type, empty encoding */)a5;
- (void)copyFrom:(id)a0;
- (struct btTypedConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; } *)_createConstraint;
- (struct btHingeConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x13[3]; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x14[3]; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x15; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x16; float x17; float x18; struct btAngularLimit { float x0; float x1; float x2; float x3; float x4; float x5; float x6; BOOL x7; } x19; float x20; float x21; float x22; float x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; float x29; int x30; float x31; float x32; float x33; } *)_hingeHandle;
- (id)anchorAValue;
- (id)anchorBValue;
- (id)axisAValue;
- (id)axisBValue;
- (void)setAnchorAValue:(id)a0;
- (void)setAnchorBValue:(id)a0;
- (void)setAxisAValue:(id)a0;
- (void)setAxisBValue:(id)a0;

@end
