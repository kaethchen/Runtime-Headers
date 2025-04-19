@class HMFMessageDispatcher, HMDAccessory, NSString, NSUUID, NSObject, NSNumber;
@protocol OS_dispatch_queue, HMDMatterAccessoryProtocol;

@interface HMDMatterBulletinBoardNotification : HMDBulletinBoardNotification <HMFLogging, HMFDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_messageTargetUUID;
}

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDAccessory<HMDMatterAccessoryProtocol> *accessory;
@property (copy, nonatomic) NSNumber *endpointID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)home;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)dumpState;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)a0;
- (void)_updateAccessoryBulletinNotificationManagerWithEnabled:(BOOL)a0 condition:(id)a1 completion:(id /* block */)a2;
- (void)_updateLocalSettingsWithEnabled:(BOOL)a0 condition:(id)a1 forMessage:(id)a2;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (id)initWithAccessory:(id)a0 endpointID:(id)a1 enabled:(BOOL)a2 condition:(id)a3;
- (void)registerNotificationHandlers;
- (void)updateRegistrations;

@end
