@class HMFMessageDispatcher, NSString, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraClipsQuotaMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (copy) id /* block */ quotaManagerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (void)handleFetchNamesForZonesWithEnabledCloudStorageMessage:(id)a0;
- (void)handleUpdateCloudStorageMessage:(id)a0;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (id)quotaManager;

@end
