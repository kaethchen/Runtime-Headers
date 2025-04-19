@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath {
    NSMutableSet *_keyframes;
}

+ (BOOL)supportsSecureCoding;
+ (id)animationPath;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)cleanup;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)parent;
- (void)dump;
- (id)keyframes;
- (void)removeKeyframe:(id)a0;
- (id)createKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (void)addKeyframe:(id)a0;
- (void)addKeyframes:(id)a0;
- (void)copyKeyframes:(id)a0;
- (id)createKeyframeWithFunction:(id)a0 atTime:(double)a1 forDuration:(double)a2;
- (id)createKeyframeWithFunction:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2 forDuration:(double)a3;
- (id)createKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 offsetType:(unsigned long long)a2;
- (id)createKeyframeWithScalar:(double)a0 atTime:(double)a1;
- (id)createKeyframeWithScalar:(double)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;
- (id)createKeyframeWithVector:(id)a0 atTime:(double)a1;
- (id)createKeyframeWithVector:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;
- (id)fullDebugLog;
- (id)newKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (id)newKeyframeWithScalar:(double)a0 atTime:(double)a1;
- (id)orderedKeyframes;
- (double)parentMainDuration;
- (double)parentPhaseInDuration;
- (double)parentPhaseOutDuration;
- (double)relativeTimeForKeyframe:(id)a0;
- (void)removeAllKeyframes;
- (void)removeKeyframes:(id)a0;
- (void)setAnimationPath:(id)a0;

@end
