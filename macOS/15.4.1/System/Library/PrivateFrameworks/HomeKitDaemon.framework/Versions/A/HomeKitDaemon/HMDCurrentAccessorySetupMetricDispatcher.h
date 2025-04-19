@class HMFTimer, NSString, HMDHomePodSetupLatencyLogEvent, NSMutableDictionary, NSUserDefaults;
@protocol HMMLogEventSubmitting, HMDCurrentAccessorySetupMetricDispatcherDataSource;

@interface HMDCurrentAccessorySetupMetricDispatcher : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _allStagesSubmitted;
    id<HMDCurrentAccessorySetupMetricDispatcherDataSource> _dataSource;
    id /* block */ _currentUpTicksFactory;
    id<HMMLogEventSubmitting> _logEventSubmitter;
    id /* block */ _submissionTimerFactory;
    HMDHomePodSetupLatencyLogEvent *_setupLogEvent;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_stageErrorDict;
}

@property (retain) HMFTimer *submissionTimer;
@property (readonly) unsigned long long setupSessionOpenBeginTime;
@property (readonly) unsigned long long setupSessionOpenEndTime;
@property (readonly) unsigned long long setupSessionCloseBeginTime;
@property (readonly) unsigned long long setupSessionCloseEndTime;
@property (readonly) unsigned long long receiveControllerKeyBeginTime;
@property (readonly) unsigned long long receiveControllerKeyEndTime;
@property (readonly) unsigned long long sentUnassociatedMediaAccessoryBeginTime;
@property (readonly) unsigned long long sentUnassociatedMediaAccessoryEndTime;
@property (readonly) unsigned long long pairingIdentityCreationBeginTime;
@property (readonly) unsigned long long pairingIdentityCreationEndTime;
@property (readonly) unsigned long long settingsCreationBeginTime;
@property (readonly) unsigned long long settingsCreationEndTime;
@property (readonly) unsigned long long addAccessoryBeginTime;
@property (readonly) unsigned long long addAccessoryEndTime;
@property (readonly) unsigned long long hh2SentinelZoneFetchBeginTime;
@property (readonly) unsigned long long hh2SentinelZoneFetchEndTime;
@property (readonly) unsigned long long coreDataFirstCloudImportBeginTime;
@property (readonly) unsigned long long coreDataFirstCloudImportEndTime;
@property (readonly) unsigned long long appleAccountSettledBeginTime;
@property (readonly) unsigned long long appleAccountSettledEndTime;
@property (readonly) unsigned long long currentIDSDeviceSettledBeginTime;
@property (readonly) unsigned long long currentIDSDeviceSettledEndTime;
@property (readonly) unsigned long long homeManagerInitBeginTime;
@property (readonly) unsigned long long homeManagerInitEndTime;
@property (readonly) unsigned long long eventRouterServerConnectBeginTime;
@property (readonly) unsigned long long eventRouterServerConnectEndTime;
@property (readonly) unsigned long long firstServerEventSentBeginTime;
@property (readonly) unsigned long long firstServerEventSentEndTime;
@property (readonly) unsigned long long firstPrimaryResidentElectionBeginTime;
@property (readonly) unsigned long long firstPrimaryResidentElectionEndTime;
@property (readonly) unsigned long long firstCurrentDeviceJoinMeshBeginTime;
@property (readonly) unsigned long long siriReadyBeginTime;
@property (readonly) unsigned long long siriReadyEndTime;
@property (readonly) BOOL allStagesSubmitted;
@property (readonly, copy) NSString *setupSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)homepodSetupLogEventFromProtoSetupInfo:(id)a0;
+ (id)readLastAccessorySetupInfo:(id)a0;
+ (id)readSetupLogEventFromUserDefaults:(id)a0;
+ (void)removeLastAccessorySetupInfoFromUserDefaults:(id)a0;
+ (void)saveSetupLogEventIntoUserDefaults:(id)a0 setupLogEvent:(id)a1;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)setControllerSetupSessionIdentifier:(id)a0;
- (void)markPrimaryResidentElectionModernTransportStartedFutureResolved;
- (id)_underlyingErrorByIgnoringCommunicationFailureErrors:(id)a0;
- (id)initWithDataSource:(id)a0 setupLogEvent:(id)a1 logEventSubmitter:(id)a2;
- (id)initWithDataSource:(id)a0 setupLogEvent:(id)a1 logEventSubmitter:(id)a2 currentUpTicksFactory:(id /* block */)a3 submissionTimerFactory:(id /* block */)a4 userDefaults:(id)a5;
- (void)markControllerHH2Mode:(BOOL)a0 controllerHH2SentinelExists:(BOOL)a1;
- (void)markCurrentDeviceConfirmedPrimaryResidentStatusDidChange:(BOOL)a0;
- (void)markEventRouterPrimaryClientConnectMessageFailedWithError:(id)a0;
- (void)markEventRouterPrimaryClientConnectStatusChanged:(BOOL)a0;
- (void)markFirstCoreDataContainerSetupDuration:(double)a0 error:(id)a1;
- (void)markPrimaryResidentElectionFirstCloudKitImportFutureResolved;
- (void)markPrimaryResidentElectionJoinMesh;
- (void)markPrimaryResidentElectionPeerDeviceFutureResolved;
- (void)markPrimaryResidentSelectionConnectedToStatusKitFutureResolved;
- (void)markSetupBeginStage:(unsigned long long)a0 error:(id)a1;
- (void)markSetupEndStage:(unsigned long long)a0 error:(id)a1;
- (void)startFinalSubmissionTimer;

@end
