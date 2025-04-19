@class MRCAMLBezierData, NSMutableDictionary, MRImageProvider, MRImage, NSMutableArray, MRTextRenderer;

@interface MREffectPortfolio : MREffect {
    NSMutableDictionary *mSprites;
    MRImageProvider *mLeftPageProvider;
    MRImageProvider *mRightPageProvider;
    MRImageProvider *mPageCreaseProvider;
    NSMutableDictionary *mFrameProviders;
    NSMutableArray *mFrameList;
    BOOL mIsLoaded;
    long long mPageCount;
    BOOL mLeftZoom;
    BOOL mRightZoom;
    BOOL mIsBreakXL;
    BOOL mIsPortraitBreak;
    BOOL mIsPortrait2Break;
    BOOL mPortraitBreakDirection;
    BOOL mIsPortraitBreakXL;
    BOOL mFitMovies;
    BOOL mNeedsSizeUpdate;
    BOOL mIsSlideOnly;
    MRTextRenderer *mTextRenderer0;
    MRImage *mTextImage0;
    MRCAMLBezierData *mZoomCurves[2];
    MRCAMLBezierData *mXLCurves[2];
}

+ (void)initialize;

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_drawBreakXLAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)_drawFrame:(id)a0 index:(long long)a1 leftCount:(long long)a2 time:(double)a3 inContext:(id)a4 withArguments:(id)a5;
- (void)_drawIndex:(long long)a0 time:(double)a1 context:(id)a2 arguments:(id)a3 size:(struct CGSize { double x0; double x1; })a4 position:(struct CGPoint { double x0; double x1; })a5;
- (void)_drawLandscapeBreakForPortraitAtTime:(double)a0 duration:(double)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)_drawPagesAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)_drawPagesCreaseWithHeight:(double)a0 atTime:(double)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)_drawPortraitBreakForLandscapeAtTime:(double)a0 duration:(double)a1 onePage:(BOOL)a2 inContext:(id)a3 withArguments:(id)a4;
- (void)_drawPortraitBreakForPortraitAtTime:(double)a0 duration:(double)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForSlideAtIndex:(long long)a0 frame:(id)a1 leftCount:(long long)a2 movie:(BOOL)a3 localAspectRatio:(double)a4;
- (void)_renderLandscapeBreakPageAtIndex:(long long)a0 atTime:(double)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)_renderPortraitBreakForPortraitPageAtIndex:(long long)a0 atTime:(double)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)_renderPortraitBreakPageAtIndex:(long long)a0 flipped:(BOOL)a1 onePage:(BOOL)a2 atTime:(double)a3 inContext:(id)a4 withArguments:(id)a5;
- (void)_renderXLPageAtIndex:(long long)a0 flipped:(BOOL)a1 atTime:(double)a2 inContext:(id)a3 withArguments:(id)a4;
- (void)_updateSizes:(double)a0;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (void)endMorphing;
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
