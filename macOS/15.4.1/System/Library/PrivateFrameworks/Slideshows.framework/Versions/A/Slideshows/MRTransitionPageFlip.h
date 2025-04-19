@class MRMesh;

@interface MRTransitionPageFlip : MRTransition {
    MRMesh *_mesh;
    struct { float x0; float x1; float x2; float x3; float x4; float x5; } *_meshVertices;
    double _x0;
    double _y0;
    double _x;
    double _y;
    double _rollOrientationAim;
    double _rollOrientation;
    double _progressInternal;
    double _progressAim;
    BOOL _isManuallyTransitioning;
    BOOL _isFinishing;
    BOOL _isCanceling;
}

- (void)cleanup;
- (void)unload;
- (double)pzrEnd:(id)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
