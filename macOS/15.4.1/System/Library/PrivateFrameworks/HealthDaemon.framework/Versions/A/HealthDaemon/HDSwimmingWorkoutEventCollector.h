@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {
    NSDate *_currentSegmentStartDate;
    NSDate *_prevSegmentEndDate;
    NSObject<OS_dispatch_queue> *_workoutEventQueue;
    BOOL _shouldUpdateSegmentStartDate;
}

+ (BOOL)isAvailableInCurrentHardware;
+ (BOOL)supportsWorkoutActivityType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)stop;
- (void)fakeActivityDetection:(id)a0 workoutActivity:(id)a1;
- (id)initWithProfile:(id)a0 delegate:(id)a1;
- (void)requestPendingEventsThroughDate:(id)a0 completion:(id /* block */)a1;
- (void)startWithSessionId:(id)a0;
- (void)unitTest_setCMWorkoutManager:(id)a0;

@end
