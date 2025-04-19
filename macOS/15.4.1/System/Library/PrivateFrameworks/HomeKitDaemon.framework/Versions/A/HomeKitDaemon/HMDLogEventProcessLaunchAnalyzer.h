@class HMFTimer, HMDHomeManager, NSString, NSDate, HMDMetricsPreferencesDebugManager, HMDEventCountersManager, NSUserDefaults;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventProcessLaunchAnalyzer : HMDLogEventAnalyzer <HMFTimerDelegate, HMDAggregationAnalysisEventContributing> {
    long long _launchInfoSubmissionState;
    NSDate *_processLaunchTime;
    NSString *_processExitType;
    NSString *_processExitReason;
    long long _numUncommittedRecords;
    long long _numUncommittedAndPushedRecords;
    NSString *_dataSyncStateAsString;
    double _timeIntervalSincePreviousProcessLaunch;
    double _launchTime;
    long long _xpcMessageTransportReadyMilliseconds;
    long long _homeDataLoadedMilliseconds;
    long long _accountResolvedMilliseconds;
    long long _millisecondsSinceLaunchToDataSyncStateGood;
    BOOL _configurationLoaded;
    BOOL _processLaunchInfoEventSubmitted;
}

@property (weak) HMDHomeManager *homeManager;
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) HMFTimer *submitProcessLaunchInfoTimer;
@property (readonly, weak, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) HMDMetricsPreferencesDebugManager *preferencesDebugManager;
@property (readonly, nonatomic) id /* block */ lastExitContextBlock;
@property (readonly, nonatomic) double processRelaunchEventTimeIntervalThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)updateProcessLaunchInfoFromDisk;
- (BOOL)isIdleExitJetsamForExitContext:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)handleAccountResolvedEvent:(id)a0;
- (void)handleArchiveReplayLogEvent:(id)a0;
- (void)handleDataSyncStateUpdateLogEvent:(id)a0;
- (void)handleExitContextForHomed:(id)a0 firstLaunchAfterBoot:(BOOL)a1;
- (void)handleProcessLaunchLogEvent:(id)a0;
- (void)handleXPCMessageTransportStartedEvent:(id)a0;
- (void)homeKitConfigurationChangedWithHomeManager:(id)a0;
- (id)initWithProcessLaunchInfoTimer:(id)a0 dataSource:(id)a1 preferencesDebugManager:(id)a2;
- (id)initWithProcessLaunchInfoTimer:(id)a0 dataSource:(id)a1 preferencesDebugManager:(id)a2 lastExitContextBlock:(id /* block */)a3;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)submitMigrationLogEvent;
- (void)submitProcessLaunchEventWithCurrentAnalysis;
- (void)submitProcessLaunchInfoEventPendingAllConditions;

@end
