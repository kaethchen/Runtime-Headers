@class HMFTimer, NSArray, NSString, NSMutableSet, NSObject, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface HMDProcessMonitor : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSProcessMonitor *_internal;
    NSMutableSet *_processes;
    BOOL _activeHomeKitApps;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HMFTimer *spiClientTerminationDelayTimer;
@property (readonly, nonatomic) NSMutableSet *pendingTerminatedApplications;
@property (readonly, copy) NSArray *processes;
@property (readonly, copy) NSArray *foregroundProcesses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)applicationStateForProcessInfo:(id)a0 rbsProcessState:(id)a1;
+ (unsigned long long)applicationStateFromRBSProcessState:(id)a0;
+ (id)foregroundAssertionReasonForProcessState:(id)a0;
+ (BOOL)shouldUpgradeFromBackgroundToForegroundForProcessInfo:(id)a0 processState:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)processInfoForXPCConnection:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)_removeProcess:(id)a0;
- (void)removeProcess:(id)a0;
- (void)_processAppStateChange:(id)a0;
- (id)processInfoForPID:(int)a0;
- (void)removeFromPendingTerminated:(id)a0;
- (void)updateApplicationMonitor;
- (void)updateProcessInfo:(id)a0 withProcessState:(id)a1;
- (void)updateProcessInfoForRBSProcessHandle:(id)a0 usingUpdate:(id)a1;

@end
