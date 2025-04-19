@class HMFTimer, HMMTRAccessoryServerBrowser, HMMTRAccessoryServer, HMMTRAccessoryReachabilityObserver, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRThreadSoftwareUpdateController : NSObject <HMFTimerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (weak, nonatomic) HMMTRAccessoryServer *targetThreadAccessoryServerForFWUpdate;
@property (readonly) HMMTRAccessoryReachabilityObserver *reachabilityObserver;
@property (readonly) HMFTimer *firmwareUpdateActiveTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)suspendOperations;
- (void)timerDidFire:(id)a0;
- (void)suspendOperationsForFabricUUID:(id)a0;
- (void)_attemptConnectionForFirmwareUpdateForAccessoryServer:(id)a0 completion:(id /* block */)a1;
- (void)_cleanupFirmwareUpdateStateWithError:(id)a0;
- (void)handleFirmwareUpdateStatusChangeForAccessoryServer:(id)a0 state:(long long)a1;
- (void)handleUpdateRequestedForAccessoryServer:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 browser:(id)a1;
- (BOOL)isFirmwareUpdateInProgressForFabricUUID:(id)a0;

@end
