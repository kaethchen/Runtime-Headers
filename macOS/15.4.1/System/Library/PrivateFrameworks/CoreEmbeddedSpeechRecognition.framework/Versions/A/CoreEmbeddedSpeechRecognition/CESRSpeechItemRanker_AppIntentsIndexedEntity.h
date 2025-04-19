@class NSMutableSet, NSMutableDictionary, CESRAppEntityConfig;

@interface CESRSpeechItemRanker_AppIntentsIndexedEntity : CESRSpeechItemRanker {
    NSMutableDictionary *_setDict;
    CESRAppEntityConfig *_appEntityConfig;
    BOOL _appEntityIngestionEnabled;
    NSMutableSet *_codepathIds;
    unsigned long long _numTotalEnrolled;
}

+ (BOOL)_appEntityIngestionEnabledForFeatureFlagStatus:(BOOL)a0 overallAppEntityLimit:(unsigned long long)a1;
+ (unsigned long long)_bundleQuotaFromAllocationStrategy:(unsigned long long)a0 remainingQuota:(unsigned long long)a1 numBundles:(unsigned long long)a2 transformedRelativeSize:(double)a3;
+ (BOOL)_isEntityAllowListed:(id)a0 bundleId:(id)a1 appEntityConfig:(id)a2;
+ (id)_itemCountsFromSetDict:(id)a0 appEntityConfig:(id)a1 numDonatingFirstPartyApps:(unsigned long long *)a2 numDonatingThirdPartyApps:(unsigned long long *)a3 totalNumEntitiesPresent:(unsigned long long *)a4 itemCountSum:(unsigned long long *)a5;
+ (void)_logAppEntitiesEnumeratedWithTotalNumEntitiesPresent:(unsigned long long)a0 numTotalAccepted:(unsigned long long)a1 numTotalRankedAccepted:(unsigned long long)a2 numTotalUnrankedAccepted:(unsigned long long)a3 numDonatingFirstPartyApps:(unsigned long long)a4 numDonatingThirdPartyApps:(unsigned long long)a5;
+ (void)_logAppEntityPartitionEnumeratedWithSourceBundleId:(id)a0 numEntitiesPresent:(unsigned long long)a1 numDistinctEntityTypes:(unsigned long long)a2 numEmptyTitleDisplayRepresentations:(unsigned long long)a3 numRankedEntitiesAccepted:(unsigned long long)a4 numUnrankedEntitiesAccepted:(unsigned long long)a5 numEntitiesRejected:(unsigned long long)a6 calculatedQuota:(unsigned long long)a7;
+ (BOOL)_shouldAcceptEntity:(id)a0 bundleId:(id)a1 appEntityConfig:(id)a2 entityTypes:(id)a3 numEntitiesRejected:(unsigned long long *)a4 numEmptyDisplayRepresentations:(unsigned long long *)a5;
+ (id)_transformedItemCountsFromItemCounts:(id)a0 transformationFunction:(unsigned long long)a1 transformationFunctionAlpha:(double)a2 transformedCountSum:(double *)a3;

- (void).cxx_destruct;
- (BOOL)addSet:(id)a0;
- (id)sets;
- (BOOL)hasSets;
- (BOOL)_interactionStoreContainsAppEntity:(id)a0;
- (void)_setAppEntityConfig:(id)a0;
- (void)_setAppEntityIngestionEnabled:(BOOL)a0;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)getActivatedCodepathIds;
- (id)getAllCodepathIds;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2;

@end
