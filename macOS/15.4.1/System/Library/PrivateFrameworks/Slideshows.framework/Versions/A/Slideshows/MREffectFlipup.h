@class NSMutableDictionary, NSArray, MRImageProvider, MRImage;

@interface MREffectFlipup : MREffect <MZEffectTiming> {
    NSMutableDictionary *mSprites;
    NSMutableDictionary *mBreakInformation;
    double mZPositions[6];
    double mXPositions[6];
    BOOL mIsLoaded;
    double mTiming[6];
    MRImageProvider *mGradientProvider;
    MRImage *mTextImage;
    NSArray *mSortDescriptors;
    BOOL mIsFirst;
    BOOL mIsText;
    long long _currentIterationIndex;
    BOOL _textWasUpdatedSinceLastRendering;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (void)initialize;
+ (BOOL)hasCustomTiming;
+ (id)customTimingWithEffectID:(id)a0 effectAttributes:(id)a1 slideInformation:(id)a2 textInformation:(id)a3 inAspectRatio:(double)a4;

- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_applySizeScripts:(double)a0;
- (void)_applyTimingToSlideProviders;
- (double)_aspectRatioForSlideIndex:(long long)a0;
- (double)_durationForEffect:(long long)a0;
- (BOOL)_isMovieForSlideAtIndex:(long long)a0 slideInformation:(id)a1;
- (long long)_iterationForTime:(double)a0;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (double)_movieDurationForSlideAtIndex:(long long)a0 slideInformation:(id)a1;
- (void)_setupForSlideInformation:(id)a0 aspectRatio:(double)a1;
- (double)_startTimeForIteration:(long long)a0;
- (double)displayTimeForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForTextAtIndex:(unsigned long long)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getCurrentCenter:(struct CGPoint { double x0; double x1; } *)a0 scale:(double *)a1 rotation:(double *)a2 isMain:(BOOL *)a3 forElement:(id)a4;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (BOOL)hasMoreSlidesFromTime:(double)a0 backwards:(BOOL)a1 startTime:(double *)a2 duration:(double *)a3;
- (id)initWithEffectID:(id)a0;
- (double)interestingTimeForElement:(id)a0;
- (double)interestingTimeForTime:(double)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (void)loadPositions;
- (double)lowestDisplayTime;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)releaseByEffectLayer:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;
- (double)showDurationForSlideAtIndex:(unsigned long long)a0;
- (double)showTimeForSlideAtIndex:(unsigned long long)a0;

@end
