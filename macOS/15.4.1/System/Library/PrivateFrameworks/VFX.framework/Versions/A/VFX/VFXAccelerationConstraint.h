@interface VFXAccelerationConstraint : VFXConstraint {
    float _maximumLinearVelocity;
    float _maximumLinearAcceleration;
    float _decelerationDistance;
    float _damping;
}

@property (nonatomic) float maximumLinearAcceleration;
@property (nonatomic) float maximumLinearVelocity;
@property (nonatomic) float decelerationDistance;
@property (nonatomic) float damping;

+ (BOOL)supportsSecureCoding;
+ (id)accelerationConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
