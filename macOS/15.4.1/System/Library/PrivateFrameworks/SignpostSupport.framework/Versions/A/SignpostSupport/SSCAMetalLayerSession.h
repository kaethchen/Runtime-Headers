@class NSDate, SSOnGlassCAMetalDrawableStats, SSCAMetalLayerStats, SSInflightCAMetalLayerIntervalStats, NSArray, NSMutableArray, NSString;

@interface SSCAMetalLayerSession : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (readonly, nonatomic) double timebaseRatio;
@property (retain, nonatomic) SSInflightCAMetalLayerIntervalStats *inFlightStats;
@property (readonly, nonatomic) NSMutableArray *mutableStatsTimeline;
@property (readonly, nonatomic) NSMutableArray *mutableConfigurationTimeline;
@property (retain, nonatomic) NSMutableArray *mutableOnGlassDrawableIntervalTimeline;
@property (retain, nonatomic) SSOnGlassCAMetalDrawableStats *cachedStats;
@property (readonly, nonatomic) unsigned long long layerID;
@property (readonly, nonatomic) SSCAMetalLayerStats *totalSessionStats;
@property (readonly, nonatomic) NSArray *statsTimeline;
@property (readonly, nonatomic) SSOnGlassCAMetalDrawableStats *onGlassDrawableIntervalStats;
@property (readonly, nonatomic) NSArray *onGlassDrawableIntervalTimeline;
@property (readonly, nonatomic) NSArray *configurationTimeline;
@property (readonly, nonatomic) BOOL includeTimelines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (id)_ingestOnGlassDrawableInterval:(id)a0;
- (float)durationSeconds;
- (double)startMs;
- (id)_dictionaryRepresentation:(BOOL)a0;
- (id)_ingestAggregation:(id)a0 timebaseRatio:(double)a1 parentClientSession:(id)a2 parentAccumulator:(id)a3;
- (id)_ingestConfigurationInterval:(id)a0;
- (id)_sessionFromFilteredResults:(id)a0 configurationTimeline:(id)a1 errorOut:(id *)a2;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)durationNanoseconds;
- (unsigned long long)endMachContinuousTime;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithID:(unsigned long long)a0 includeTimelines:(BOOL)a1 timebaseRatio:(double)a2;
- (id)layerSessionFilteredToStartDate:(id)a0 endDate:(id)a1 errorOut:(id *)a2;
- (id)layerSessionFilteredToStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 errorOut:(id *)a2;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;

@end
