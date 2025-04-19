@class MRCAMLBezierData;

@interface MRTransitionHyperGridWipe : MRTransition {
    MRCAMLBezierData *mCurves[2];
}

- (void)_cleanup;
- (BOOL)controlsLayersTime;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
