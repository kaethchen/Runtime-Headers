@interface _WMSpringAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double mass;
@property (readonly, nonatomic) double stiffness;
@property (readonly, nonatomic) double damping;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) double initialVelocity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_copyWithClass:(Class)a0;
- (void)_setDamping:(double)a0;
- (void)_setEpsilon:(double)a0;
- (void)_setInitialVelocity:(double)a0;
- (void)_setMass:(double)a0;
- (void)_setStiffness:(double)a0;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3 initialVelocity:(double)a4;

@end
