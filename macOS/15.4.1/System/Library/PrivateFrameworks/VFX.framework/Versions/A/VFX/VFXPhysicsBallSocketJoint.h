@interface VFXPhysicsBallSocketJoint : VFXPhysicsJoint {
    struct { void /* unknown type, empty encoding */ anchorA; void /* unknown type, empty encoding */ anchorB; } _definition;
}

@property (nonatomic) void /* unknown type, empty encoding */ anchorA;
@property (nonatomic) void /* unknown type, empty encoding */ anchorB;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBody:(SEL)a0 anchor:(id)a1;
+ (id)jointWithBodyA:(id)a0 anchorA:(SEL)a1 bodyB:(id)a2 anchorB:(id)a3;
+ (id)ballSocketWithBody:(id)a0 anchor:(id)a1;
+ (id)ballSocketWithBodyA:(id)a0 anchorA:(id)a1 bodyB:(id)a2 anchorB:(id)a3;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithBody:(SEL)a0 anchor:(id)a1;
- (id)initWithBodyA:(id)a0 anchorA:(SEL)a1 bodyB:(id)a2 anchorB:(id)a3;
- (void)copyFrom:(id)a0;
- (struct btPoint2PointConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x13[3]; struct btVector3 { union { float x0[4]; } x0; } x14; struct btVector3 { union { float x0[4]; } x0; } x15; int x16; float x17; float x18; BOOL x19; struct btConstraintSetting { float x0; float x1; float x2; } x20; } *)_ballSocketConstraint;
- (struct btTypedConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; } *)_createConstraint;
- (id)anchorAValue;
- (id)anchorBValue;
- (void)setAnchorAValue:(id)a0;
- (void)setAnchorBValue:(id)a0;

@end
