@class NSString, NSURL, KHFileSystemWatcher, NSSet, NSMutableDictionary, KHProjectBundle, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface KHProjectManager : NSObject <KHFileSystemWatcherDelegate> {
    KHProjectBundle *_sampleProjectBundle;
}

@property (readonly) NSMutableSet *bundleSet;
@property (readonly) NSMutableDictionary *bundleSetsByProjectType;
@property (readonly) NSMutableDictionary *bundlesByUUID;
@property (readonly) NSMutableDictionary *bundlesByURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, nonatomic) KHFileSystemWatcher *fileSystemWatcher;
@property (nonatomic) BOOL scanForProjects;
@property (copy, nonatomic) NSURL *projectsDirectoryURL;
@property (readonly) NSSet *bundles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)sync;
- (void)_addProjectBundle:(id)a0 withType:(long long)a1;
- (void)_assertProjectsDirectoryURL;
- (id)_createProjectBundleWithType:(long long)a0;
- (void)_removeProjectBundle:(id)a0;
- (void)addProjectBundles:(id)a0;
- (id)createInMemoryProjectBundleWithType:(long long)a0;
- (id)createProjectBundleWithType:(long long)a0;
- (id)duplicateProjectBundle:(id)a0;
- (void)fileSystemWatcher:(id)a0 didObserveChangesAtPath:(id)a1;
- (id)projectBundleWithUUID:(id)a0;
- (id)projectBundlesWithType:(long long)a0;
- (BOOL)recycleProjectBundle:(id)a0;
- (BOOL)removeProjectBundle:(id)a0;
- (void)removeProjectBundles:(id)a0;

@end
