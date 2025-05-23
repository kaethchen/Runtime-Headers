@class NSString, NSUUID, HMFMessageDispatcher, HMDAccessory, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface HMDAccessoryProfile : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (readonly) NSString *logIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, weak) HMDAccessory *accessory;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (void)registerForMessages;
- (void)unconfigure;
- (void)removeCloudData;
- (void)configureWithMessageDispatcher:(id)a0 configurationTracker:(id)a1;
- (id)findServiceWithType:(id)a0;
- (void)handleInitialState;
- (id)initWithAccessory:(id)a0 uniqueIdentifier:(id)a1 services:(id)a2;
- (id)initWithAccessory:(id)a0 uniqueIdentifier:(id)a1 services:(id)a2 workQueue:(id)a3;
- (id)runtimeState;

@end
