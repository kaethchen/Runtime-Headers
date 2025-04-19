@class NSUUID, _HMContext, NSArray, NSString, NSObject;
@protocol HMUserCloudShareManagerDataSource, OS_dispatch_queue, HMUserCloudShareManagerDelegate;

@interface HMUserCloudShareManager : NSObject <HMFMessageReceiver>

@property (readonly, nonatomic) _HMContext *context;
@property (weak) id<HMUserCloudShareManagerDataSource> dataSource;
@property (readonly) NSUUID *identifier;
@property (nonatomic, getter=isRegistered) BOOL registered;
@property (retain, nonatomic) NSArray *containerIDs;
@property (weak) id<HMUserCloudShareManagerDelegate> delegate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)reconnect;
- (void)configure;
- (void)_handleDidReceiveRepairRequest:(id)a0;
- (void)__registerForMessages;
- (void)_handleDidReceiveShare:(id)a0;
- (void)_registerWithCompletion:(id /* block */)a0;
- (void)_unconfigure;
- (id)initWithDataSource:(id)a0 context:(id)a1;
- (id)messageDestination;
- (void)registerForContainerIDs:(id)a0 completion:(id /* block */)a1;

@end
