@class NSMutableDictionary, MRImageProvider, NSMutableArray, MRTextRenderer;

@interface MREffectReflectionsTitle : MREffect {
    NSMutableDictionary *mSprites;
    BOOL mFlipped;
    BOOL mSpeedUpRight;
    double mImageMain;
    double mTextMain;
    MRTextRenderer *mTextRenderer;
    MRTextRenderer *mWordRenderer;
    NSMutableArray *mWordImages;
    NSMutableArray *mWordFrames;
    NSMutableArray *mCachedRenderedWords;
    double mTextYOffset;
    struct CGSize { double width; double height; } mTextSize;
    struct CGSize { double width; double height; } mTextImageSize;
    MRImageProvider *mMaskProvider;
    MRImageProvider *mGroundShadowCenterProvider;
    MRImageProvider *mGroundShadowLeftProvider;
    MRImageProvider *mGroundShadowRightProvider;
    NSMutableDictionary *mBreakInformation;
    BOOL mIsLoaded;
}

- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_applySizeScripts:(double)a0;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (void)cacheRenderedWords;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)render1SlideAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 scale:(double)a3 tilt:(long long)a4 phaseOutType:(long long)a5 direction:(long long)a6;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 position:(struct CGPoint { double x0; double x1; })a2 yRot:(double)a3 tX:(double)a4 time:(double)a5 inContext:(id)a6 withArguments:(id)a7 light:(BOOL)a8 shadow:(BOOL)a9;
- (void)renderTextAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 scale:(double)a3;

@end
