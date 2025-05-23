@class NSUUID, HMFMessageDispatcher, NSString, NSObject;
@protocol OS_dispatch_queue, HMDResidentSyncManager, HMDPersonResidentSyncManagerDelegate;

@interface HMDPersonResidentSyncManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly, copy) NSUUID *UUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDResidentSyncManager> residentSyncManager;
@property (weak) id<HMDPersonResidentSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)addOrUpdatePersons:(id)a0;
- (id)addOrUpdatePersons:(id)a0 andRemovePersonsWithUUIDs:(id)a1;
- (void)configureWithHome:(id)a0 delegate:(id)a1;
- (void)handleModifyPersonsMessage:(id)a0;
- (void)handleRemoveAllAssociatedDataMessage:(id)a0;
- (id)initWithUUID:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2 residentSyncManager:(id)a3;
- (id)removeAllAssociatedData;
- (id)removePersonsWithUUIDs:(id)a0;

@end
