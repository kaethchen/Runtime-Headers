@class HMSoftwareUpdate, NSUUID, _HMContext, NSString, NSObject;
@protocol OS_dispatch_queue, HMSoftwareUpdateManagerDelegate;

@interface HMSoftwareUpdateManager : NSObject <HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (readonly) NSUUID *identifier;
@property (nonatomic, getter=isStarted) BOOL started;
@property (weak) id<HMSoftwareUpdateManagerDelegate> delegate;
@property (readonly) HMSoftwareUpdate *availableUpdate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)reconnect;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)__registerForMessages;
- (void)_handleFetch:(id)a0;
- (void)_handleStartUpdate:(id)a0;
- (void)_handleUpdatedAvailableUpdate:(id)a0;
- (void)_reallyStartWithCompletionHandler:(id /* block */)a0;
- (id)messageDestination;
- (void)setAvailableUpdate:(id)a0;
- (void)updateAvailableUpdate:(id)a0 completionHandler:(id /* block */)a1;

@end
