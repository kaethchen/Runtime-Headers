@class SCNNode, NSMutableDictionary;

@interface SCNIKConstraint : SCNConstraint {
    SCNNode *_chainRootNode;
    struct SCNVector3 { double x; double y; double z; } _ikTarget;
    NSMutableDictionary *_jointsPerNode;
}

@property (readonly, nonatomic) SCNNode *chainRootNode;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } targetPosition;

+ (BOOL)supportsSecureCoding;
+ (id)inverseKinematicsConstraintWithChainRootNode:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_customDecodingOfSCNIKConstraint:(id)a0;
- (void)_customEncodingOfSCNIKConstraint:(id)a0;
- (void)_didDecodeSCNIKConstraint:(id)a0;
- (id)initWithChainRootNode:(id)a0;
- (id)jointForNode:(id)a0;
- (double)maxAllowedRotationAngleForJoint:(id)a0;
- (void)setChainRootNode:(id)a0;
- (void)setMaxAllowedRotationAngle:(double)a0 forJoint:(id)a1;

@end
