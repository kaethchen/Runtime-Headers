@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSSystemDaemonStateMonitor : CSEventMonitor <CSLaunchAgentXPCClientConnectionStatusDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long daemonState;
@property (nonatomic) int notifyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)systemDaemonNotifyDidLaunch;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)CSLaunchAgentXPCClientConnectionDisconnected:(id)a0;
- (void)_handleAgentDaemonXPCClientDisconnection;
- (void)_handleSystemDaemonDidLaunchNotification;
- (void)_notifyObserversSystemDaemonCrashed;
- (void)_notifyObserversSystemDaemonRestartedFromCrash;

@end
