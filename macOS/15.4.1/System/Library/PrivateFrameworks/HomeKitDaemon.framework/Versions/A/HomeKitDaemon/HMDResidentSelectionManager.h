@class HMDPreferredResidentsList, NSString, NSBackgroundActivityScheduler, HMDIDSServerBag, NSUUID, HMDResidentSelectionInfo, NSObject;
@protocol HMDResidentSelectionMode, HMDResidentSelectionManagerDelegate, HMDResidentDeviceManagerContext, OS_dispatch_queue, HMDResidentSelectionManagerDataSource;

@interface HMDResidentSelectionManager : NSObject <HMDResidentSelectionModeDelegate, HMFMessageReceiver, HMDResidentSelectionManager, HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<HMDResidentSelectionManagerDataSource> dataSource;
@property (readonly, weak) id<HMDResidentDeviceManagerContext> context;
@property unsigned long long currentModeType;
@property (retain) id<HMDResidentSelectionMode> currentResidentSelectionMode;
@property (retain) HMDResidentSelectionInfo *residentSelectionInfoFromWorkingStore;
@property (retain) NSBackgroundActivityScheduler *backgroundScheduler;
@property (readonly, weak) HMDIDSServerBag *idsServerBag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (weak) id<HMDResidentSelectionManagerDelegate> delegate;
@property (readonly) HMDPreferredResidentsList *localPreferredResidentsList;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (id)shortDescription;
- (id)notificationCenter;
- (id)logIdentifier;
- (id)dumpState;
- (void)primarySelectionMode:(id)a0 didUpdateResidentSelectionInfo:(id)a1 completion:(id /* block */)a2;
- (void)_handleModeChangeWithPreviousMode:(unsigned long long)a0;
- (id)_idsIdentifierForResidentDeviceWithIdentifier:(id)a0;
- (void)_processSelectedAsPreferredMessage:(id)a0;
- (void)_registerForMessages;
- (void)_removeScheduledAutoModeEvaluation;
- (void)_scheduleAutoModeEvaluationWithRetryNeeded:(BOOL)a0;
- (BOOL)allowExternalUpdateOfPrimaryResidentTo:(id)a0 selectionTimestamp:(id)a1;
- (id)createResidentSelectionModeWithType:(unsigned long long)a0;
- (void)currentDeviceReadyAsAResident;
- (BOOL)devicesInHomeSupportResidentSelection;
- (void)didAddResidentsToHome:(id)a0;
- (void)didRemoveResidentsFromHome:(id)a0;
- (void)didUpdateResidentSelectionModelTo:(id)a0;
- (void)didUpdateResidentSelectionVersion;
- (void)didUpdateResidentStatus:(id)a0 residentsFound:(id)a1 residentsLost:(id)a2;
- (void)evaluateSelectionMode;
- (void)handleSelectedAsPreferredMessage:(id)a0;
- (id)initWithContext:(id)a0 dataSource:(id)a1;
- (id)locallyReachableResidents;
- (void)makeSureCurrentModeIsOfType:(unsigned long long)a0;
- (unsigned long long)messageTransportRestriction;
- (id)minimumHomeKitVersionForResidentSelection;
- (void)performSelectionInMode:(unsigned long long)a0 preferredPrimaryResident:(id)a1 requireAutoUpdate:(BOOL)a2 reason:(unsigned long long)a3 completion:(id /* block */)a4;
- (double)preferredResidentEvaluationDelay;
- (unsigned long long)primaryChangedReason;
- (void)primaryResidentChanged:(id)a0 previousResidentDevice:(id)a1;
- (void)primarySelectionMode:(id)a0 didFailToSelectWithError:(id)a1;
- (void)primarySelectionMode:(id)a0 didReceivePrimaryResidentIdsIdentifier:(id)a1 selectionTimestamp:(id)a2;
- (void)primarySelectionMode:(id)a0 didSelectPrimaryResident:(id)a1 selectionInfo:(id)a2 selectionLogEvent:(id)a3 completion:(id /* block */)a4;
- (void)primarySelectionMode:(id)a0 didUpdateActiveNodes:(id)a1;
- (void)primarySelectionMode:(id)a0 didUpdatePreferredResidentsList:(id)a1;
- (void)primarySelectionMode:(id)a0 didUpdateResidentDevice:(id)a1;
- (void)primarySelectionMode:(id)a0 reassertAsCurrentPrimaryWithSelectionTimestamp:(id)a1;
- (void)primarySelectionModeReadyAsResident:(id)a0;
- (BOOL)residentIsLocallyReachable:(id)a0;
- (BOOL)residentIsPresentInCurrentAccount:(id)a0;
- (id)residentWithIdentifier:(id)a0;
- (id)residentsNotPresentInPreferredResidentsList:(id)a0;
- (void)triggerAutoModeEvaluationWithCompletion:(id /* block */)a0;
- (BOOL)weAreInResidentSelection;
- (BOOL)weAreTheOnlyActingResident;

@end
