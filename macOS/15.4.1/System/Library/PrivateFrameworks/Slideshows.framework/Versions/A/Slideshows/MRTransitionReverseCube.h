@class MRImageProvider;

@interface MRTransitionReverseCube : MRTransition {
    MRImageProvider *mWallProvider;
    MRImageProvider *mGradientProvider;
}

- (void)unload;
- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
