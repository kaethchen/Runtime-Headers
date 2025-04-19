@class NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMDThreadRadioClient;

@interface HMDThreadResidentCommissioner : HMFObject <HMFLogging, HMDThreadResidentCommissioner> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _threadOperationsLock;
    NSMutableArray *_pendingOperations;
    BOOL _operationInProgress;
}

@property (class, readonly, nonatomic) HMDThreadResidentCommissioner *sharedCommissioner;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDThreadRadioClient> threadRadioClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initInternal;
- (BOOL)_overrideThreadOperationTimeout;
- (void)registerForThreadNetworkEvents:(id)a0;
- (void)_addToPendingOperations:(id)a0;
- (void)_connectToThreadAccessoryWithExtendedMACAddress:(id)a0 completion:(id /* block */)a1;
- (void)_executePendingThreadOperation;
- (id)_getAllPendingOperations;
- (id)_getThreadOperationSequenceNumber;
- (void)_informThreadLayerOfResidentChange:(BOOL)a0 primaryResidentIsThreadCapable:(BOOL)a1;
- (unsigned long long)_numPendingOperations;
- (void)_scheduleThreadOperation:(id)a0;
- (void)_setThreadOperationInProgress:(BOOL)a0;
- (void)_startThreadAccessoryFirmwareUpdateWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)_startThreadAccessoryPairingWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)_startThreadNetworkWithID:(id)a0 completion:(id /* block */)a1;
- (void)_startThreadNetworkWithOperationalDataset:(id)a0 threadNetworkID:(id)a1 isOwnerUser:(BOOL)a2 completion:(id /* block */)a3;
- (void)_stopThreadAccessoryFirmwareUpdateWithCompletion:(id /* block */)a0;
- (void)_stopThreadAccessoryPairingWithCompletion:(id /* block */)a0;
- (void)_stopThreadNetworkOnNonResidentWithCompletion:(id /* block */)a0;
- (void)_stopThreadNetworkWithCompletion:(id /* block */)a0;
- (void)connectToThreadAccessoryWithExtendedMACAddress:(id)a0 completion:(id /* block */)a1;
- (void)dispatchBlock:(id /* block */)a0;
- (void)informThreadLayerOfResidentChange:(BOOL)a0 primaryResidentIsThreadCapable:(BOOL)a1;
- (id)initWithThreadRadioClient:(id)a0;
- (BOOL)isFeatureMatteriPhoneOnlyPairingControlForThreadEnabled;
- (void)setGeoAvailable:(BOOL)a0;
- (void)startThreadAccessoryFirmwareUpdateWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)startThreadAccessoryPairingWithExtendedMACAddress:(id)a0 isWedDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)startThreadNetworkWithID:(id)a0 completion:(id /* block */)a1;
- (void)startThreadNetworkWithOperationalDataset:(id)a0 threadNetworkID:(id)a1 isOwnerUser:(BOOL)a2 completion:(id /* block */)a3;
- (void)stopThreadAccessoryFirmwareUpdateWithCompletion:(id /* block */)a0;
- (void)stopThreadAccessoryPairingWithCompletion:(id /* block */)a0;
- (void)stopThreadNetworkOnDeviceLockWithCompletion:(id /* block */)a0;
- (void)stopThreadNetworkWithCompletion:(id /* block */)a0;
- (void)unregisterForThreadNetworkEvents:(id)a0;

@end
