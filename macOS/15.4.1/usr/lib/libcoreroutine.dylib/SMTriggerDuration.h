@class RTDefaultsManager, RTXPCTimerAlarm, NSString, SMSessionStore, NSObject;
@protocol OS_dispatch_queue, SMTriggerManagerProtocol;

@interface SMTriggerDuration : NSObject <SMTriggerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTXPCTimerAlarm *xpcTimerAlarm;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (weak, nonatomic) id<SMTriggerManagerProtocol> sessionMonitorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setup;
- (BOOL)_stopMonitoring;
- (void)_initializeTimers;
- (BOOL)_startMonitoringWithConfig:(id)a0 error:(id *)a1;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 sessionStore:(id)a2;
- (void)modifyMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)onUserTriggerResponse:(long long)a0;
- (void)setup;
- (void)startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)stopMonitoringWithHandler:(id /* block */)a0;

@end
