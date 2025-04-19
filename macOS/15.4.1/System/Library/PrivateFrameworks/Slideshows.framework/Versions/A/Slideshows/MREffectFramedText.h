@class MRTextRenderer, MRImage, MRCroppingSprite;

@interface MREffectFramedText : MREffect {
    MRTextRenderer *mTextRenderer;
    MRCroppingSprite *mSprite;
    MRCroppingSprite *mTextSprite;
    MRImage *mTextImage;
    float *mVertices;
    float *mFrameTextureCoordinates;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mTextRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mInnerFrameRect;
    double mHalfWidth;
    double mYPosition;
    double mScrollY;
    double mNewScrollY;
    double mFrameTime;
    double mHitOffFrameTime;
    float mVelocity;
    BOOL mWasUpdatedSinceLastRendering;
    BOOL mLiveAttributesWereUpdatedSinceLastRendering;
    BOOL mHasTextRect;
    BOOL mStretchesHorizontally;
    BOOL mIsHit;
    BOOL mNewIsHit;
}

+ (void)initialize;

- (id)init;
- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (BOOL)isOpaque;
- (void)_unload;
- (double)pzrEnd:(id)a0;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)isNative3D;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
