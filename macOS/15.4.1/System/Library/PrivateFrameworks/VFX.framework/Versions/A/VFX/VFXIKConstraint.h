@class VFXNode, NSMutableDictionary;

@interface VFXIKConstraint : VFXConstraint {
    VFXNode *_chainRootNode;
    void /* unknown type, empty encoding */ _ikTarget;
    NSMutableDictionary *_jointsPerNode;
}

@property (readonly, nonatomic) VFXNode *chainRootNode;
@property (nonatomic) void /* unknown type, empty encoding */ targetPosition;

+ (BOOL)supportsSecureCoding;
+ (id)inverseKinematicsConstraintWithChainRootNode:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChainRootNode:(id)a0;
- (id)jointForNode:(id)a0;
- (float)maxAllowedRotationAngleForJoint:(id)a0;
- (void)setChainRootNode:(id)a0;
- (void)setMaxAllowedRotationAngle:(float)a0 forJoint:(id)a1;
- (void)_customDecodingOfVFXIKConstraint:(id)a0;
- (void)_customEncodingOfVFXIKConstraint:(id)a0;
- (void)_didDecodeVFXIKConstraint:(id)a0;
- (void)retargetWithRemapTable:(struct __CFDictionary { } *)a0;
- (void)setTargetPositionValue:(id)a0;
- (id)targetPositionValue;

@end
