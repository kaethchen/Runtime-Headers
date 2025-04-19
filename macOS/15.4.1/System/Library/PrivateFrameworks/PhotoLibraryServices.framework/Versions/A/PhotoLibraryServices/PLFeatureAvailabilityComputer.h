@protocol PLFeatureAvailabilityTransitionDelegate, PLFeatureAvailabilityProgressDelegate, PLMediaProcessingAlgorithmVersionProvider;

@interface PLFeatureAvailabilityComputer : NSObject {
    id<PLMediaProcessingAlgorithmVersionProvider> _versionProvider;
    id<PLFeatureAvailabilityTransitionDelegate> _transitionDelegate;
    id<PLFeatureAvailabilityProgressDelegate> _progressDelegate;
}

+ (id)_predicateForEnrichedHighlights;
+ (id)_predicateForAllAssetsAllowedForProcessingForSceneAnalysis:(BOOL)a0;
+ (id)_predicateForAllCuratedAssetsForSceneAnalysis:(BOOL)a0;
+ (id)_predicateForCountOfProcessedAssetsForMediaProcessingTaskID:(unsigned long long)a0 priority:(unsigned long long)a1 versionProvider:(id)a2;
+ (id)_predicatesForVisibleAssets;
+ (id)_savedAssetTypePredicateForSceneAnalysis:(BOOL)a0;

- (void).cxx_destruct;
- (void)_readLastFullModeClusterDateWithPhotoLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_addAnalysisStatusForMediaTaskID:(unsigned long long)a0 toProcessingSnapshot:(id)a1 managedObjectContext:(id)a2 error:(id *)a3;
- (BOOL)_addAssetCountsToProcessingSnapshot:(id)a0 managedObjectContext:(id)a1 forSceneAnalysis:(BOOL)a2 error:(id *)a3;
- (void)_addAssetCountsToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addAssetForSceneCountsToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_addCaptioningStatusToProcessingSnapshot:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (void)_addCaptioningToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addEmbeddingIndexingToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_addEmbeddingVectorIndexingStatusToProcessingSnapshot:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)_addHighlightStatusToProcessingSnapshot:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (void)_addHighlightStatusToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addMediaAnalysisIndexingToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addPhotosKnowledgeGraphAvailabilityToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addSceneAnalysisIndexingToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addSceneAnalysisToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_addSpotlightSearchIndexingStatusToProcessingSnapshot:(id)a0 forTaskID:(unsigned long long)a1 completedCount:(long long)a2 totalCount:(long long)a3 error:(id *)a4;
- (void)_addVUIndexFullClusterStatusToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addVersionsToProcessingSnapshot:(id)a0;
- (void)_addVisualUnderstandingClusterIndexStatusToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)_assetCountForPredicate:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)_clearAvailabilityForPhotoLibrary:(id)a0 error:(id *)a1;
- (id)_computeAvailabilityForSnapshot:(id)a0 photoLibrary:(id)a1 shouldPersist:(BOOL)a2 error:(id *)a3;
- (BOOL)_failAvailabilityForPhotoLibrary:(id)a0 error:(id *)a1;
- (void)_fetchSpotlightSearchIndexingStatusForTaskID:(unsigned long long)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_onDemandAvailabilityUpdateForPhotoLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (void)_onDemandAvailabilityUpdateWithChanges:(id)a0 forPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_onDemand_addVisualUnderstandingClusterIndexStatusToProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)_persistFeatureAvailabilityDictionary:(id)a0 photoLibrary:(id)a1;
- (void)_updateSnapshot:(id)a0 withChanges:(id)a1;
- (void)_updateVUClusterStateInProcessingSnapshot:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)clearAvailabilityStateForPhotoLibrary:(id)a0 error:(id *)a1;
- (void)computeAvailabilityForPhotoLibrary:(id)a0 shouldPersist:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)computeSnapshotForPhotoLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)didDropSearchIndexForPhotoLibrary:(id)a0 error:(id *)a1;
- (BOOL)didFinishSearchIndexRebuidForPhotoLibrary:(id)a0 error:(id *)a1;
- (BOOL)failAvailabilityForPhotoLibrary:(id)a0 error:(id *)a1;
- (id)initWithTransitionDelegate:(id)a0 progressDelegate:(id)a1;
- (void)onDemandAvailabilityUpdateForPhotoLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (void)onDemandAvailabilityUpdateWithChanges:(id)a0 forPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;
- (void)updatePersistedSnapshotIfNeededWithLightweightVersionCheckForPhotoLibrary:(id)a0;

@end
