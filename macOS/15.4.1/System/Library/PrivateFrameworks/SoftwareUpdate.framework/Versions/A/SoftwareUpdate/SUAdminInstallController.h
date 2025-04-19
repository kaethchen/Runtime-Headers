@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SUAdminInstallController : NSObject {
    NSObject<OS_dispatch_queue> *_installQueue;
    NSObject<OS_dispatch_queue> *_updateInfoQueue;
    BOOL _deferredOSInstallEnabled;
    BOOL _deferredNonOSInstallEnabled;
    BOOL _deferredMajorOSInstallEnabled;
    NSMutableArray *_overriddenDeferralProductKeys;
}

+ (BOOL)deferredInstallEnabled;
+ (id)sharedAdminInstallController;

- (void)dealloc;
- (id)init;
- (void)resetState;
- (id)_deferralDateFromDate:(id)a0 withType:(unsigned long long)a1;
- (void)archiveToCoder:(id)a0;
- (void)_doPostDownloadActionsForAdminInitiatedUpdateForProduct:(id)a0 usingClientAuthorization:(struct AuthorizationOpaqueRef { } *)a1 withAction:(long long)a2 replyWhenDone:(id /* block */)a3;
- (void)_dumpAuthForDebugging:(struct AuthorizationOpaqueRef { } *)a0;
- (void)_managedPreferencesDidChange:(id)a0;
- (BOOL)_shouldDeferFromDate:(id)a0 withType:(unsigned long long)a1;
- (void)deferralDateForMajorProductTag:(id)a0 orProductKey:(id)a1 completion:(id /* block */)a2;
- (id)deferralPeriodStringOfType:(unsigned long long)a0;
- (id)deferredInstallDescription;
- (void)installerNotificationBundleDeferralDateForMajorOSBundleTag:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInstallDeferredForProduct:(id)a0 deferredUntilDate:(id *)a1;
- (void)overrideDeferralForProducts:(id)a0;
- (void)restoreFromCoder:(id)a0;
- (void)startInstallingAdminUpdates:(id)a0 usingClientAuthorization:(struct AuthorizationOpaqueRef { } *)a1 replyWhenDone:(id /* block */)a2;

@end
