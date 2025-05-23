@class HMDResidentSelectionStatusKit, HMDResidentDevice, HMDHome, HMDAppleAccountManager, NSNotificationCenter, NSString, NSMutableSet, HMDMessageDispatcher, NSArray, HMFOSTransaction, HMDRemoteDeviceMonitor, NSObject, HMDPreferredResidentsList, HMDModernTransportDeviceReachabilityObserver, HMDDevice, HMDResidentSelectionInfo, HMDResidentStatusChannel, HMFPromise, NSUUID, HMDPrimaryElectionCoordinationAddOn, HMDFeaturesDataSource, NSDate, HMFFuture, NSHashTable;
@protocol HMDResidentDeviceManagerDelegate, HMDResidentDeviceManagerRoarBackingStore, OS_os_log, HMDPrimaryResidentDiscoveryManager, OS_dispatch_queue, HMDResidentDeviceManagerRoarDataSource;

@interface HMDResidentDeviceManagerRoar : HMFObject <HMDResidentDeviceManagerContext, HMDPrimaryResidentDiscoveryManagerDelegate, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDPrimaryResidentElectionAddOnDelegate, HMDModernTransportDeviceReachabilityObserverListener, NSSecureCoding, HMDResidentDeviceManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
    HMFOSTransaction *_primaryResidentTransaction;
    NSObject<OS_os_log> *_logger;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDResidentDeviceManagerRoarDataSource> dataSource;
@property (readonly) id<HMDResidentDeviceManagerRoarBackingStore> backingStore;
@property (retain) HMDModernTransportDeviceReachabilityObserver *reachabilityObserver;
@property (retain) HMDRemoteDeviceMonitor *deviceMonitor;
@property (retain) HMDPrimaryElectionCoordinationAddOn *localNetworkElection;
@property (readonly) NSString *logIdentifier;
@property (readonly) id<HMDPrimaryResidentDiscoveryManager> primaryDiscoveryManager;
@property (readonly, nonatomic) NSHashTable *primaryDiscoveryRequesters;
@property (retain) HMFPromise *firstPrimaryResidentDiscoveryAttemptCompletionPromise;
@property (readonly) HMDFeaturesDataSource *featuresDataSource;
@property (weak, nonatomic) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (getter=isActingAsResident) BOOL actingAsResident;
@property (readonly) HMFFuture *firstPrimaryResidentDiscoveryAttemptCompletionFuture;
@property (weak) id<HMDResidentDeviceManagerDelegate> delegate;
@property (readonly) BOOL isResidentSupported;
@property (readonly) BOOL isResidentEnabled;
@property (readonly) BOOL isOwnerUser;
@property (readonly) HMDResidentDevice *currentResidentDevice;
@property (readonly) HMDResidentDevice *primaryResidentDevice;
@property (readonly, copy) NSArray *availableResidentDevices;
@property (readonly) BOOL isCurrentDeviceAvailableResident;
@property (readonly) BOOL residentCapable;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly) HMFFuture *cloudReady;
@property (readonly) long long atHomeLevel;
@property (readonly) HMDResidentStatusChannel *residentStatusChannel;
@property (readonly) BOOL homeSupportsResidentSelection;
@property (readonly) HMDResidentSelectionInfo *residentSelectionInfo;
@property (readonly) HMDResidentSelectionStatusKit *presentResidentsStatuses;
@property (readonly) HMDPreferredResidentsList *electorsPreferredResidentsList;
@property (readonly) NSArray *residentsPresentOnStatusKit;
@property (readonly) unsigned long long ourNetworkConnectionType;
@property (readonly) unsigned long long myLocation;
@property (readonly) double blockPrimaryTakeoverDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *residentDevices;
@property (readonly, nonatomic, getter=isResidentAvailable) BOOL residentAvailable;
@property (readonly, nonatomic) BOOL hasAnyResident;
@property (readonly, nonatomic, getter=isCurrentDeviceAvailableResident) BOOL currentDeviceAvailableResident;
@property (readonly, nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) BOOL currentDeviceConfirmedPrimaryResident;
@property (readonly, nonatomic) HMDDevice *confirmedPrimaryResidentDevice;
@property (readonly, nonatomic) BOOL isResidentElectionV2Enabled;
@property (readonly, nonatomic) BOOL hasTrustZoneCapableResident;
@property (readonly) NSUUID *primaryResidentUUID;
@property (readonly) NSUUID *primaryResidentGenerationID;
@property (readonly) BOOL hasActivePrimaryResidentTransaction;
@property (readonly) NSDate *primaryResidentSelectionTimestamp;
@property (readonly) HMDResidentDevice *userSelectedPreferredResident;
@property (readonly) NSArray *autoSelectedPreferredResidents;
@property (readonly) unsigned long long residentSelectionMode;
@property (nonatomic, getter=isResidentSupported) BOOL residentSupported;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)shortDescription;
- (void)_registerForNotifications;
- (id)initWithDataSource:(id)a0;
- (void)addDataSource:(id)a0;
- (void)_run;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)dumpState;
- (void)_handleRemoteDeviceIsReachable:(id)a0;
- (void)modernTransportDeviceReachabilityObserverDidUpdate:(id)a0 isReachable:(BOOL)a1;
- (id)ourSelf;
- (void)_addResidentDevice:(id)a0;
- (void)_checkPrimaryResidentDeviceRemoved:(id)a0 currentPrimary:(id)a1;
- (void)_configureResidentSupported;
- (void)_discoverPrimaryResidentForRequester:(id)a0;
- (void)_handleCloudResidentChange:(id)a0;
- (void)_handleCloudZoneReadyNotification:(id)a0;
- (void)_handlePrimaryResident:(id)a0 isReachable:(BOOL)a1;
- (void)_handlePrimaryResidentDiscoveryRequest:(id)a0;
- (void)_handlePrimaryResidentDiscoveryXPCRequest:(id)a0;
- (void)_handleReachabilityAfterPrimaryResidentChangedTo:(id)a0 previousPrimaryResident:(id)a1;
- (void)_handleRemoteDeviceIsNotReachable:(id)a0;
- (void)_handleResidentDeviceUpdateEnabled:(id)a0;
- (void)_handleResidentSelectionVersionDidChange:(id)a0;
- (void)_handleUpdatedPrimaryFromLeader:(id)a0;
- (void)_handleUpdatedPrimaryResidentDevice:(id)a0 previousPrimaryResident:(id)a1 generationID:(id)a2 changeSource:(unsigned long long)a3;
- (void)_joinLocalMesh;
- (void)_notifyUpdatedGenerationIDWithPrimaryResident:(id)a0;
- (void)_registerForMessages;
- (void)_removeResidentDevice:(id)a0;
- (void)_sendResidentDeviceNotificationWithName:(id)a0 forResidentDevice:(id)a1;
- (void)_setResident:(id)a0 reachableOverIDS:(BOOL)a1 andNotify:(BOOL)a2;
- (void)_setupSessionWithPrimaryResidentDevice;
- (void)_startLocalNetworkElection;
- (void)_stopLocalNetworkElection;
- (void)_teardownSessionWithPrimaryResidentDevice;
- (BOOL)_updatePrimaryResidentGenerationID:(id)a0;
- (void)_updatePrimaryResidentTransactionWithPrimaryResidentDevice:(id)a0;
- (void)_updateReachability:(BOOL)a0 forResidentDevice:(id)a1;
- (void)_updateReachability:(BOOL)a0 forResidentDevices:(id)a1;
- (void)_updateReachabilityFromWorkingStoreExceptResident:(id)a0;
- (void)_updateResidentAvailability:(BOOL)a0;
- (void)_updateResidentIDSReachability:(BOOL)a0 withUpdatedDevice:(id)a1;
- (void)_updateResidentReachabilityWithResidents:(id)a0;
- (void)accountOrDeviceDidUpdate:(id)a0;
- (BOOL)allowExternalUpdateOfPrimaryResidentTo:(id)a0;
- (void)atHomeLevelChanged:(long long)a0;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)confirmAsResident;
- (void)confirmOnAvailability;
- (void)confirmWithCompletionHandler:(id /* block */)a0;
- (void)discoverPrimaryResidentForRequester:(id)a0;
- (void)discoveryManager:(id)a0 didCompleteDiscoveryWithPrimaryResidentDevice:(id)a1 primaryResidentGenerationID:(id)a2 error:(id)a3;
- (void)discoveryManager:(id)a0 didCompleteInitialDiscoveryAttemptWithError:(id)a1;
- (void)discoveryManager:(id)a0 didNotCompleteDiscoveryWithError:(id)a1;
- (void)electResidentDevice:(unsigned long long)a0;
- (id)foundNewPrimaryResident:(id)a0 generationID:(id)a1 selectionTimestamp:(id)a2 changeSource:(unsigned long long)a3;
- (void)handleCurrentDeviceChanged:(id)a0;
- (void)handlePrimaryResidentDiscovered:(id)a0 primaryResidentGenerationID:(id)a1;
- (id)localPreferredResidentList;
- (void)notifyClientsOfUpdatedResidentDevice:(id)a0;
- (void)notifyResidentAvailable:(BOOL)a0;
- (void)notifyUpdatedPrimaryResident:(id)a0 previousPrimaryResident:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didElectPrimaryResident:(id)a1 confirmed:(BOOL)a2 electionLogEvent:(id)a3;
- (void)primaryElectionAddOn:(id)a0 didFailToElectWithError:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didReceivePrimaryResidentUUIDFromLeader:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didUpdateActiveNodes:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didUpdateResidentDevice:(id)a1;
- (void)removeResidentDevice:(id)a0;
- (id)residentDeviceForDevice:(id)a0;
- (id)residentDeviceWithIDSIdentifier:(id)a0;
- (id)residentDevicesSet;
- (id)residentDevicesWithIDSIdentifiers:(id)a0;
- (id)residentWithUUID:(id)a0;
- (void)sawGenerationID:(id)a0 forDevice:(id)a1;
- (void)setResidentAvailable:(BOOL)a0;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updatePrimaryResidentWithUUID:(id)a0 actions:(id)a1;
- (void)updateResidentAvailability;

@end
