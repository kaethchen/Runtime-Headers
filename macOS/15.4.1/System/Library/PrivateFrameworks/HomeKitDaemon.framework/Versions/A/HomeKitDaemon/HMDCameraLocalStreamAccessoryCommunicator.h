@class NSObject, HMDService, NSString, HMDCameraStreamSessionID, HMDHAPAccessory;
@protocol OS_dispatch_queue;

@interface HMDCameraLocalStreamAccessoryCommunicator : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDCameraStreamSessionID *sessionID;
@property (weak) HMDHAPAccessory *accessory;
@property (readonly) HMDService *streamManagementService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_handleReadSupportedConfigurationsResponses:(id)a0 completion:(id /* block */)a1;
- (void)_handleSelectedStreamConfigurationWriteResponses:(id)a0 completion:(id /* block */)a1;
- (void)_handleSetupEndPointReadResponses:(id)a0 completion:(id /* block */)a1;
- (void)_handleSetupEndPointWriteResponses:(id)a0 completion:(id /* block */)a1;
- (void)_writeSelectedStreamConfigurationData:(id)a0 completion:(id /* block */)a1;
- (id)initWithWorkQueue:(id)a0 sessionID:(id)a1 accessory:(id)a2 streamManagementService:(id)a3;
- (void)readSetupEndPointWithCompletion:(id /* block */)a0;
- (void)readSupportedConfigurationsWithCompletion:(id /* block */)a0;
- (void)writeReselectedStreamConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)writeSelectedStreamConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)writeSetupEndPoint:(id)a0 completion:(id /* block */)a1;

@end
