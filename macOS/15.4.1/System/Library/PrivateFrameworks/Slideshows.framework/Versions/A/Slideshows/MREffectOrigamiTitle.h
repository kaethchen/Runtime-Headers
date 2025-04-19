@class MRCAMLBezierData, MRImage, NSArray, MRTextRenderer, MROrigamiAnimationPath, NSMutableDictionary, MRCroppingSprite, NSMutableArray;

@interface MREffectOrigamiTitle : MREffect {
    MRTextRenderer *mText0Renderer;
    MRCroppingSprite *mText0Sprite;
    NSMutableArray *mText0Images;
    NSMutableArray *mText0Offsets;
    MRImage *mText0Image;
    unsigned char mLineWordCounts[3];
    NSMutableArray *mWordIndexForGlyph;
    NSArray *mPatchworkAtEnd;
    NSMutableDictionary *mSprites;
    struct CGSize { double width; double height; } mImageSize;
    long long mWordCount;
    MRCAMLBezierData *mBreakCurve;
    MROrigamiAnimationPath *mBigSwing;
    MRImage *mBackColorImage;
    float mBackColorForImage[3];
}

- (id)init;
- (void)_cleanup;
- (void)_unload;
- (void)_cleanupSwingTimings;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (id)_retainedByUserBackColorImageInContext:(id)a0;
- (void)_setupSwingTimings;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (BOOL)isLoadedForTime:(double)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderBreakImage:(id)a0 atProgress:(double)a1 withKey:(id)a2 inContext:(id)a3 withArguments:(id)a4 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 withAttributes:(id)a6;
- (void)renderFallBreakImage:(id)a0 atProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5 :(struct CGPoint { double x0; double x1; } *)a6 :(struct CGPoint { double x0; double x1; })a7;
- (void)renderFallImage:(id)a0 atProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5 :(struct CGPoint { double x0; double x1; } *)a6 :(struct CGPoint { double x0; double x1; })a7;
- (void)renderFallImage:(id)a0 atProgress:(double)a1 strength:(double)a2 inContext:(id)a3 withArguments:(id)a4 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 withAttributes:(id)a6 :(struct CGPoint { double x0; double x1; } *)a7 :(struct CGPoint { double x0; double x1; })a8;
- (void)renderStillImage:(id)a0 withKey:(id)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderTextEffectAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderTitleEffectAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
