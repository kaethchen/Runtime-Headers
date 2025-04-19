@class NSDate, RTMotionActivity, RTVisitPipelineMotionAccumulatorParams;

@interface RTVisitPipelineMotionAccumulator : NSObject {
    BOOL _foundIntervalToTrim;
    NSDate *_intervalStartDate;
    double _runningScoreHighConfidence;
    double _runningScoreMediumConfidence;
    RTMotionActivity *_lastObservedMotionActivity;
}

@property (readonly, nonatomic) RTVisitPipelineMotionAccumulatorParams *params;
@property (readonly, nonatomic) BOOL processActivitiesReverse;

+ (BOOL)isActivityTypeMotionTrimmable:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)finishMotionObservations:(id)a0;
- (id)getTrimDate;
- (id)initWithParams:(id)a0 processInReverse:(BOOL)a1;
- (void)processMotionActivity:(id)a0;

@end
