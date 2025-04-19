@class NSMutableDictionary, NSMutableOrderedSet, RBContainerManager, NSObject, RBPersonaManager;
@protocol RBLaunchdInterfacing, RBBundlePropertiesManaging, OS_dispatch_queue;

@interface RBLaunchdJobManager : NSObject {
    NSMutableDictionary *_lock_jobsByIdentifier;
    NSMutableDictionary *_lock_monitoredJobsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<RBLaunchdInterfacing> _launchdInterface;
    RBPersonaManager *_personaManager;
    RBContainerManager *_containerManager;
    id<RBBundlePropertiesManaging> _bundlePropertiesManager;
    NSMutableOrderedSet *_lock_reslideIdentities;
    NSObject<OS_dispatch_queue> *_logQueue;
}

+ (id)lastExitStatusForLabel:(id)a0 error:(out id *)a1;

- (void).cxx_destruct;
- (id)synchronizeJobs;
- (BOOL)_addAppPropertiesToData:(id)a0 forIdentity:(id)a1 context:(id)a2 actualIdentity:(id *)a3 error:(id *)a4;
- (BOOL)_addContainerPropertiesFromExtensionContext:(id)a0 toServiceDict:(id)a1;
- (void)_addDextPropertiesToData:(id)a0 forIdentity:(id)a1 context:(id)a2;
- (void)_addExtensionContainerURL:(id)a0 toServiceDict:(id)a1;
- (void)_addExtensionEnvironmentFromContainerURL:(id)a0 toServiceDict:(id)a1;
- (BOOL)_addPersonaFromExtensionContext:(id)a0 toServiceDict:(id)a1;
- (void)_addReslideIdentityIfNeeded:(id)a0 exitStatus:(id)a1;
- (void)_addSharedPropertiesToData:(id)a0 forIdentity:(id)a1 context:(id)a2;
- (void)_addStandardAppPropertiesToData:(id)a0;
- (id)_containerURLForExtensionContext:(id)a0;
- (id)_createAndSubmitExtensionJob:(id)a0 UUID:(id)a1 error:(id *)a2;
- (id)_createLaunchdJobWithIdentity:(id)a0 context:(id)a1 actualIdentity:(id *)a2 error:(id *)a3;
- (id)_generateDataWithIdentity:(id)a0 context:(id)a1 actualIdentity:(id *)a2 error:(id *)a3;
- (BOOL)_isRunningBoardLaunched:(id)a0;
- (BOOL)_removeJobWithInstance:(id)a0 orJob:(id)a1 error:(out id *)a2;
- (id)createAndLaunchWithIdentity:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithLaunchdInterface:(id)a0 personaManager:(id)a1 containerManager:(id)a2 bundlePropertiesManager:(id)a3;
- (void)invokeOnProcessDeath:(id)a0 handler:(id /* block */)a1 onQueue:(id)a2;
- (BOOL)removeJobWithInstance:(id)a0 error:(out id *)a1;
- (unsigned long long)test_trackedJobCount;

@end
