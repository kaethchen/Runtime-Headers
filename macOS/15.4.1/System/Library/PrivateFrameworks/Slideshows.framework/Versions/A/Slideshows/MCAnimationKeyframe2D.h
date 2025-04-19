@interface MCAnimationKeyframe2D : MCAnimationKeyframe

@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) struct CGPoint { double x; double y; } c1;
@property (nonatomic) struct CGPoint { double x; double y; } c2;

+ (id)keyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
+ (id)keyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 offsetKind:(int)a2;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (id)initWithImprint:(id)a0;

@end
