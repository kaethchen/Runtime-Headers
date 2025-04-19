@class HMFTimer, NSString, HMDActiveXPCClientConnectionsManager, NSSet, NSObject;
@protocol OS_dispatch_queue, HMDActiveXPCClientConnectionsPeriodicTimerDelegate;

@interface HMDActiveXPCClientConnectionsPeriodicTimer : HMFObject <HMDActiveXPCClientConnectionsManagerDelegate, HMFLogging, HMFTimerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) HMFTimer *timer;
@property (readonly) HMDActiveXPCClientConnectionsManager *clientConnectionsManager;
@property (readonly) double timeInterval;
@property (readonly, copy) NSSet *clientConnections;
@property (weak) id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_updateTimer;
- (void)_configure;
- (void)timerDidFire:(id)a0;
- (id)initWithTimer:(id)a0 clientConnectionsManager:(id)a1 logIdentifier:(id)a2 workQueue:(id)a3;
- (void)addClientConnection:(id)a0;
- (void)clientConnectionsManager:(id)a0 didHandleActivationForClientConnection:(id)a1;
- (void)clientConnectionsManager:(id)a0 didHandleDeactivationForClientConnection:(id)a1;
- (id)initWithTimeInterval:(double)a0 logIdentifier:(id)a1 workQueue:(id)a2;
- (void)removeClientConnection:(id)a0;

@end
