@class SignpostAggregation, SSCAMLDurationStats, NSString, NSDate, SSCAMetalLayerFrameStats;

@interface SSCAMetalLayerStats : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (retain, nonatomic) SignpostAggregation *presentedFrameStatsAggregation;
@property (retain, nonatomic) SignpostAggregation *skippedFrameStatsAggregation;
@property (retain, nonatomic) SignpostAggregation *lateClientPresentStatsAggregation;
@property (retain, nonatomic) SignpostAggregation *latePresentOnGlassStatsAggregation;
@property (nonatomic) unsigned long long startMachContinuousTime;
@property (nonatomic) unsigned long long endMachContinuousTime;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) unsigned long long intervalCount;
@property (readonly, nonatomic) double totalDurationSeconds;
@property (readonly, nonatomic) double activeSeconds;
@property (readonly, nonatomic) SSCAMetalLayerFrameStats *presentedFrameStats;
@property (readonly, nonatomic) SSCAMetalLayerFrameStats *skippedFrameStats;
@property (readonly, nonatomic) SSCAMLDurationStats *frameOnGlassIntervalStats;
@property (readonly, nonatomic) SSCAMLDurationStats *lateClientPresentStats;
@property (readonly, nonatomic) SSCAMLDurationStats *lateOnGlassPresentStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)totalStatsFromStatsArray:(id)a0 errorOut:(id *)a1;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (float)durationSeconds;
- (double)startMs;
- (id)_accumulateNewAggregations:(id)a0 skippedFrameStatsAggregation:(id)a1 lateClientPresentStatsAggregation:(id)a2 latePresentOnGlassStatsAggregation:(id)a3 intervalBeginMCT:(unsigned long long)a4 intervalEndMCT:(unsigned long long)a5 intervalBeginDate:(id)a6 intervalEndDate:(id)a7;
- (void)_dropOverallIntervals;
- (id)_initEmpty:(double)a0;
- (void)_updateStatsWithPresentedFrameStatsAggregation:(id)a0 skippedAggregation:(id)a1 lateClientPresentAggregation:(id)a2 lateOnGlassPresentAggregation:(id)a3;
- (id)accumulateFinishedInFlightStats:(id)a0;
- (id)accumulateNewStats:(id)a0;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (BOOL)includeTimelines;
- (id)initWithInFlightStats:(id)a0;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;

@end
