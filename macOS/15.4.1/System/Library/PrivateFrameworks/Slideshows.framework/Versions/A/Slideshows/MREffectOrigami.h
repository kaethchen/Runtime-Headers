@class MRCAMLBezierData, NSArray, NSMutableDictionary, MRImage, NSMutableArray, MROrigamiAnimationPath;

@interface MREffectOrigami : MREffect {
    NSMutableDictionary *mSprites;
    NSMutableArray *mSpriteKeysWatcher;
    NSArray *mAnimationTimeBounds;
    NSMutableArray *mItemInfos;
    double mDurationStretchFactor;
    MRImage *mBackColorImage;
    float mBackColorForImage[3];
    float mDescriptionAspectRatio;
    float mPixelUnit;
    BOOL mIsOrigami2Effect;
    BOOL mIsHorizontal;
    BOOL mIsOriginallyHorizontal;
    MRCAMLBezierData *mBreakCurve;
    MROrigamiAnimationPath *mLittleSwing;
    MROrigamiAnimationPath *mBigSwing;
    MROrigamiAnimationPath *mSideSwing;
    MROrigamiAnimationPath *mThirdsSwingTop;
    MROrigamiAnimationPath *mThirdsSwingBottom;
    struct { long long x0; long long x1; } *mBreakInfos;
    unsigned long long mTotalNumberOfFolds;
    BOOL _needsToUpdateSizes;
}

+ (void)initialize;
+ (BOOL)hasCustomTiming;
+ (id)customTimingWithEffectID:(id)a0 effectAttributes:(id)a1 slideInformation:(id)a2 textInformation:(id)a3 inAspectRatio:(double)a4;

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateSizes;
- (void)_unload;
- (BOOL)_checkPanoramaAbsoluteSizeForImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)_cleanupSwingTimings;
- (BOOL)_needsRenderingAtTime:(double)a0 remainingStillDurationAfter:(double *)a1;
- (void)_renderFallBreakImage:(id)a0 atProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5 :(struct CGPoint { double x0; double x1; } *)a6 :(struct CGPoint { double x0; double x1; })a7;
- (void)_renderFallImage:(id)a0 atProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5 :(struct CGPoint { double x0; double x1; } *)a6 :(struct CGPoint { double x0; double x1; })a7;
- (id)_retainedByUserBackColorImageInContext:(id)a0;
- (void)_setTargetSizeOfImageProviders;
- (void)_setupBreakInfos:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)_setupSwingTimings;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (BOOL)getStartTime:(double *)a0 andDuration:(double *)a1 forMovingToElementID:(id)a2 backwards:(BOOL)a3;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (BOOL)hasMoreSlidesFromTime:(double)a0 backwards:(BOOL)a1 startTime:(double *)a2 duration:(double *)a3;
- (id)initWithEffectID:(id)a0;
- (double)interestingTimeForElement:(id)a0;
- (double)interestingTimeForTime:(double)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)render1To3DownAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)render1To3LeftAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderBreakAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFall2AtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFallAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFallBreakAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFlipDiagonalAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFlipDownAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFlipLeftAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFold4LeftAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFoldDownAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderFoldLeftAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderStillAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)renderUnfoldingFlowerAtTime:(double)a0 andProgress:(double)a1 inContext:(id)a2 withArguments:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withAttributes:(id)a5;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;

@end
