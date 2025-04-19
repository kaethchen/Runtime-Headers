@class MRCroppingSprite, NSMutableDictionary, MRCAMLBezierData, MRImage, NSMutableArray, MRTextRenderer;

@interface MREffectShatterText : MREffect {
    MRTextRenderer *mTextRenderer;
    MRImage *mTextImage;
    MRCroppingSprite *mTextSprite;
    NSMutableArray *mMasks;
    BOOL mIsLoaded;
    NSMutableDictionary *mLayout;
    MRImage *mRenderedTextImage;
    BOOL mIsTitle;
    MRCAMLBezierData *mCurves[2];
    double mValues[3];
    double mKeyTimes[3];
}

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (void)_renderSublayer:(id)a0 layerCount:(long long)a1 atTime:(double)a2 inContext:(id)a3 withArguments:(id)a4;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
