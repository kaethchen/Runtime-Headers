@class NSString;

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate>

@property (copy, nonatomic) NSString *eventName;

+ (id)xpcSchedulerWithEvent:(id)a0;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (void)unscheduleTimer;
- (void)scheduleActivityWithCriteria:(id)a0 activityHandler:(id /* block */)a1;
- (void)scheduleActivityWithCriteria:(id)a0 activityHandler:(id /* block */)a1 performImmediately:(BOOL)a2;
- (void)scheduleTimerForSeconds:(double)a0;
- (void)unscheduleActivity;

@end
