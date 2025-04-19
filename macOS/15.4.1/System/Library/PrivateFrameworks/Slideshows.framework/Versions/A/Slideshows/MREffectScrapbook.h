@class NSArray, NSMutableDictionary, MRImage, NSMutableArray, MRTextRenderer;

@interface MREffectScrapbook : MREffect {
    NSMutableDictionary *mFrameProviders;
    NSMutableDictionary *mSprites;
    BOOL mIsLoaded;
    long long mTitleAspectRatio;
    NSArray *mLayouts;
    MRTextRenderer *mTextRenderer0;
    MRImage *mTextImage0;
    NSMutableArray *mRectsToSubtract;
    BOOL mIsMovieOnly;
    struct CGSize { double width; double height; } mTextSize;
    float mLocalMatrix[16];
}

+ (void)initialize;

- (void)_cleanup;
- (BOOL)isOpaque;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (BOOL)isAlphaFriendly;
- (void)_drawBlendedFrame:(id)a0 info:(id)a1 index:(long long)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 zIndex:(long long)a4 zRotation:(double)a5 subtract:(id)a6 time:(double)a7 inContext:(id)a8 withArguments:(id)a9;
- (void)_drawBreakFrame:(id)a0 index:(long long)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 rotation:(double)a3 forcedAspectRatio:(double)a4 layout:(id)a5 offset:(struct CGSize { double x0; double x1; })a6 time:(double)a7 inContext:(id)a8 withArguments:(id)a9;
- (void)_drawBreakFrameInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameWidth:(double)a1 time:(double)a2 inContext:(id)a3 withArguments:(id)a4;
- (void)_drawBreakTwoPartFrame:(id)a0 index:(long long)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 rotation:(double)a3 forcedAspectRatio:(double)a4 time:(double)a5 inContext:(id)a6 withArguments:(id)a7;
- (void)_drawFrame:(id)a0 info:(id)a1 index:(long long)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 zIndex:(long long)a4 zRotation:(double)a5 subtract:(id)a6 time:(double)a7 inContext:(id)a8 withArguments:(id)a9;
- (void)_drawFrame:(id)a0 info:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 stretch:(BOOL)a3 zIndex:(long long)a4 zRotation:(double)a5 subtract:(id)a6 key:(id)a7 time:(double)a8 inContext:(id)a9 withArguments:(id)a10;
- (void)_drawLandscapePanoBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 paperType:(id)a1 subtract:(id)a2 inTime:(double)a3 inContext:(id)a4 withArguments:(id)a5;
- (void)_drawMask:(id)a0 index:(long long)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 zIndex:(long long)a3 zRotation:(double)a4 subtract:(id)a5 time:(double)a6 inContext:(id)a7 withArguments:(id)a8;
- (void)_drawPortraitPanoBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flippedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 paperType:(id)a2 subtract:(id)a3 inTime:(double)a4 inContext:(id)a5 withArguments:(id)a6;
- (void)_drawTextWithInfo:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zIndex:(long long)a2 zRotation:(double)a3 time:(double)a4 inContext:(id)a5 withArguments:(id)a6;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getCurrentCenter:(struct CGPoint { double x0; double x1; } *)a0 scale:(double *)a1 rotation:(double *)a2 isMain:(BOOL *)a3 forElement:(id)a4;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (BOOL)hasMoreSlidesFromTime:(double)a0 backwards:(BOOL)a1 startTime:(double *)a2 duration:(double *)a3;
- (id)initWithEffectID:(id)a0;
- (double)interestingTimeForElement:(id)a0;
- (double)interestingTimeForTime:(double)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
