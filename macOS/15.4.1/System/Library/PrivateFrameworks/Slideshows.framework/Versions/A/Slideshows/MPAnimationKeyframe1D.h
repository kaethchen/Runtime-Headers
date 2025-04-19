@interface MPAnimationKeyframe1D : MPAnimationKeyframe

@property (nonatomic) double scalar;

+ (BOOL)supportsSecureCoding;
+ (id)keyframe1DWithScalar:(double)a0 atTime:(double)a1;
+ (id)keyframe1DWithScalar:(double)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)keyframe;
- (id)initKeyframe1DWithScalar:(double)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;

@end
