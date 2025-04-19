@class CSEntityKitManager, CSEntityStatistics, NSString;

@interface CSEntityKitEventMonitor : CSEventMonitor <CSEntityKitManagerDelegate>

@property (retain, nonatomic) CSEntityKitManager *entityKitManager;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } eventRWLock;
@property (retain, nonatomic) CSEntityStatistics *entityStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)currentEntityStatistics;
- (void)entityKitManagerDidReceiveUpdate:(id)a0;

@end
