@class NSString, NSProgress, NSArray, PLLibraryServicesManager, PLPhotoLibrary;

@interface PLAnalysisCoordinatorTask : NSObject {
    NSArray *_assets;
    NSArray *_steps;
    unsigned long long _currentStepIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock_currentStepIndex;
    PLLibraryServicesManager *_lsm;
    PLPhotoLibrary *_library;
}

@property (readonly) NSString *taskID;
@property (readonly) NSProgress *progress;

+ (id)_orderedStepsForFeature:(unsigned long long)a0 withLibraryServicesManager:(id)a1 taskID:(id)a2;

- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(id /* block */)a0;
- (void)_cancel;
- (void)_executeStepsStartingAtIndex:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)initForFeature:(unsigned long long)a0 assets:(id)a1 lsm:(id)a2;

@end
