@class NSUUID, NSString, HMAccessory, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMMatterBulletinBoardNotification : HMBulletinBoardNotification <NSSecureCoding, HMObjectMerge, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly, copy, nonatomic) NSNumber *endpointID;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)_commitWithCompletionHandler:(id /* block */)a0;
- (void)_handleBulletinBoardNotificationUpdateNotification:(id)a0;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)commitWithCompletionHandler:(id /* block */)a0;
- (id)initWithEnabled:(BOOL)a0 condition:(id)a1 accessory:(id)a2 endpointID:(id)a3 messageTargetUUID:(id)a4;
- (BOOL)mergeFromNewObject:(id)a0;

@end
