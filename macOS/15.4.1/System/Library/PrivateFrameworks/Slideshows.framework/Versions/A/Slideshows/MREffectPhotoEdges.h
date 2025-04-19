@class MRCAMLBezierData, NSMutableDictionary, MRImageProvider, MRImage, MRTextRenderer;

@interface MREffectPhotoEdges : MREffect {
    MRImageProvider *mFrameProvider;
    MRImageProvider *mBreakProvider[12];
    BOOL mIsLoaded;
    NSMutableDictionary *mSprites;
    MRTextRenderer *mText0Renderer;
    MRImage *mText0Image;
    MRCAMLBezierData *mBezierEaseIn;
    MRCAMLBezierData *mBezierEaseOut;
}

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;

@end
