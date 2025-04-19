@interface PLAnalysisCoordinatorStepEmpty : PLAnalysisCoordinatorStep <PLAnalysisCoordinatorStepPerformer>

- (void)cancel;
- (void)performStepForAssets:(id)a0 withProgress:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
