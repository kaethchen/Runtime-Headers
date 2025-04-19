@class PLLibraryServicesManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLAnalysisCoordinator : NSObject {
    PLLibraryServicesManager *_lsm;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSMutableDictionary *_tasks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock_tasks;
}

+ (unsigned long long)bgstFeatureCodeForCoordinatorFeature:(unsigned long long)a0;
+ (id)bgstTaskNameForCoordinatorFeature:(unsigned long long)a0;
+ (void)registerSearchFastPassTaskWithBundleController:(id)a0;
+ (void)reportBGSTFeatureAvailable:(unsigned long long)a0;
+ (void)reportBGSTFeaturePreviewAvailable:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)analyzeAssets:(id)a0 forFeature:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)analyzeLibraryForFeature:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handleSearchFastPassTask:(id)a0;
- (void)reportBGSTCheckpointProgressForFeature:(unsigned long long)a0;

@end
