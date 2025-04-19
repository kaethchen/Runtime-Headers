@class VFXPhysicsWorld, VFXPhysicsBody;

@interface VFXPhysicsJoint : NSObject <NSSecureCoding, NSCopying> {
    VFXPhysicsWorld *_physicsWorld;
    struct btTypedConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; } *_constraint;
    VFXPhysicsBody *_bodyA;
    VFXPhysicsBody *_bodyB;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VFXPhysicsBody *bodyA;
@property (retain, nonatomic) VFXPhysicsBody *bodyB;

+ (id)joint;
+ (id)VFXUID_creationOptions;
+ (id)VFXUID_instanciateWithOption:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isActive;
- (struct btTypedConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; } *)_handle;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (id)physicsWorld;
- (void)copyFrom:(id)a0;
- (void)_addToPhysicsWorld:(id)a0;
- (struct btTypedConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; } *)_createConstraint;
- (void)_removeConstraint;
- (void)_updateContraintAndAddToWorld:(id)a0;
- (void)retargetWithRemapTable:(struct __CFDictionary { } *)a0;

@end
