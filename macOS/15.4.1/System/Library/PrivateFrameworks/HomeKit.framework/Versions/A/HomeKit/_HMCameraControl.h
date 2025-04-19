@class _HMCameraProfile, _HMContext, NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _HMCameraControl : NSObject <HMFLogging, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) _HMContext *context;
@property (weak) _HMCameraProfile *cameraProfile;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)__configureWithContext:(id)a0;
- (id)initWithCameraProfile:(id)a0 profileUniqueIdentifier:(id)a1;

@end
