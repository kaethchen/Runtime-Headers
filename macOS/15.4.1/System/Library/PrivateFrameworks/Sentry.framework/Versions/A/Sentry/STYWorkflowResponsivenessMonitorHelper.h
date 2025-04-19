@class NSArray, WRWorkflowProvider, SignpostSupportSubsystemCategoryAllowlist, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface STYWorkflowResponsivenessMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist *_allowList;
    int _periodLengthSec;
}

@property (retain) WRWorkflowProvider *workflowProvider;
@property (retain) NSArray *workflowEventTrackers;
@property (retain) NSObject<OS_dispatch_queue> *settingsChangedCallbackQueue;
@property (copy) id /* block */ settingsChangedCallback;
@property (retain) NSObject<OS_dispatch_source> *perDayTimer;
@property (retain) NSObject<OS_dispatch_source> *perPeriodTimer;
@property int perDayLogLimit;
@property int perPeriodLogLimit;
@property int periodLengthSec;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)resetState;
- (id)allowList;
- (void)handleInterval:(id)a0;
- (void)handleSignpost:(id)a0;
- (void)updateAllowList;
- (void)handleEmit:(id)a0;
- (void)handleIntervalBegin:(id)a0;
- (void)notifyWhenSettingsChanged:(id)a0 block:(id /* block */)a1;
- (void)resetCounts;
- (void)resetPerDayCounts;
- (void)resetPerPeriodCounts;
- (void)workflowEventCompleted:(id)a0 completedWRTracker:(id)a1;
- (BOOL)workflowIsUnderLimits:(id)a0;

@end
