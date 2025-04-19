@class MRTextRenderer, MRImage, MRCroppingSprite;

@interface MREffectJustAText : MREffect {
    MRTextRenderer *mTextRenderer;
    MRImage *mTextImage;
    MRCroppingSprite *mTextSprite;
    BOOL mTextWasUpdatedSinceLastRendering;
    struct CGSize { double width; double height; } mSizeOfText;
}

- (id)init;
- (void)_unload;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
