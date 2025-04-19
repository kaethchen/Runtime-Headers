@interface MCAnimationKeyframe1D : MCAnimationKeyframe

@property (nonatomic) float value;

+ (id)keyframeWithScalar:(float)a0 atTime:(double)a1;
+ (id)keyframeWithScalar:(float)a0 atTime:(double)a1 offsetKind:(int)a2;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (id)initWithImprint:(id)a0;

@end
