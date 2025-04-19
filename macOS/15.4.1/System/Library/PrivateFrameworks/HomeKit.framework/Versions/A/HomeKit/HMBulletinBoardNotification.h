@class NSUUID, _HMContext, NSPredicate, NSString, HMService, NSObject;
@protocol OS_dispatch_queue;

@interface HMBulletinBoardNotification : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (readonly, weak, nonatomic) HMService *service;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) NSPredicate *condition;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
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
- (void)__configureWithContext:(id)a0;
- (void)_callBulletinBoardNotificationUpdatedDelegate;
- (void)_commitWithCompletionHandler:(id /* block */)a0;
- (void)_handleBulletinBoardNotificationUpdateNotification:(id)a0;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)commitWithCompletionHandler:(id /* block */)a0;
- (id)initWithEnabled:(BOOL)a0 condition:(id)a1 service:(id)a2 messageTargetUUID:(id)a3;
- (BOOL)mergeFromNewObject:(id)a0;

@end
