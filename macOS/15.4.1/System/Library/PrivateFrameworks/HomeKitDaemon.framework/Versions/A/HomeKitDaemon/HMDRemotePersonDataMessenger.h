@class HMFTimer, NSUUID, NSString, HMDHome, HMIHomePersonManager, NSObject, HMIExternalPersonManager;
@protocol OS_dispatch_queue, HMDPersonDataSource;

@interface HMDRemotePersonDataMessenger : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDPersonDataInterface>

@property (weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (retain) HMFTimer *notifyResidentsOfUpdatedDataDebounceTimer;
@property (copy) id /* block */ notifyResidentsOfUpdatedDataDebounceTimerFactory;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMIExternalPersonManager *photosPersonManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)_notifyResidentsOfUpdatedFaceClassificationDependentData;
- (void)_startDebounceTimerToNotifyResidentsOfUpdatedFaceClassificationDependentData;
- (void)configureWithDataSource:(id)a0 home:(id)a1;
- (void)handlePerformCloudPullMessage:(id)a0;
- (void)handleRemovedFaceCropWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleRemovedPersonWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedPerson:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedPersonFaceCrop:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedSettings:(id)a0 mirrorOutputFuture:(id)a1;
- (id)initWithUUID:(id)a0 home:(id)a1 workQueue:(id)a2;

@end
