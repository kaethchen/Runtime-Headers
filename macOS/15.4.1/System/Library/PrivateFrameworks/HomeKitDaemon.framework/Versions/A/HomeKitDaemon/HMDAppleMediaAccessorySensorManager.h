@class HMSetupAccessoryDescription, NSUUID, NSString, NSData, HMFPairingIdentity, NSObject, NSMutableArray;
@protocol HMDAppleMediaAccessorySensorManagerDataSource, HMDAppleMediaAccessorySensorManagerDataStore, HMDHPSManager, OS_dispatch_queue;

@interface HMDAppleMediaAccessorySensorManager : NSObject <HMFMessageReceiver, HMFLogging, HMDLocalAddAccessoryProgressDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_derivedSensorUUID;
    NSData *_derivedHAPAccessoryIdentifierData;
    NSString *_derivedHAPAccessoryIdentifier;
    BOOL _isCurrentlyPairing;
    BOOL _hasAttemptedRecovery;
    BOOL _shouldUseDerivedSensorUUID;
    BOOL _hasPendingRetry;
    BOOL _shouldAttemptToSetServiceNames;
    NSUUID *_sensorAccessoryUUID;
    double _pairingStartTime;
    id<HMDHPSManager> _sensorClient;
    id<HMDAppleMediaAccessorySensorManagerDataSource> _dataSource;
    HMSetupAccessoryDescription *_setupDescription;
    id<HMDAppleMediaAccessorySensorManagerDataStore> _dataStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _pairingRetryCount;
    NSMutableArray *_renamedServiceIDs;
    HMFPairingIdentity *_pairingIdentity;
}

@property (readonly, copy) NSUUID *sensorAccessoryUUID;
@property (readonly, copy, nonatomic) NSUUID *derivedSensorUUID;
@property (readonly, copy, nonatomic) NSString *derivedHAPAccessoryIdentifier;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithWorkQueue:(id)a0;
- (void)fetchADKSensorStatusCompletion:(id /* block */)a0;
- (void)_migrateToDataStoreIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)configureWithDataSource:(id)a0 hpsXPCClient:(id)a1 dataStore:(id)a2;
- (id)derivedHAPAccessoryIdentifierDataForHostUUID:(id)a0;
- (id)derivedSensorUUIDForHostUUID:(id)a0;
- (void)handleAccessoryAdded:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)handleErrorCaseTestMessage:(id)a0;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)localAccessoryAddRequiresConsent:(id)a0;
- (void)managerIsReadyToBePaired;

@end
