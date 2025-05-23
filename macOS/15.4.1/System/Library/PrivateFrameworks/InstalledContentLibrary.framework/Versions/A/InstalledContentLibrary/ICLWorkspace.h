@interface ICLWorkspace : NSObject

+ (id)defaultWorkspace;
+ (id)_connectionToInstallationDaemonWithError:(id *)a0;

- (id)init;
- (id)infoForLaunchServicesWithWrapperURL:(id)a0 forBundleIdentifier:(id)a1 withError:(id *)a2;
- (id)diskUsageForLaunchServicesWithBundleIDs:(id)a0 options:(id)a1 withError:(id *)a2;
- (id)bundleIDsForContainerizedContentWithError:(id *)a0;
- (id)bundleRecordsForLaunchServicesWithWrapperURL:(id)a0 forBundleIdentifier:(id)a1 withError:(id *)a2;
- (id)bundleRecordsWithFrameworkURL:(id)a0 options:(id)a1 withError:(id *)a2;
- (id)containerizedAppBundleRecordsForIdentity:(id)a0 inDomain:(unsigned long long)a1 options:(id)a2 withError:(id *)a3;
- (BOOL)enumerateBuiltInSystemContentWithBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)enumerateCryptexContentWithBlock:(id /* block */)a0 error:(id *)a1;
- (void)triggerRegistrationForContainerizedContentWithOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)triggerRegistrationForContainerizedContentWithOptions:(id)a0 withError:(id *)a1;
- (void)triggerRegistrationForDiskImageContentWithOptions:(id)a0 completion:(id /* block */)a1;

@end
