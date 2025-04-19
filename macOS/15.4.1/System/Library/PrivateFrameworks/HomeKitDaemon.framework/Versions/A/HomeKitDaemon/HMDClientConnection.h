@class HMDHomeManager, HMFMessageDispatcher, NSString, NSUUID, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMDClientConnectionDataSource;

@interface HMDClientConnection : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDClientConnectionDataSource> dataSource;
@property (readonly) NSMutableArray *commandsBeingExecuted;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (weak) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleIdmsAccountUsernameModified:(id)a0;
- (void)_handleSiriCommand:(id)a0;
- (void)_handleSiriSyncDataRequest:(id)a0;
- (void)_registerForMessages;
- (id)initWithHomeManager:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;
- (id)initWithHomeManager:(id)a0 queue:(id)a1 messageDispatcher:(id)a2 dataSource:(id)a3;

@end
