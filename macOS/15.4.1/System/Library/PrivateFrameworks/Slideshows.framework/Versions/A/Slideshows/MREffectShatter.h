@class NSMutableDictionary, MRCAMLBezierData;

@interface MREffectShatter : MREffect {
    NSMutableDictionary *mSprites;
    BOOL mIsLoaded;
    BOOL mSkipPanorama;
    MRCAMLBezierData *mZCurves[2];
    MRCAMLBezierData *mXRotCurves[2];
    MRCAMLBezierData *mPosCurves[2];
    MRCAMLBezierData *mYRotCurves[2];
    MRCAMLBezierData *mLayerZCurves[6][2];
    double mZKeyTimes[3];
    double mZValues[3];
    double mXRotKeyTimes[3];
    double mXRotValues[3];
    double mPosKeyTimes[3];
    double mPosXValues[3];
    double mPosYValues[3];
    double mYRotKeyTimes[3];
    double mYRotValues[3];
    double mLayerZKeyTimes[6][3];
    double mLayerZValues[6][3];
}

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
