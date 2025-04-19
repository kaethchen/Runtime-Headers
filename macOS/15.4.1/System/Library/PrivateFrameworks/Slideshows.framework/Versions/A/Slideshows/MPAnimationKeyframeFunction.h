@class NSString, NSDictionary;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *function;
@property (copy, nonatomic) NSDictionary *functionParameters;
@property (nonatomic) double functionTimeOffset;
@property (nonatomic) double functionTimeFactor;
@property (nonatomic) double innerEaseInControl;
@property (nonatomic) double innerEaseOutControl;

+ (BOOL)supportsSecureCoding;
+ (id)keyframeFunctionWithFunction:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2 withDuration:(double)a3;
+ (id)keyframeFunctionWithFunction:(id)a0 atTime:(double)a1 withDuration:(double)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)keyframe;
- (id)initKeyframeFunctionWithFunction:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2 withDuration:(double)a3;

@end
