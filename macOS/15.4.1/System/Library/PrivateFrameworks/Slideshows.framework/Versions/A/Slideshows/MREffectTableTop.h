@class MRTextRenderer, NSMutableDictionary, NSArray, MRImageProvider, MRImage, MRCAMLBezierData, MRCroppingSprite;

@interface MREffectTableTop : MREffect {
    NSMutableDictionary *mSprites;
    MRCroppingSprite *mExtraSprites[2];
    MRImageProvider *mPhotoBackProvider;
    MRTextRenderer *mTextRenderer;
    MRImage *mTextImage;
    MRCroppingSprite *mTextSprite;
    MRCroppingSprite *mPhotoBackSprite;
    float mLocalMatrix[16];
    struct CGSize { double width; double height; } mMaxTextSize;
    BOOL mIsBreak;
    BOOL mIsLoaded;
    NSArray *mShuffledIndicies;
    MRCAMLBezierData *mBezierData;
    BOOL mNeedsToUpdateSizes;
}

+ (void)initialize;

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getCurrentCenter:(struct CGPoint { double x0; double x1; } *)a0 scale:(double *)a1 rotation:(double *)a2 isMain:(BOOL *)a3 forElement:(id)a4;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
