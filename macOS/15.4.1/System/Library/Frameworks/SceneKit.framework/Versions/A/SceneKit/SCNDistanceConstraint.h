@class SCNNode;

@interface SCNDistanceConstraint : SCNConstraint {
    SCNNode *_target;
    float _minimumDistance;
    float _maximumDistance;
    BOOL _keepTargetDirection;
    struct SCNVector3 { double x; double y; double z; } _targetDirection;
    float _maximumDirectionAngle;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double maximumDistance;

+ (BOOL)supportsSecureCoding;
+ (id)distanceConstraint;
+ (id)distanceConstraintWithTarget:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct SCNVector3 { double x0; double x1; double x2; })targetDirection;
- (void)_customDecodingOfSCNDistanceConstraint:(id)a0;
- (void)_customEncodingOfSCNDistanceConstraint:(id)a0;
- (BOOL)keepTargetDirection;
- (void)setKeepTargetDirection:(BOOL)a0;
- (void)setTargetDirection:(struct SCNVector3 { double x0; double x1; double x2; })a0;

@end
