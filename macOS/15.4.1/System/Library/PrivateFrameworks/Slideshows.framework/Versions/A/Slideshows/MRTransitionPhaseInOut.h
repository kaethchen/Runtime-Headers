@interface MRTransitionPhaseInOut : MRTransition

- (BOOL)isInfinite;
- (BOOL)isOpaque;
- (BOOL)isSplit;
- (BOOL)isAlphaFriendly;
- (BOOL)controlsLayersTime;
- (BOOL)isNative3D;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
