@class NSString, NSUUID, HMDHome, HMFMessageDispatcher, NSObject, HMDNotificationRegistration;
@protocol OS_dispatch_queue;

@interface HMDHomePresenceBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>

@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSString *logString;
@property (retain, nonatomic) NSUUID *presenceMonitorMessageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)messageTargetUUIDFromHomeUUID:(id)a0;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)residentChanged;
- (void)_initialize:(id)a0;
- (void)_registerForMessages;
- (void)configure:(id)a0 messageDispatcher:(id)a1;
- (void)handleHomeDataLoadedNotification:(id)a0;

@end
