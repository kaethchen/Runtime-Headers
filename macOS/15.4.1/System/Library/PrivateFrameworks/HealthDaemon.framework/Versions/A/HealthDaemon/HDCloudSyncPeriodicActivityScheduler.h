@class _HKBehavior, NSString, NSObject, HDXPCPeriodicActivity, HDCloudSyncPlatformConfiguration, HDCloudSyncCoordinator;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPeriodicActivityScheduler : NSObject <HDHealthDaemonReadyObserver> {
    HDCloudSyncCoordinator *_coordinator;
    _HKBehavior *_behavior;
    NSObject<OS_dispatch_queue> *_queue;
    HDXPCPeriodicActivity *_userRequestedBackupActivity;
}

@property (retain, nonatomic) HDXPCPeriodicActivity *periodicActivity;
@property (readonly, nonatomic) HDCloudSyncPlatformConfiguration *platformConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)a0;

- (void).cxx_destruct;
- (BOOL)cellularThresholdPassed;
- (void)daemonReady:(id)a0;
- (void)disablePeriodicActivities;
- (id)initWithCoordinator:(id)a0 behavior:(id)a1;
- (long long)periodicActivityErrorCount;
- (void)setupPeriodicActivities;
- (id)syncContextForPeriodicActivity:(id)a0 periodicSyncType:(long long)a1;
- (void)unitTest_performPeriodicSyncWithCompletion:(id /* block */)a0;
- (id)unitTest_periodicActivity;
- (void)unitTest_setPeriodicActivity:(id)a0;
- (void)updatePeriodicActivitesWithResult:(long long)a0 minimumRetryInterval:(double)a1 activityStartDate:(id)a2 error:(id)a3;
- (void)updatePeriodicActivitiesWithSyncSuccess:(BOOL)a0;
- (void)updatePeriodicActivityCriteria;

@end
