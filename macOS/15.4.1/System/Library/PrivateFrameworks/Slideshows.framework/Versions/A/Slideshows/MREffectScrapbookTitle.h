@class NSMutableDictionary, MRImageProvider, MRImage, MRTextRenderer;

@interface MREffectScrapbookTitle : MREffect {
    MRImageProvider *mImageProviders[5];
    NSMutableDictionary *mSprites;
    MRTextRenderer *mTextRenderer0;
    MRImage *mTextImage0;
    float mLocalTranslationX;
    float mLocalTranslationY;
}

- (void)_cleanup;
- (BOOL)isOpaque;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (BOOL)isAlphaFriendly;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderEffectTitle2AtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderEffectTitleAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
