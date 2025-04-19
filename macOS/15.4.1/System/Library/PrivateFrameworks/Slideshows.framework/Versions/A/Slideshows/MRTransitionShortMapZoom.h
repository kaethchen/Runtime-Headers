@class MRImageProvider;

@interface MRTransitionShortMapZoom : MRTransition {
    MRImageProvider *mGradientProvider;
    MRImageProvider *mPinProvider;
    MRImageProvider *mYellowPinProvider;
    MRImageProvider *mRedPinProvider;
    MRImageProvider *mBoxShadowSmall;
}

- (void)setAttributes:(id)a0;
- (void)unload;
- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawSortedPins:(id)a0 providers:(id)a1 attributes:(id)a2 offset:(struct CGPoint { double x0; double x1; })a3 outro:(BOOL)a4 atTime:(double)a5 inContext:(id)a6 withArguments:(id)a7;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
