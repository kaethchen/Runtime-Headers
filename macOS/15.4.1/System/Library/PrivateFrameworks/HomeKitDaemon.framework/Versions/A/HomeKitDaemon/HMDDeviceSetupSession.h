@class NSUUID, NSString, NSError, HMDHomeManager, HMFActivity, HMDDeviceSetupSessionInternal, NSObject, HMAccessoryCategory;
@protocol OS_dispatch_queue, HMDDeviceSetupSessionDelegate;

@interface HMDDeviceSetupSession : HMFObject <HMFLogging, HMDDeviceSetupTrackingInfoMutable, HMFMessageReceiver, HMDDeviceSetupTrackingInfoProviding> {
    HMFActivity *_activity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDDeviceSetupSessionInternal *internal;
@property (nonatomic, getter=isOpen) BOOL open;
@property (readonly) id /* block */ upSecondsFactory;
@property (weak) id<HMDDeviceSetupSessionDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long role;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSUUID *accessoryUUID;
@property (copy) NSString *accessoryIDSIdentifier;
@property (copy) HMAccessoryCategory *accessoryCategory;
@property (copy) NSString *setupClientBundleID;
@property unsigned long long startTime;
@property unsigned long long endTime;
@property (copy) NSError *sessionError;
@property (copy) NSString *category;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)isRoleSupported:(long long)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)open;
- (void)close:(id)a0;
- (id)logIdentifier;
- (void)_closeWithError:(id)a0;
- (void)__registerForMessages;
- (id)messageDestination;
- (id)messageDispatcher;
- (void)_handleClose:(id)a0;
- (void)_handleReceiveData:(id)a0;
- (void)_sendRequestData:(id)a0;
- (id)initWithIdentifier:(id)a0 role:(long long)a1 homeManager:(id)a2;
- (id)initWithIdentifier:(id)a0 role:(long long)a1 homeManager:(id)a2 upSecondsFactory:(id /* block */)a3 userDefaults:(id)a4;
- (id)setupTrackingInfo;
- (void)updateAccessoryUUIDAndNotifyDelegate:(id)a0 accessoryIDSIdentifier:(id)a1 accessoryCategory:(id)a2;

@end
