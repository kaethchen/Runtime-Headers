@class NSSet, NSMutableSet, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface AXBBundleManager : NSObject {
    NSLock *_lock;
    NSMutableSet *_denylistedBundles;
    NSSet *_requiredBundles;
    NSMutableSet *_loadedBundlePaths;
    NSMutableSet *_bundlesWithoutAXBundles;
    NSMutableSet *_loadedBundles;
    NSMutableSet *_loadedAdditions;
    NSSet *_eyeCandyIdentifiers;
    NSObject<OS_dispatch_queue> *_imageMonitorQueue;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)defaultManager;
+ (BOOL)universalAccessSettingIsActive:(id)a0;
+ (BOOL)customFontsIsActive;
+ (BOOL)customMenuFontsIsActive;

- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)_axBundlePaths;
- (id)_axBundleWithFilename:(id)a0 searchPaths:(id)a1;
- (id)_axBundleForBundle:(id)a0 forceLoad:(BOOL)a1;
- (id)_axBundlePathsForBundle:(id)a0;
- (id)loadedAXBundles;
- (void)_loadAXBundle:(id)a0 didLoad:(BOOL *)a1;
- (id)_loadAXBundleForBundle:(id)a0 didLoad:(BOOL *)a1 forceLoad:(BOOL)a2 loadingRequired:(BOOL)a3;
- (void)_loadCoreAccessibilityAdditionsForBundle:(id)a0;
- (void)_loadRequiredBundlesForce;
- (void)_loadSystemBundles;
- (BOOL)_processesBundlesToLoad:(id)a0 loadRecursively:(BOOL)a1 loadingRequired:(BOOL)a2;
- (id)_subBundlesForBundle:(id)a0;
- (BOOL)loadAXBundleForBundle:(id)a0;
- (BOOL)loadAXBundles;
- (BOOL)loadAXBundlesWithClientToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)loadRequiredAXBundlesWithClientToken:(struct { unsigned int x0[8]; })a0;
- (id)loadedAXBundleWithIdentifier:(id)a0;

@end
