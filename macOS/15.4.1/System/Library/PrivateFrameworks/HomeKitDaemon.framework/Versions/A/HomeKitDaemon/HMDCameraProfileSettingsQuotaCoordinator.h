@class HMDHAPAccessory, NSString, NSOperationQueue, NSObject, HMDCameraClipsQuotaManager;
@protocol OS_dispatch_queue, HMDCameraProfileSettingsQuotaCoordinatorDelegate;

@interface HMDCameraProfileSettingsQuotaCoordinator : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDCameraClipsQuotaManager *quotaManager;
@property (readonly) NSOperationQueue *operationQueue;
@property (weak) HMDHAPAccessory *accessory;
@property (weak) id<HMDCameraProfileSettingsQuotaCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)clientErrorFromCanUpdateAccessModeError:(id)a0;

- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)_requiresDisablingCloudStorageForAccessMode:(unsigned long long)a0 cameraHomePresence:(unsigned long long)a1;
- (void)_synchronizeCloudStorageWithRecordingAccessModesWithCompletion:(id /* block */)a0;
- (void)_disableRecordingAccessModesWithCompletion:(id /* block */)a0;
- (void)_performOperationWithBlock:(id /* block */)a0;
- (BOOL)_requiresEnablingCloudStorageForAccessMode:(unsigned long long)a0;
- (void)_synchronizeCloudStorageWithCurrentCamerasWithCompletion:(id /* block */)a0;
- (void)_updateCloudStorageAndSettingsWithAccessMode:(unsigned long long)a0 forCameraHomePresence:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)cameraClipsZoneName;
- (void)disableRecordingAccessModes;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1 quotaManager:(id)a2;
- (void)synchronizeCloudStorageWithRecordingAccessModes;
- (void)updateCloudStorageAndSettingsWithAccessMode:(unsigned long long)a0 forCameraHomePresence:(unsigned long long)a1 completion:(id /* block */)a2;

@end
