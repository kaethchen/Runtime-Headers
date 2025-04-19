@interface PLAnalysisCoordinatorStepMediaAnalysis : PLAnalysisCoordinatorStep <PLAnalysisCoordinatorStepPerformer> {
    long long _currentMediaAnalysisRequestID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock_currentMediaAnalysisRequestID;
    unsigned long long _processingType;
}

- (void)cancel;
- (void)_performStepForAssets:(id)a0 withProgress:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithLibraryServicesManager:(id)a0 parentTaskID:(id)a1 processingType:(unsigned long long)a2;
- (void)performStepForAssets:(id)a0 withProgress:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
