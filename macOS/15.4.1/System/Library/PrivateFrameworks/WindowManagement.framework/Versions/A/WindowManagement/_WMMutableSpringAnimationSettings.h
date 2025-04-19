@interface _WMMutableSpringAnimationSettings : _WMSpringAnimationSettings

@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double epsilon;
@property (nonatomic) double initialVelocity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setDamping:(double)a0;
- (void)setInitialVelocity:(double)a0;
- (void)setMass:(double)a0;
- (void)setStiffness:(double)a0;
- (void)setEpsilon:(double)a0;

@end
