@interface MPAnimationKeyframe2D : MPAnimationKeyframe

@property (nonatomic) struct CGPoint { double x; double y; } point;

+ (BOOL)supportsSecureCoding;
+ (id)keyframe2DWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
+ (id)keyframe2DWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 offsetType:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)keyframe;
- (id)initKeyframe2DWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 offsetType:(unsigned long long)a2;

@end
