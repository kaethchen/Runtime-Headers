@class TRIServerContext, TRITaskQueue, NSObject;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)_registerCellularActivityWithDelay:(double)a0;
- (void)_registerClientTriggeredActivities;
- (void)_registerDeactivationBGST;
- (void)_registerFetchExperimentsActivity;
- (void)_registerHotfixTargetingActivity;
- (void)_registerMaintenanceWorkActivity;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_registerPostUpgradeActivity;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (void)_registerRetryFailuresActivity;
- (void)_scheduleFetchTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)_scheduleMaintenanceTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)_setDelaySeconds:(long long)a0 forXPCActivity:(id)a1 withLabel:(id)a2 replacementCriteria:(id)a3;
- (void)_setJitterForXPCActivity:(id)a0 withLabel:(id)a1 replacementCriteria:(id)a2;
- (void)postponeCellularActivity;
- (void)registerActivities;
- (void)registerSetupAssistantFetchActivity;

@end
