@class MROrigamiAnimationPath;

@interface MRTransitionOrigamiFold : MRTransition {
    MROrigamiAnimationPath *mBigSwing;
    MROrigamiAnimationPath *mSideSwing;
}

- (void)cleanup;
- (void)_cleanupSwingTimings;
- (void)_setupSwingTimings;
- (BOOL)controlsLayersTime;
- (id)initWithTransitionID:(id)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
