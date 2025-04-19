@class NSMutableDictionary, PLBackgroundJobService, NSDate, PLCacheDeleteRegistration;

@interface PLPhotoLibraryBundleController : NSObject {
    long long _bundleType;
    Class _libraryServicesDelegateClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundlesByPathLock;
    NSMutableDictionary *_bundlesByPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundleCreationPauseLock;
    NSDate *_bundleCreationPausedUntilDate;
}

@property (retain) PLBackgroundJobService *backgroundJobService;
@property (retain) PLCacheDeleteRegistration *cacheDeleteRegistration;

+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)a0;
+ (id)sharedBundleController;
+ (id)_realPathForLibraryURL:(id)a0;
+ (void)resetSharedBundleController;

- (id)init;
- (void).cxx_destruct;
- (id)bundleForLibraryURL:(id)a0;
- (void)handleUnknownMergeEvent;
- (id)openBundleAtLibraryURL:(id)a0;
- (id)replaceBundleForRebuildAtLibraryURL:(id)a0;
- (void)shutdownBundle:(id)a0 reason:(id)a1;
- (id)_lookupOrCreateBundleForLibraryURL:(id)a0 replaceExisting:(BOOL)a1;
- (id)_pathKeyForLibraryURL:(id)a0;
- (void)_unregisterBundle:(id)a0 pauseUntilDate:(id)a1;
- (BOOL)bindAssetsdService:(id)a0 toBundle:(id)a1 error:(id *)a2;
- (id)initWithBundleType:(long long)a0 libraryServicesManagerDelegateClass:(Class)a1;
- (id)libraryBundlePaths;
- (id)libraryBundles;
- (id)libraryServicesStatusDescription;
- (id)lookupOrCreateBundleForLibraryURL:(id)a0;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)a0;
- (id)pauseUntilDateForShutdownReason:(id)a0;
- (void)removeBundleForRebuildAtLibraryURL:(id)a0;
- (void)removeManagedObjectModelIfNeededForShutdownReason:(id)a0;
- (void)shutdownAllBundlesWithReason:(id)a0;

@end
