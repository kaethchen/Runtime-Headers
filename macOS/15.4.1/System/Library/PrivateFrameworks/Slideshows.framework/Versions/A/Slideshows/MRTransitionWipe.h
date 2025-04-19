@interface MRTransitionWipe : MRTransition {
    double _progressInternal;
    double _progressAim;
    double _angle;
    double _angleAim;
    double _x;
    double _y;
    BOOL _isManuallyTransitioning;
    BOOL _isFinishing;
    BOOL _isCanceling;
}

+ (void)initialize;

- (void)setAttributes:(id)a0;
- (void)unload;
- (BOOL)isTransitioning;
- (double)pzrEnd:(id)a0;
- (BOOL)dependsOnFingerPosition;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)supportsDirectionOverride;

@end
