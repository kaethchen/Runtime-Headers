@class NSUUID, HMDResidentMeshMeshStorage, HMFTimer, HMDHomeManager, NSSet, NSMutableDictionary, NSString, NSObject, NSMutableArray, HMDMessageDispatcher, NSMutableSet;
@protocol OS_dispatch_queue;

@interface HMDResidentMesh : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate>

@property (readonly, copy) NSUUID *uuid;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (weak, nonatomic) HMDMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) NSMutableArray *residents;
@property (weak, nonatomic) HMDResidentMeshMeshStorage *resident;
@property (retain, nonatomic) NSMutableArray *reachableAccessories;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFTimer *devicesChangedTimer;
@property (retain, nonatomic) NSSet *primaryResidentForHomes;
@property (readonly, nonatomic) NSMutableDictionary *loadMetrics;
@property (retain, nonatomic) NSMutableSet *updatedOrAddedDevices;
@property (readonly, copy) NSString *stateDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)messageDestination;
- (void)__deviceIsNotReachable:(id)a0;
- (void)__deviceIsReachable:(id)a0;
- (void)__deviceResidentChanged:(id)a0;
- (void)__rebuildResidents:(id)a0;
- (void)__residentDeviceAddedOrUpdatedNotification:(id)a0;
- (void)__residentDeviceRemovedNotification:(id)a0;
- (id)_addMeshStorageResidentDevice:(id)a0;
- (id)_addResidentStorageResidentDevice:(id)a0;
- (void)_buildResidentsWithElection:(id)a0 device:(id)a1;
- (void)_deviceIsNotReachable:(id)a0;
- (void)_handleAddUpdateOrReachabilityChangeForDevice:(id)a0;
- (void)_handleMeshUpdateMessage:(id)a0;
- (void)_handleMeshUpdateRequestMessage:(id)a0;
- (void)_handlePrimaryResidentChangedNotification:(id)a0;
- (id)_meshStorageForDeviceIdentifier:(id)a0;
- (id)_meshStorageForResidentDevice:(id)a0;
- (id)_residentStorageForResidentDevice:(id)a0;
- (void)_sendMessage:(id)a0 payload:(id)a1 target:(id)a2 force:(BOOL)a3 responseHandler:(id /* block */)a4;
- (id)_stateDump;
- (void)_transmitCurrentDeviceMetricsToPrimaryResidentWithIsUrgent:(BOOL)a0;
- (id)cameraRecordingAnalysisNodesForCameraAccessory:(id)a0;
- (id)initWithHomeManager:(id)a0 residentEnabled:(BOOL)a1;
- (void)setMetricForCurrentDevice:(id)a0 withValue:(id)a1 isUrgent:(BOOL)a2;

@end
