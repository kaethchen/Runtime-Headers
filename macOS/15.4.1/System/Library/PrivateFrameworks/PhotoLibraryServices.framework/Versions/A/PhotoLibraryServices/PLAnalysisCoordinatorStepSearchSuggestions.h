@interface PLAnalysisCoordinatorStepSearchSuggestions : PLAnalysisCoordinatorStep <PLAnalysisCoordinatorStepPerformer>

- (void)cancel;
- (void)_performStepForAssets:(id)a0 withProgress:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)performStepForAssets:(id)a0 withProgress:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
