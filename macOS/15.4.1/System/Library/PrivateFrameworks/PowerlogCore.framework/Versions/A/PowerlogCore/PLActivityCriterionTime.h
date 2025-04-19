@class PLMonotonicTimer;

@interface PLActivityCriterionTime : PLActivityCriterion

@property double interval;
@property (nonatomic) double rescheduleDelay;
@property (retain) PLMonotonicTimer *timer;

+ (double)minTimeInterval;
+ (id)timeCriterionWithInterval:(double)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)didCompleteActivity:(id)a0;
- (void)didDisableActivity:(id)a0;
- (void)didEnableActivity:(id)a0;
- (void)didInterruptActivity:(id)a0;
- (id)initWithInterval:(double)a0;

@end
