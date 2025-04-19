@class NSMutableDictionary, NSString, CPApplicationLauncherSwift, CPFeatureFlags, NSObject;
@protocol OS_dispatch_queue;

@interface CPApplicationLauncher : NSObject {
    CPApplicationLauncherSwift *_newApplicationLauncher;
}

@property (retain, nonatomic) NSMutableDictionary *sessionIDtoCompletionMap;
@property (retain, nonatomic) NSMutableDictionary *bundleIDToAssertionMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) CPFeatureFlags *featureFlags;
@property (copy, nonatomic) NSString *placementSceneIdentifier;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_acquireAssertionForBundleID:(id)a0;
- (void)_insertBKSAssertion:(id)a0 forBundleID:(id)a1;
- (void)_invalidateBKSAssertionForBundleID:(id)a0;
- (void)_invokeAndDequeueCompletionForSessionID:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_launchAndAcquireAssertionIfNecessaryForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)_launchAppForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)_launchApplicationForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (id)_sessionIDForActivity:(id)a0;
- (void)launchAppForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)revokeBackgroundAuthorizationForBundleID:(id)a0;
- (void)revokeBackgroundAuthorizationForSession:(id)a0;

@end
