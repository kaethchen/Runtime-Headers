@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisMomentGraphService : NSObject <PLPhotoAnalysisCancellableService> {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)requestPrewarmQueryAnnotatorForOriginatorPID:(long long)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)validatePromptSuggestionsWithSuggestionUUIDs:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)requestQueryAnnotationForQuery:(id)a0 originatorPID:(long long)a1 operationID:(id)a2 reply:(id /* block */)a3;
- (void)fetchUnvalidatedPromptSuggestionsWithFetchLimit:(long long)a0 reply:(id /* block */)a1;
- (void)generateMagicSlotSuggestionsWithOptions:(id)a0 reply:(id /* block */)a1;
- (id)graphStatusWithError:(id *)a0;
- (void)performGraphIncrementalUpdateWithOptions:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)performGraphRebuildWithOptions:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)performGraphSearchEntityRankingDonationWithOperationID:(id)a0 reply:(id /* block */)a1;
- (void)performLocalMemoryEnrichmentForMemoryCategory:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)performLocalMemoryEnrichmentForUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)performLocalMemoryEventElectionWithElectionMode:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)performMemoryNodesRebuildForCategory:(unsigned long long)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)performPromptSuggestionCachingWithOperationID:(id)a0 reply:(id /* block */)a1;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 operationID:(id)a2 error:(id *)a3;
- (void)requestCharacterCurationInfoForCharacterUUIDs:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)requestContextInfoWithConfigurationAsData:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)requestExtendedTokenCollectionFromQueryTokensAsData:(id)a0 representativeMomentUUIDByAssetUUID:(id)a1 personOrPetUUIDsWithNegativeFeedback:(id)a2 operationID:(id)a3 reply:(id /* block */)a4;
- (void)requestFilterLocationsByMomentLocationHierarchyForRecipeAsData:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphIsAvailableWithReply:(id /* block */)a0;
- (id)requestGraphSearchMetadataWithOptions:(id)a0 operationID:(id)a1 error:(id *)a2;
- (void)requestMeaningsForMomentUUIDs:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)requestPersonalEventMomentsForQueryTokenAsData:(id)a0 associatedPersonUUID:(id)a1 scopedMomentUUIDs:(id)a2 momentUUIDByAssetUUID:(id)a3 operationID:(id)a4 reply:(id /* block */)a5;
- (void)requestPersonalTraitsForAssetUUIDs:(id)a0 momentUUIDByAssetUUID:(id)a1 extendedTokenCollectionAsData:(id)a2 configurationAsData:(id)a3 operationID:(id)a4 reply:(id /* block */)a5;
- (void)requestPersonalTraitsForAssetUUIDs:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (void)requestPersonalTraitsForHighlightUUIDs:(id)a0 operationID:(id)a1 reply:(id /* block */)a2;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 operationID:(id)a2 error:(id *)a3;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 operationID:(id)a3 error:(id *)a4;
- (id)requestSynonymsDictionariesWithOperationID:(id)a0 error:(id *)a1;
- (id)requestZeroKeywordsWithOptions:(id)a0 operationID:(id)a1 error:(id *)a2;

@end
