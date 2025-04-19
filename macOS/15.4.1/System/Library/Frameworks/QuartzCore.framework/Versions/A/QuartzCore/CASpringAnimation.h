@interface CASpringAnimation : CABasicAnimation

@property double velocity;
@property double mass;
@property double stiffness;
@property double damping;
@property double initialVelocity;
@property BOOL allowsOverdamping;
@property (readonly) double settlingDuration;
@property (readonly) double perceptualDuration;
@property (readonly) double bounce;

+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;

- (float)_solveForInput:(float)a0;
- (double)durationForEpsilon:(double)a0;
- (id)initWithPerceptualDuration:(double)a0 bounce:(double)a1;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (double)_timeFunction:(double)a0;

@end
