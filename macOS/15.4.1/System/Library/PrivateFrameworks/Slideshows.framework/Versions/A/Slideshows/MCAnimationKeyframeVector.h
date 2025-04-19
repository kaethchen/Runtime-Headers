@interface MCAnimationKeyframeVector : MCAnimationKeyframe

@property (nonatomic) struct { unsigned char length; float v[4]; } vector;

+ (id)keyframeWithVector:(struct { unsigned char x0; float x1[4]; })a0 atTime:(double)a1;
+ (id)keyframeWithVector:(struct { unsigned char x0; float x1[4]; })a0 atTime:(double)a1 offsetKind:(int)a2;

- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (id)initWithImprint:(id)a0;

@end
