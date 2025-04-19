@class RTDataProtectionManager, RTDefaultsManager, RTXPCTimerAlarm, NSString, RTWatchWristStateManager, NSObject, SMSessionStore;
@protocol OS_dispatch_queue, SMTriggerManagerProtocol;

@interface SMTriggerOffWrist : NSObject <SMTriggerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (retain, nonatomic) RTWatchWristStateManager *wristStateManager;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (retain, nonatomic) RTXPCTimerAlarm *offWristThresholdTimerAlarm;
@property (weak, nonatomic) id<SMTriggerManagerProtocol> sessionMonitorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setup;
- (void)_onWristStateChangedNotification:(id)a0;
- (void)_startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)_stopMonitoringWithHandler:(id /* block */)a0;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 dataProtectionManager:(id)a2 sessionStore:(id)a3 wristStateManager:(id)a4;
- (void)onWristStateChangedNotification:(id)a0;
- (void)setup;
- (void)startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)stopMonitoringWithHandler:(id /* block */)a0;

@end
