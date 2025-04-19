@class MRImageProvider, NSMutableDictionary, NSString;

@interface MREffectHangingPictures : MREffect <MZEffectTiming> {
    MRImageProvider *mRopeImageProvider;
    MRImageProvider *mPhotoFrameImageProviders[4];
    NSMutableDictionary *mSprites;
    NSMutableDictionary *mMatrices;
    NSString *mCurrentMainSlideKey;
    unsigned long long mCountOfSlides;
    double mBaseStillDuration;
    struct { double startTime; double mainStartTime; double displayTime; double mainEndTime; double endTime; unsigned long long countOfSegments; } mSlideTimings[10];
    BOOL mScenario[9];
    unsigned char mNumberOfRopes;
    unsigned short mFrameIndices;
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
- (void)_applyTimingToSlideProviders;
- (double)_buildScenarioWithCountOfSlides:(unsigned long long)a0 aspectRatios:(double *)a1;
- (double)_updateSlideTimings;
- (double)displayTimeForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForTextAtIndex:(unsigned long long)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (double)lowestDisplayTime;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;
- (double)showDurationForSlideAtIndex:(unsigned long long)a0;
- (double)showTimeForSlideAtIndex:(unsigned long long)a0;

@end
