@class NSSet, NSMutableSet, NSArray;

@interface MCAnimationPathKeyframed : MCAnimationPath {
    NSMutableSet *mKeyframes;
    NSArray *mCachedOrderedKeyframes;
}

@property (readonly) NSSet *keyframes;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (double)timeForKeyframe:(id)a0 withPlugTiming:(id)a1;
+ (id)animationPathWithKey:(id)a0;

- (id)description;
- (id)init;
- (id)xmlElement;
- (id)imprint;
- (void)removeKeyframe:(id)a0;
- (id)createKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (id)orderedKeyframesWithPlugTiming:(id)a0;
- (void)_copySelfToSnapshot:(id)a0;
- (void)addKeyframe:(id)a0;
- (unsigned long long)countOfKeyframes;
- (id)createKeyframeWithFunction:(id)a0 atTime:(double)a1 offsetKind:(int)a2 forDuration:(double)a3;
- (id)createKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 offsetKind:(int)a2;
- (id)createKeyframeWithScalar:(float)a0 atTime:(double)a1;
- (id)createKeyframeWithScalar:(float)a0 atTime:(double)a1 offsetKind:(int)a2;
- (id)createKeyframeWithVector:(struct { unsigned char x0; float x1[4]; })a0 atTime:(double)a1;
- (id)createKeyframeWithVector:(struct { unsigned char x0; float x1[4]; })a0 atTime:(double)a1 offsetKind:(int)a2;
- (void)demolish;
- (id)initWithImprint:(id)a0;
- (void)removeAllKeyframes;

@end
