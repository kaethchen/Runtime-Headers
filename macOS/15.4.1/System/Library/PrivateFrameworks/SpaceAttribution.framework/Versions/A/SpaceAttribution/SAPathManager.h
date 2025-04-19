@interface SAPathManager : NSObject

@property (class, readonly) SAPathManager *defaultManager;

- (void)registerPaths:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerPaths:(id)a0 forBundleID:(id)a1 completionHandler:(id /* block */)a2;
- (void)unregisterURLs:(id)a0 forBundleID:(id)a1 completionHandler:(id /* block */)a2;
- (id)checkForDuplicatePathsWithDifferentExclusivity:(id)a0;
- (id)checkUnAllowedBundleIDs:(id)a0;
- (id)checkUnAllowedPaths:(id)a0;
- (void)unregisterPaths:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)validatePaths:(id)a0;

@end
