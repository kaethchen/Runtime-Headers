@class NSLock, NSArray, NSMutableArray, NSLSNotificationHelper;

@interface NSWorkspaceApplicationKVOHelper : NSObject {
    NSArray *staleAppsArray;
    NSMutableArray *propertyBackingArray;
    NSLSNotificationHelper *notificationHelper;
    NSLock *lock;
    void *notificationID;
    unsigned long long propertyIndex;
}

- (void)dealloc;
- (const struct WorkspaceKVOData_t { id x0; void /* function */ *x1; void /* function */ *x2; BOOL x3; } *)data;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)keyPath;
- (void)addApplication:(struct __LSASN { } *)a0;
- (unsigned long long)_indexOfApplicationWithASN:(struct __LSASN { } *)a0;
- (void)_installStalenessObserver;
- (void)_registerForApplicationNotifications;
- (void)_unregisterForApplicationNotifications;
- (id)applications;
- (id)initWithKVOHelperIndex:(unsigned long long)a0;
- (void)noteAppBirth:(struct __LSASN { } *)a0 appInfo:(id)a1;
- (void)noteAppDeath:(struct __LSASN { } *)a0 appInfo:(id)a1;
- (void)noteAppTALChange:(struct __LSASN { } *)a0 appInfo:(id)a1;
- (void)noteIndividualAppChanged:(struct __LSASN { } *)a0;
- (void)removeApplication:(struct __LSASN { } *)a0;
- (void)unobservedAppsPropertyBecameStale;

@end
