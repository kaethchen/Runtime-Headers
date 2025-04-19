@interface UXViewAnimationContext : NSObject

@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;

- (void)generateSpringPropertiesForDuration:(double)a0 damping:(double)a1 velocity:(double)a2;

@end
