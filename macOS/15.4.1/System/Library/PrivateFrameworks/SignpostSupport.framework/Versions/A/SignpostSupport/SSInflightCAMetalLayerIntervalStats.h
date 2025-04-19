@class SSCAMetalLayerSession, SignpostAggregation, NSDate;

@interface SSInflightCAMetalLayerIntervalStats : NSObject

@property (readonly, weak, nonatomic) SSCAMetalLayerSession *parentSession;
@property (readonly, nonatomic) unsigned long long intervalBeginMCT;
@property (readonly, nonatomic) unsigned long long intervalEndMCT;
@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) NSDate *intervalBeginDate;
@property (readonly, nonatomic) NSDate *intervalEndDate;
@property (retain, nonatomic) SignpostAggregation *presentedFrameStatsAggregation;
@property (retain, nonatomic) SignpostAggregation *skippedFrameStatsAggregation;
@property (retain, nonatomic) SignpostAggregation *lateClientPresentStatsAggregation;
@property (retain, nonatomic) SignpostAggregation *latePresentOnGlassStatsAggregation;

+ (BOOL)isInterestingAggregationSubsystem:(id)a0 category:(id)a1 name:(id)a2;

- (void).cxx_destruct;
- (id)_checkCollision:(id)a0 existing:(id)a1 label:(id)a2;
- (id)_checkSkippedFramesAggregation:(id)a0;
- (void)_checkAggregation:(id)a0 forGroupName:(id)a1 withMeasuredValues:(id)a2 label:(id)a3 accumulatedErrors:(id)a4;
- (void)_checkFrameStatsAggregation:(id)a0 existing:(id)a1 label:(id)a2 accumulatedErrors:(id)a3;
- (id)_checkLatenessAggregation:(id)a0 existing:(id)a1 groupName:(id)a2 label:(id)a3;
- (id)_checkPresentedFramesAggregation:(id)a0;
- (id)_ingestLateClientPresentAggregation:(id)a0;
- (id)_ingestLatePresentOnGlassAggregation:(id)a0;
- (id)_ingestPresentedFramesAggregation:(id)a0;
- (id)_ingestSkippedFramesAggregation:(id)a0;
- (id)_missingGroupError:(id)a0 label:(id)a1;
- (id)_missingGroupMeasuredValueError:(id)a0 groupName:(id)a1 label:(id)a2;
- (id)ingestAggregation:(id)a0 isFinalizedOut:(BOOL *)a1;
- (id)initWithAggregation:(id)a0 parentSession:(id)a1 timebaseRatio:(double)a2 errorOut:(id *)a3;

@end
