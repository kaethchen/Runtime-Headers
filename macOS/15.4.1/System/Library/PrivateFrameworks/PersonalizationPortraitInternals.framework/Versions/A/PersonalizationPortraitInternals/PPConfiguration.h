@class _PASNotificationToken, _PASLRUCache, PPTrialWrapper, _PASLock;

@interface PPConfiguration : NSObject {
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateHandlerToken;
    _PASLRUCache *_cachedAlgorithms;
    PPTrialWrapper *_trialWrapper;
}

+ (id)sharedInstance;
+ (void)reload;

- (void).cxx_destruct;
- (double)scoreThreshold;
- (BOOL)isMultilingual;
- (float)feedbackSessionLogsSamplingRate;
- (double)mapsSearchQueryFromDateInterval;
- (unsigned long long)maxUniqueTokensInECRTokenCounts;
- (double)namedEntityDecayHalfLifeSeconds;
- (unsigned int)socialHighlightMaxNumHighlights;
- (id)_algorithmsForNode:(id)a0 bundleId:(id)a1 customRules:(id)a2;
- (id)_algorithmsToDelete:(id)a0 bundleId:(id)a1 customRules:(id)a2;
- (void)_loadConfigParams;
- (void)_loadContactsConfigParams;
- (void)_loadContactsConfigParamsWithGuardedData:(id)a0;
- (void)_loadGlobalConfigParams;
- (void)_loadGlobalConfigParamsWithGuardedData:(id)a0;
- (void)_loadLocationsConfigParams;
- (void)_loadLocationsConfigParamsWithGuardedData:(id)a0;
- (void)_loadNamedEntitiesConfigParams;
- (void)_loadNamedEntitiesConfigParamsWithGuardedData:(id)a0;
- (void)_loadQuickTypeConfigParams;
- (void)_loadQuickTypeConfigParamsWithGuardedData:(id)a0;
- (void)_loadSocialHighlightConfigParams;
- (void)_loadSocialHighlightConfigParamsWithGuardedData:(id)a0;
- (void)_loadTopicsConfigParams;
- (void)_loadTopicsConfigParamsWithGuardedData:(id)a0;
- (void)_loadUniversalSearchConfigParams;
- (void)_loadUniversalSearchConfigParamsWithGuardedData:(id)a0;
- (id)_mapAlgorithmNamesToNumbers:(id)a0 domain:(unsigned char)a1;
- (id)availablePortraitVariantNames;
- (id)contactsLabelScoringMap;
- (unsigned char)customTaggerMaxTokenCount;
- (double)decayedFeedbackCountsHalfLifeDays;
- (id)differentiallyPrivateEntityLogLevels;
- (BOOL)enableECRMessageTokenCountsPlugin;
- (id)engagementKValues;
- (id)extractionAlgorithmsForBundleId:(id)a0 sourceLanguage:(id)a1 conservative:(BOOL)a2 domain:(unsigned char)a3;
- (float)feedbackSessionLogsExtractionsSamplingRate;
- (int)feedbackSessionLogsGeohashLength;
- (id)feedbackSessionLogsSamplingRateOverrides;
- (BOOL)flattenNamedEntitiesForCoreML;
- (BOOL)flattenTopicsForCoreML;
- (double)halfValuePosition;
- (id)hyperparametersForMappingId:(id)a0;
- (id)initWithTrialWrapper:(id)a0;
- (double)locationDecayHalfLifeSeconds;
- (BOOL)locationFeedbackUsesCoreML;
- (BOOL)locationScoringUsesCoreML;
- (BOOL)locationScoringUsesHybrid;
- (unsigned int)mapsSearchQueryLimit;
- (double)maxEmailHarvestingEligiblityInterval;
- (unsigned int)maxItemsInFeatureDictionary;
- (unsigned int)maxNEExtractions;
- (int)maxNumberMappedTopics;
- (int)maxNumberNamedEntities;
- (unsigned int)maxRelevantHighlightContacts;
- (BOOL)namedEntityFeedbackUsesCoreML;
- (unsigned int)namedEntityLoadAndMonitorInitialLoadLimit;
- (BOOL)namedEntityScoringUsesCoreML;
- (BOOL)namedEntityScoringUsesHybrid;
- (id)naturalPortraitVariantName;
- (unsigned int)navigationMinimumDistanceInMeters;
- (double)navigationMinimumTimeInterval;
- (unsigned char)nextEventsFuzzMinutes;
- (double)nonReaderTextWeight;
- (BOOL)notificationExtractionEnabled;
- (unsigned char)peopleSuggesterMax;
- (int)portraitAnalyticsMaximumNumberOfRecords;
- (double)portraitAnalyticsSamplingRate;
- (id)portraitMusicDataCollectionAMPBundleIds;
- (BOOL)portraitMusicDataCollectionCollectNonAMPNowPlaying;
- (int)portraitMusicDataCollectionMaximumRecordsPerType;
- (double)portraitMusicDataCollectionSamplingRateForAMP;
- (double)portraitMusicDataCollectionSamplingRateForCTS;
- (id)portraitVariantName;
- (int)queryTimeNextFromMinutes;
- (unsigned int)queryTimeNextToMinutes;
- (unsigned int)queryTimeOtherToMinutes;
- (float)recordSourceContactsInitialScore;
- (float)recordSourceNonContactsInitialScore;
- (float)remoteTopicsMultiplier;
- (double)routineExtractionScoreCountWeight;
- (double)routineExtractionScoreDecayHalfLifeDays;
- (double)routineExtractionScoreDurationWeight;
- (BOOL)safariDataDetectorsEnabledForHighMemoryDevices;
- (BOOL)safariDonationTitleExtractionEnabled;
- (float)scoreThresholdForLocation;
- (float)scoreThresholdForNamedEntity;
- (float)scoreThresholdForTopic;
- (unsigned long long)sentenceEmbeddingVersion;
- (BOOL)skipInsignificantEmailExtractions;
- (double)socialHighlightCacheTimeoutInterval;
- (double)socialHighlightDecayInterval;
- (double)socialHighlightFeedbackDeletionInterval;
- (double)socialHighlightMetricReportingInterval;
- (double)socialHighlightRankedStorageMaxAge;
- (unsigned int)socialHighlightTopKCount;
- (id)sportsMetricsEventName;
- (int)sportsMetricsNumberOfLeaguesLogged;
- (int)sportsMetricsNumberOfTeamsLogged;
- (double)sportsMetricsSamplingRate;
- (BOOL)storeNewExtractions;
- (id)topicCalibrationTrie;
- (double)topicDecayHalfLifeSeconds;
- (BOOL)topicFeedbackUsesCoreML;
- (double)topicMappingCoreMLThreshold;
- (BOOL)topicMappingUsesCoreML;
- (BOOL)topicScoringUsesCoreML;
- (BOOL)topicScoringUsesHybrid;
- (float)topicsMultiplierForBundleId:(id)a0 algorithm:(unsigned long long)a1;
- (id)trialWrapperReloadingIfNeeded;
- (BOOL)use2StageScoreInterpreterForLocationScoring;
- (BOOL)use2StageScoreInterpreterForNEScoring;
- (BOOL)use2StageScoreInterpreterForTPScoring;
- (BOOL)useCachedPortraitScores;
- (BOOL)useRawNEExtractionScores;

@end
