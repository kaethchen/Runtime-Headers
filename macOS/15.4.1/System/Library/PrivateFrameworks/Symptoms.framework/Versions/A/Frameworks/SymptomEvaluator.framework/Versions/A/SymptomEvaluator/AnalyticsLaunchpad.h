@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {
    BOOL _launchSequenceStarted;
    BOOL _observingConsoleUserName;
    NSObject<OS_dispatch_queue> *flows_queue;
    NSObject<OS_dispatch_queue> *nets_queue;
    NSObject<OS_dispatch_queue> *service_queue;
}

@property (retain, nonatomic) NSMutableDictionary *launchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;
+ (void)appendLaunchTime;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (void)clearIntegrityCheckBreadcrumb;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (BOOL)launchHealthCheck:(id)a0;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreStarted;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)integrityCheckStarted;
- (id)_allocateNOIEngineWithParams:(id)a0;
- (void)_launchSequence:(id)a0;
- (void)_launchSequenceWithSelfParams;
- (int)configureInstance:(id)a0;

@end
