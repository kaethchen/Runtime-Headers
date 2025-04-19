@class MRImageProvider, MRCAMLBezierData;

@interface MRTransitionFlatPageFlip : MRTransition {
    MRCAMLBezierData *mCurves[2];
    MRImageProvider *mPortraitShadow;
}

- (void)cleanup;
- (void)unload;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)controlsLayersTime;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
