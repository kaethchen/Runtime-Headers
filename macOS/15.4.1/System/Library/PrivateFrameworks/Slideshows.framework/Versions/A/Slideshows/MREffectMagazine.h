@class NSMutableDictionary, NSDictionary, MRImage, MRTextRenderer;

@interface MREffectMagazine : MREffect {
    NSMutableDictionary *mSprites;
    MRTextRenderer *mTextRenderer0;
    MRImage *mTextImage0;
    BOOL mIsLoaded;
    BOOL mFitMovie;
    NSDictionary *mCurrentInfo;
}

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_applySizeScripts:(id)a0;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (struct CGSize { double x0; double x1; })_sizeForBreakAspectRatio:(double)a0 size:(struct CGSize { double x0; double x1; })a1 inContext:(id)a2;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
