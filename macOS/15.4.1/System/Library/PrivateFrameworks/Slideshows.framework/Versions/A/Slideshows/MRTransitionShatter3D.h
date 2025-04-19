@interface MRTransitionShatter3D : MRTransition {
    unsigned char mLayerCount;
}

+ (void)initialize;

- (id)initWithTransitionID:(id)a0;
- (void)pinWheelAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)slicesAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)spinAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)warpAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)zoomAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
