@class _PASLock, NSMutableDictionary, NSOperationQueue, CMMotionActivityManager, CMMotionActivity;

@interface ATXMotionManagerWrapper : NSObject {
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
    NSMutableDictionary *_delegatesMonitoringForMotionType;
    CMMotionActivity *_mostRecentActivity;
    _PASLock *_currentMotion;
}

+ (id)sharedInstance;
+ (BOOL)hasMotionActivity;

- (id)init;
- (void).cxx_destruct;
- (id)getCurrentActivity;
- (id)_fetchMotionActivities;
- (id /* block */)_motionActivityHandler;
- (void)startUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (void)stopUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (void)updateCurrentActivity:(id)a0;

@end
