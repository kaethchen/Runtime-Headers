@class MREffectCoverCascadeSlideStory, NSMutableArray;

@interface MREffectCoverCascade : MREffect <MZEffectTiming> {
    NSMutableArray *_slideStories;
    MREffectCoverCascadeSlideStory *_grid[7][4];
    struct _NSRange { unsigned long long location; unsigned long long length; } _previousNewSlideRange;
    unsigned long long _numberOfStoriesRemoved;
    double _previousStartTime;
    unsigned char _previousScenarioType;
    unsigned char _previousStartX;
    unsigned char _currentComplexityLevel;
    BOOL _previousWasCombo;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (BOOL)hasCustomTiming;
+ (id)customTimingWithEffectID:(id)a0 effectAttributes:(id)a1 slideInformation:(id)a2 textInformation:(id)a3 inAspectRatio:(double)a4;
+ (BOOL)supportsDynamicExpansionForEffectID:(id)a0;
+ (unsigned long long)typicalSlideBatchSizeForEffectID:(id)a0;

- (void)_cleanup;
- (void)_unload;
- (void)_applyTimingToSlideProviders;
- (double)_buildNumberOfSlideStories:(unsigned long long)a0 withSlideRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)appendSlideInformation:(id)a0 andTextInformation:(id)a1;
- (double)displayTimeForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForTextAtIndex:(unsigned long long)a0;
- (unsigned long long)firstSlideIndexStillNeededAtTime:(double)a0;
- (double)lowestDisplayTime;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setMultiImageSlideRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;
- (double)showDurationForSlideAtIndex:(unsigned long long)a0;
- (double)showTimeForSlideAtIndex:(unsigned long long)a0;
- (BOOL)supportsDynamicExpansion;
- (long long)typicalSlideBatchSize;

@end
