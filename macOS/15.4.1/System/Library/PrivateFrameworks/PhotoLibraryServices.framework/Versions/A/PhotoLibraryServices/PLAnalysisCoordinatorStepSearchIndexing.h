@interface PLAnalysisCoordinatorStepSearchIndexing : PLAnalysisCoordinatorStep <PLAnalysisCoordinatorStepPerformer>

- (void)cancel;
- (void)_batchIndexAssetStartingAtIndex:(unsigned long long)a0 withAssetIDs:(id)a1 searchIndexingEngine:(id)a2 library:(id)a3 progress:(id)a4 withCompletionHandler:(id /* block */)a5;
- (void)_performStepForAssets:(id)a0 withProgress:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)performStepForAssets:(id)a0 withProgress:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
