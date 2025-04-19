@interface MRAnimationPathPhysics : MCAnimationPathPhysics {
    float mDeltaValue;
    double mTime;
}

@property (nonatomic) float baseValue;
@property (nonatomic) float velocity;

- (float)computeValueForTime:(double)a0 withContext:(id)a1;
- (id)initWithMCAnimationPath:(id)a0;

@end
