@class CLSAOICache, NSMutableArray, PGCurationManager, NSString, CLSROICache, CLSLocationCache, CPAnalytics, NSArray, PHPhotoLibrary, PGMusicBag, CLSNatureCache, NSObject, CLSPublicEventManager, PGMusicCache, CLSPOICache, PGMutableGraph, PGGraph, NSURL, CLSServiceManager, NSDate, NSProgress;
@protocol OS_dispatch_queue, OS_os_log;

@interface PGManager : NSObject {
    PGGraph *_graph;
    NSURL *_cachedGraphPersistenceParentDirectoryURL;
    NSURL *_cachedGraphPersistentStoreURL;
    _Atomic unsigned long long _fullGraphRebuildStamp;
    PGMusicCache *_musicCache;
    PGMutableGraph *_mutableGraph;
    NSObject<OS_dispatch_queue> *_graphAccessQueue;
    _Atomic unsigned long long _numberOfCurrentGraphAccesses;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableArray *_coalescingGraphIsReady;
}

@property (class, readonly, nonatomic) BOOL photosChallengeIsEnabled;

@property (readonly, copy, nonatomic) NSArray *availableMetricEvents;
@property (readonly) unsigned long long libraryAnalysisState;
@property (readonly, copy) NSString *graphName;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *graphUpdateQueue;
@property unsigned long long libraryAnalysisState;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *memoriesLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *relatedLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *ingestLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *graphLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *enrichmentLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *suggestionsLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *guessWhoLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *metricsLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *upNextLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *externalRelevanceLoggingConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *graphConsistencyCheckLoggingConnection;
@property (readonly, nonatomic) NSURL *graphPersistenceParentDirectoryURL;
@property (retain, nonatomic) NSProgress *rebuildProgress;
@property (retain, nonatomic) PGMusicBag *musicBag;
@property (readonly) BOOL photoLibraryIsReadonly;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CPAnalytics *analytics;
@property (retain, nonatomic) NSURL *metadataSnapshotOutputPathURL;
@property (readonly, nonatomic) NSDate *dateOfLastIncrementalUpdateInvocation;
@property (readonly, nonatomic) CLSLocationCache *locationCache;
@property (readonly, nonatomic) CLSAOICache *aoiCache;
@property (readonly, nonatomic) CLSPOICache *poiCache;
@property (readonly, nonatomic) CLSROICache *roiCache;
@property (readonly, nonatomic) CLSNatureCache *natureCache;
@property (readonly, nonatomic) CLSPublicEventManager *publicEventManager;
@property (readonly, nonatomic) PGCurationManager *curationManager;
@property (readonly, nonatomic) CLSServiceManager *serviceManager;

+ (void)initialize;
+ (BOOL)graphConsistencyCheckIsEnabled;
+ (id)graphServicesURLWithPhotoLibrary:(id)a0;
+ (id)stringFromPGDuration:(unsigned long long)a0;
+ (id)summaryCurationForHighlight:(id)a0;
+ (id)_calendarEventsBetweenDate:(id)a0 andDate:(id)a1 atLocation:(id)a2 withPersonLocalIdentifiers:(id)a3 inPhotoLibrary:(id)a4 serviceManager:(id)a5 locationCache:(id)a6;
+ (id)_nodesOfClass:(id)a0 matchingNodes:(id)a1 inGraph:(id)a2;
+ (long long)_totalNumberOfIdenticalNodesFromNode1ByNode2:(id)a0 withNumberOfIdenticalNodesByDomain:(id)a1 loggingConnection:(id)a2 progressBlock:(id /* block */)a3;
+ (id)consistencyCheckResultOfGraph:(id)a0 andGraph:(id)a1 loggingConnection:(id)a2 progressBlock:(id /* block */)a3;
+ (id)consistencyIgnoredNodeDomainClasses;
+ (id)consistencyIgnoredNodeDomainCodes;
+ (id)defaultRulesWithOptions:(id)a0 graph:(id)a1;
+ (id)edgesByNodeFromEdges:(id)a0 andNode:(id)a1;
+ (id)exportableDictionaryFromKeywords:(id)a0;
+ (BOOL)geoServiceProviderDidChangeForGraph:(id)a0;
+ (Class)graphClass;
+ (id)nodeDomainsFromGraph:(id)a0;
+ (id)nodesByClassFromGraph:(id)a0;
+ (id)nodesOfClass:(id)a0 matchingNode:(id)a1 inGraph:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isReady;
- (id)_dateFormatter;
- (BOOL)isBusy;
- (id)initForTesting;
- (void)setGraph:(id)a0;
- (id)initWithGraph:(id)a0;
- (id)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(id)a0 error:(id *)a1;
- (id)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(id)a0 error:(id *)a1;
- (id)blockedFeatures;
- (BOOL)copyGraphToURL:(id)a0;
- (BOOL)saveGraphToURL:(id)a0;
- (id)snapshotOuputFilePathURLForKey:(id)a0;
- (id)allSocialGroupsForMemberLocalIdentifier:(id)a0 options:(id)a1;
- (id)assetCollectionFingerprintsWithVersion:(long long)a0 forAssetCollections:(id)a1 withTransformers:(id)a2 error:(id *)a3;
- (id)assetCollectionsForPersonLocalIdentifiers:(id)a0;
- (id)assetFingerprintsWithVersion:(long long)a0 forAssets:(id)a1 withTransformers:(id)a2 error:(id *)a3;
- (id)assetIdentifiersForPersonLocalIdentifiers:(id)a0;
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)a0 ofType:(unsigned long long)a1 progressReporter:(id)a2;
- (id)curatedKeyAssetForAssetCollection:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 curationContext:(id)a3;
- (id)curationDebugInformationForAssetCollection:(id)a0 options:(id)a1 curationContext:(id)a2;
- (id)curationOfLength:(unsigned long long)a0 forMemory:(id)a1 customDuration:(double)a2 useAssetEligibility:(BOOL)a3 curationContext:(id)a4;
- (unsigned long long)currentGraphVersion;
- (id)defaultGraphExportFullPath;
- (id)defaultSnapshotRootPath;
- (BOOL)generateDefaultRulesForLibraryScopeWithLocalIdentifier:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)graphUpdateForContactsChangesWithProgressReporter:(id)a0;
- (id)highlightDebugInformationWithHighlight:(id)a0;
- (id)homeCircularRegions;
- (id)initWithGraphPersistentStoreURL:(id)a0 photoLibrary:(id)a1 analytics:(id)a2 progressBlock:(id /* block */)a3;
- (id)initWithPhotoLibrary:(id)a0 analytics:(id)a1 progressBlock:(id /* block */)a2;
- (void)invalidatePersistentCaches;
- (void)invalidateTransientCaches;
- (BOOL)isReadyWithError:(id *)a0;
- (void)matchWithVisualFormat:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)mePersonContactIdentifierDidChangeWithGraphUpdate:(id)a0;
- (id)memoryDebugInformationWithMoments:(id)a0 meaningLabels:(id)a1;
- (id)momentLocalIdentifiersInDateInterval:(id)a0 error:(id *)a1;
- (id)musicCurationInflationContextWithInflationOptions:(id)a0 error:(id *)a1;
- (id)musicCuratorContextWithCurationOptions:(id)a0 error:(id *)a1;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(id /* block */)a0;
- (id)recentFrequentLocationRegions;
- (void)regenerateMemoriesOfCategory:(unsigned long long)a0 progressReporter:(id)a1 completionBlock:(id /* block */)a2;
- (void)registerCoalescingBlockWhenGraphAnalysisFinishes:(id /* block */)a0;
- (id)relatedDebugInformationBetweenAsset:(id)a0 andRelatedAssetCollection:(id)a1 relatedType:(unsigned long long)a2 curationContext:(id)a3;
- (id)relatedDebugInformationBetweenReferenceAssetCollection:(id)a0 andRelatedAssetCollection:(id)a1 relatedType:(unsigned long long)a2 curationContext:(id)a3;
- (id)relationshipInferencesForPersonLocalIdentifiers:(id)a0;
- (id)requestGraleSemanticLabelPropagationWithError:(id *)a0;
- (id)searchKeywordsByEventWithUUIDs:(id)a0 ofType:(unsigned long long)a1 progressReporter:(id)a2;
- (id)searchMetadataWithOptions:(id)a0 progressReporter:(id)a1;
- (id)searchSynonymsDictionariesWithProgressReporter:(id)a0;
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 progressReporter:(id)a3;
- (void)setGraphInfoDateOfLastIncrementalUpdateInvocationWithDate:(id)a0 completionBlock:(id /* block */)a1;
- (id)sharingMessageSuggestionDebugInformationForAssetCollection:(id)a0;
- (id)sharingSuggestionDebugInformationForSuggestion:(id)a0;
- (id)socialGroupsOverlappingMemberLocalIdentifiers:(id)a0;
- (id)sortedArrayForPersonLocalIdentifiers:(id)a0;
- (id)statisticsWithTypeStrings:(id)a0;
- (id)suggestedContributionsForAssetsMetadata:(id)a0;
- (id)suggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)suggestedPersonsForHome;
- (id)suggestedPersonsForSharedLibraryContentInclusion;
- (id)suggestedPersonsForSharedLibraryParticipants;
- (id)suggestedRecipientsForAssetLocalIdentifiers:(id)a0 momentLocalIdentifiers:(id)a1 sharingOptions:(id)a2;
- (BOOL)suggestsToStartSharedLibraryWithError:(id *)a0;
- (id)summaryOfInferencesPerMomentByLocalIdentifiers:(id)a0 error:(id *)a1;
- (id)summaryOfInferencesPerMomentInDateInterval:(id)a0 error:(id *)a1;
- (id)textFeaturesForMomentLocalIdentifiers:(id)a0;
- (double)timeIntervalSinceLastGraphFullRebuild;
- (id)titleTupleForAssetCollection:(id)a0 format:(long long)a1 error:(id *)a2;
- (id)titleTupleForMomentList:(id)a0 format:(long long)a1 error:(id *)a2;
- (id)titleTupleForPersonLocalIdentifiers:(id)a0 format:(long long)a1 error:(id *)a2;
- (id)utilityAssetInformation;
- (void)validateGraphConsistencyIfNeededWithProgressBlock:(id /* block */)a0;
- (long long)validatePHObject:(id)a0 featureAggregationValidator:(id)a1 assetFetchOptionPropertySet:(id)a2 error:(id *)a3;
- (long long)validatePHObject:(id)a0 graphRelationsFeatureValidator:(id)a1 error:(id *)a2;
- (void)waitUntilFinishedUsingBlock:(id /* block */)a0;
- (id)workingContext;
- (id)workingContextForEnrichment;
- (id)workingContextForExternalRelevance;
- (id)workingContextForMemories;
- (id)workingContextForRelated;
- (id)workingContextForSuggestions;
- (id)workingContextForUpNext;
- (id)zeroKeywordsWithOptions:(id)a0 progressReporter:(id)a1;
- (id)_behavioralStatisticsWithGraph:(id)a0;
- (id)_momentNodesFromMemory:(id)a0 inGraph:(id)a1;
- (double)libraryDuration;
- (id)UUIDForMoment:(id)a0;
- (BOOL)_addressesDidChangeBetweenAddressesInGraph:(id)a0 andAddressesInContacts:(id)a1 addressType:(unsigned long long)a2 person:(id)a3 graph:(id)a4;
- (id)_changingPropertyKeysForPersonProperties:(id)a0 andPersonContactProperties:(id)a1;
- (id)_checkConsistencyOfGraph:(id)a0;
- (id)_collectionStatisticsForCurrentPhotoLibrary;
- (id)_curationDebugInformationForHighlight:(id)a0 options:(id)a1;
- (id)_dayOfWeekStatisticsWithGraph:(id)a0;
- (id)_debugInformationForRelated:(id)a0 referenceKeywords:(id)a1 andRelatedMoment:(id)a2 relatedType:(unsigned long long)a3 curationContext:(id)a4;
- (id)_defaultStatisticsWithGraph:(id)a0 verbose:(BOOL)a1 forDiagnostics:(BOOL)a2;
- (id)_diagnosticSummaryInfoForMemory:(id)a0;
- (id)_domainLabelCountStatisticsWithGraph:(id)a0;
- (id)_entityTagsStatistics:(id)a0;
- (id)_extractDatesAndAssetCountsFromMemory:(id)a0;
- (id)_extractYearStatsFromOrderedCollectionFetchResults:(id)a0 fetchOptions:(id)a1 yearEntryKey:(id)a2 numberOfYearsEntryKey:(id)a3;
- (id)_fallbackCurationOfLength:(unsigned long long)a0 forMemory:(id)a1 customDuration:(double)a2 curationContext:(id)a3;
- (id)_featureNodesForEncodedFeatures:(id)a0 inGraph:(id)a1;
- (id)_fetchResultMatchingInternalPredicate:(id)a0;
- (id)_getDefaultOutputPathForMetadataSnapshot;
- (id)_highlightEstimatesStatisticsWithCurationContext:(id)a0;
- (id)_highlightTitleStatisticsWithGraph:(id)a0 titleGenerationContext:(id)a1;
- (id)_homeWorkNodesByPersonNodeForContactIdentifiers:(id)a0 inGraph:(id)a1;
- (id)_interestingStatisticsWithGraph:(id)a0;
- (void)_invalidatePersistentCaches;
- (void)_invalidatePersistentCachesBeforeDateWithTimestamp:(double)a0;
- (void)_invalidatePersistentCachesForGeoServiceProviderChange;
- (void)_invalidateTransientCaches;
- (BOOL)_isReadyWithError:(id *)a0;
- (id)_mobilityStatisticsWithGraph:(id)a0;
- (id)_momentsStatisticsForCurrentPhotoLibrary;
- (id)_moodStatisticsWithGraph:(id)a0;
- (unsigned long long)_numberOfAssetsMatchingInternalPredicate:(id)a0;
- (unsigned long long)_numberOfFamilyHolidayMomentsWithGraph:(id)a0;
- (unsigned long long)_numberOfMomentsOverWeekendsWithGraph:(id)a0;
- (unsigned long long)_numberOfNightOutMomentsWithGraph:(id)a0;
- (id)_oneOnOneTripsWithGraph:(id)a0;
- (id)_partOfDayStatisticsWithGraph:(id)a0 titleGenerationContext:(id)a1;
- (id)_peopleNameBiologicalSexStatisticsWithGraph:(id)a0;
- (id)_peopleRelationshipsStatisticsWithGraph:(id)a0 includingDebugInfo:(BOOL)a1;
- (id)_peopleVisionAgeStatisticsWithGraph:(id)a0;
- (id)_peopleVisionBiologicalSexStatisticsWithGraph:(id)a0;
- (id)_poiStatisticsWithGraph:(id)a0;
- (void)_precachePersonsInformationFromGraph:(id)a0 progressBlock:(id /* block */)a1;
- (id)_recentlyUsedSongAdamIDsFromCurationOptions:(id)a0;
- (id)_sanitizeGraphDataDictionaryForArchiving:(id)a0 referencedMemory:(id)a1;
- (unsigned long long)_sexHintForGivenNameOfContactForIdentifier:(id)a0 inGraph:(id)a1;
- (id)_sharedLibraryStatistics:(id)a0;
- (id)_snapshotFilenameForLookupKey:(id)a0;
- (id)_socialGroupsDebugStatistics:(id)a0;
- (id)_socialGroupsDebugStringIncludingMeNode:(BOOL)a0 withGraph:(id)a1;
- (id)_socialGroupsDebugStringWithGraph:(id)a0;
- (id)_socialGroupsStatistics:(id)a0;
- (id)_sortedTextFeaturesFromTextFeatures:(id)a0;
- (id)_stringDescriptionForBusinessItemsWithGraph:(id)a0 includingInferredThroughPublicEvents:(BOOL)a1 verbose:(BOOL)a2;
- (id)_stringDescriptionForDisambiguatedLocationsWithGraph:(id)a0;
- (id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)a0;
- (id)_stringDescriptionForInterestingAreas:(id)a0;
- (id)_stringDescriptionForInterestingCities:(id)a0;
- (id)_stringDescriptionForLanguagesWithGraph:(id)a0;
- (id)_stringDescriptionForLocationsWithGraph:(id)a0;
- (id)_stringDescriptionForMeNode:(id)a0;
- (id)_stringDescriptionForMeaningfulEvents:(id)a0 isTrip:(BOOL)a1 forDiagnostics:(BOOL)a2 titleGenerationContext:(id)a3;
- (id)_stringDescriptionForMemoriesNotification;
- (id)_stringDescriptionForMusicWithGraph:(id)a0 summaryOnly:(BOOL)a1;
- (id)_stringDescriptionForPeopleEventsWithGraph:(id)a0;
- (id)_stringDescriptionForPetsWithGraph:(id)a0;
- (id)_stringDescriptionForPublicEventsWithGraph:(id)a0 verbose:(BOOL)a1;
- (id)_stringDescriptionForSocialGroups:(id)a0 includeImportance:(BOOL)a1;
- (id)_stringDescriptionForUrbanCities:(id)a0;
- (id)_summaryOfInferencesForMomentNodes:(id)a0 inGraph:(id)a1;
- (BOOL)_supportsSemanticalDedupingForMemory:(id)a0;
- (id)_titleStatisticsWithGraph:(id)a0 titleGenerationContext:(id)a1;
- (void)_unloadGraph;
- (void)_waitGraphUntilFinishedUsingBlock:(id /* block */)a0;
- (void)_waitLibraryUpdateUntilFinishedUsingBlock:(id /* block */)a0;
- (id)_yearsStatisticsForCurrentPhotoLibrary;
- (BOOL)canProceedWithFullGraphRebuildStamp:(_Atomic unsigned long long)a0;
- (id)clsPersonByContactIdentifierWithPersonContactIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (void)commonInitWithPhotoLibrary:(id)a0 progressBlock:(id /* block */)a1;
- (_Atomic unsigned long long)currentFullGraphRebuildStamp;
- (BOOL)date:(id)a0 isEqualToDate:(id)a1;
- (id)defaultPeopleClustersExportIntermediatePath;
- (BOOL)destroyValidationGraph;
- (id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;
- (id)fastGraphExportFullPath;
- (id)graphAndAlgorithmVersionsWithGraph:(id)a0;
- (id)graphForLibraryFullAnalysisAtURL:(id)a0 alreadyIngestedMomentIdentifiers:(id *)a1 alreadyIngestedHighlightIdentifiers:(id *)a2 progressBlock:(id /* block */)a3 error:(id *)a4;
- (BOOL)graphIsUsable:(id)a0 error:(id *)a1;
- (id)graphPersistenceParentDirectoryCandidateURLs;
- (id)graphPersistentStoreURL;
- (double)graphScoreForMoment:(id)a0;
- (BOOL)hasPendingGraphAccess;
- (BOOL)homeWorkAddressesDidChangeForPersonInContact:(id)a0 andPersonNode:(id)a1 withHomeWorkNodesByPersonNode:(id)a2 graph:(id)a3;
- (unsigned int)identifierForMoment:(id)a0;
- (id)initWithGraph:(id)a0 photoLibrary:(id)a1;
- (id)initWithGraph:(id)a0 readonlyPhotoLibrary:(id)a1;
- (id)initWithImmutableGraph:(id)a0;
- (id)initWithImmutableGraph:(id)a0 photoLibrary:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithReadonlyPhotoLibrary:(id)a0;
- (id)instantiateMutableGraphWithError:(id *)a0;
- (BOOL)isInterestingForMoment:(id)a0;
- (BOOL)isSmartInterestingForMoment:(id)a0;
- (id)keywordsForAsset:(id)a0 relatedType:(unsigned long long)a1;
- (id)keywordsForAssetCollection:(id)a0 relatedType:(unsigned long long)a1;
- (id)keywordsForMomentNodeName:(id)a0 relatedType:(unsigned long long)a1;
- (void)legacyPerformAsynchronousBarrierGraphWriteUsingBlock:(id /* block */)a0;
- (id)libraryStatisticsForCurrentPhotoLibrary;
- (void)loadGraphWithProgressBlock:(id /* block */)a0;
- (void)matchWithVisualFormat:(id)a0 elements:(id)a1 usingBlock:(id /* block */)a2;
- (id)maximalSocialGroupsOverlappingMemberLocalIdentifiers:(id)a0;
- (unsigned long long)medianValueFromUnsignedItegerArray:(id)a0;
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)a0 error:(id *)a1;
- (double)neighborScoreForMoment:(id)a0;
- (id)newSearchComputationCache;
- (void)notifyCoalescingBlocksGraphAnalysisFinished:(BOOL)a0 error:(id)a1;
- (void)performAsynchronousGraphBarrierUsingBlock:(id /* block */)a0;
- (void)performAsynchronousGraphWriteUsingBlock:(id /* block */)a0;
- (void)performAsynchronousNotification:(id /* block */)a0;
- (void)performFullLibraryAnalysisInGraph:(id)a0 withRecipe:(id)a1 withAlreadyIngestedMomentIdentifiers:(id)a2 alreadyIngestedHighlightIdentifiers:(id)a3 processedGraphUpdate:(id *)a4 progressBlock:(id /* block */)a5;
- (long long)performLibraryAnalysisWithGraphURL:(id)a0 withRecipe:(id)a1 processedGraphUpdate:(id *)a2 progressBlock:(id /* block */)a3;
- (id)performerIdentifiersForMomentUUIDs:(id)a0;
- (id)processSubdirectoryName;
- (void)reportMetricsLogWithConsistencyCheckResult:(id)a0 loggingConnection:(id)a1;
- (BOOL)requiresReadOnly;
- (void)setGraphPersistentStoreURL:(id)a0;
- (void)setMutableGraph:(id)a0;
- (BOOL)shouldValidateGraphConsistency;
- (void)stampFullGraphRebuild;
- (void)startGraphUpdate:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)startLibraryAnalysis:(id /* block */)a0 keepExistingGraph:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)startLibraryAnalysisWithRecipe:(id)a0 progressBlock:(id /* block */)a1 keepExistingGraph:(BOOL)a2 completionBlock:(id /* block */)a3;
- (BOOL)swapInGraphAtURL:(id)a0 progressBlock:(id /* block */)a1 error:(id *)a2;
- (double)targetCurationDurationWithCurationLength:(unsigned long long)a0 customDuration:(double)a1;
- (id)titleTupleForAlbum:(id)a0 format:(long long)a1 error:(id *)a2;
- (id)titleTupleForMoment:(id)a0 format:(long long)a1 error:(id *)a2;
- (void)unloadGraph;
- (BOOL)updateGraph:(id)a0 withGraphUpdate:(id)a1 withRecipe:(id)a2 progressBlock:(id /* block */)a3;
- (void)updateGraphWithRecipe:(id)a0 keepExistingGraph:(BOOL)a1 progressBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)workingContextForGraphConsistencyCheck;
- (id)workingContextForMetrics;

@end
