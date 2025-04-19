@class NSMutableDictionary, NSString, MRImageProvider, NSMutableArray, MRCroppingSprite;

@interface MREffectPictureFrames : MREffect <MZEffectTiming> {
    NSMutableDictionary *mSprites;
    NSMutableDictionary *mFrameProviders;
    MRCroppingSprite *mFrameSprite;
    MRImageProvider *mWallProvider;
    MRImageProvider *mGradientProvider;
    NSMutableArray *mTableProviders;
    NSMutableArray *mWallSprites;
    NSMutableArray *mLayoutWidths;
    double mTotalWidth;
    double mXOffset;
    BOOL mIsLoaded;
    NSMutableArray *mLayouts;
    NSMutableArray *mFrames;
    NSMutableArray *mSlideOrder;
    NSMutableArray *mAspectRatios;
    NSString *mFirstFrame;
    NSString *mLastFrame;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (void)initialize;
+ (BOOL)hasCustomTiming;
+ (id)customTimingWithEffectID:(id)a0 effectAttributes:(id)a1 slideInformation:(id)a2 textInformation:(id)a3 inAspectRatio:(double)a4;

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (double)_startingOffset;
- (id)_populateFrames;
- (void)_applyTimingToSlideProviders;
- (double)_aspectRatioForSlideIndex:(long long)a0;
- (void)_drawBreakFrame:(id)a0 provider:(id)a1 index:(long long)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 time:(double)a4 inContext:(id)a5 withArguments:(id)a6;
- (void)_drawBreakFrameInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameWidth:(double)a1 time:(double)a2 inContext:(id)a3 withArguments:(id)a4;
- (id)_drawFrame:(id)a0 provider:(id)a1 index:(long long)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 time:(double)a4 onTable:(BOOL)a5 inContext:(id)a6 withArguments:(id)a7;
- (double)_durationForEffect;
- (double)_durationForEffect:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameRectFromInfo:(id)a0 onShelf:(BOOL)a1;
- (double)_nextSlideProviderAspectRatioToFitInAspectRatio:(id)a0 providerKeys:(id)a1 slideInformation:(id)a2 index:(long long *)a3 force:(BOOL)a4;
- (id)_randomFrameForAspectRatio:(id)a0 forTable:(BOOL)a1 allowMatte:(BOOL)a2 onlyLoaded:(BOOL)a3 ignoreFrames:(id)a4 randomGenerator:(id)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForFrameID:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onTable:(BOOL)a2 aspectRatio:(double)a3 slideAspectRatio:(double)a4;
- (void)_setSizeScripts:(double)a0;
- (void)_setupLayoutWithSlideInformation:(id)a0;
- (double)_startingWidth;
- (double)_xForSlideAtIndex:(long long)a0 layoutWidth:(double *)a1;
- (double)displayTimeForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForTextAtIndex:(unsigned long long)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (id)layoutsWithSlidesInfo:(id)a0 seed:(unsigned long long)a1 hasShelf:(BOOL)a2;
- (double)lowestDisplayTime;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;
- (double)showDurationForSlideAtIndex:(unsigned long long)a0;
- (double)showTimeForSlideAtIndex:(unsigned long long)a0;

@end
