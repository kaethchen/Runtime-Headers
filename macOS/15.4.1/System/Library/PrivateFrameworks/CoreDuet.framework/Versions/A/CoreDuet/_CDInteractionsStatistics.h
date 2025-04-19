@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface _CDInteractionsStatistics : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_features;
    NSMutableDictionary *_personsCountsForRealInteractions;
    NSMutableDictionary *_personsCountsForSyntheticInteractions;
    NSMutableDictionary *_personsSharedInPastPhotos;
    NSDictionary *_defaultValues;
    NSMutableSet *_hasSharePlayedWith;
    NSMutableDictionary *_appsSharedFromByConversationId;
}

@property (copy, nonatomic) NSDictionary *queryStats;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)properties;
- (id)conversationIds;
- (void)aggregateSum:(id)a0 resultFeatureName:(id)a1;
- (void)log:(id)a0 withBase:(double)a1 resultFeatureName:(id)a2;
- (void)_addConversationId:(id)a0;
- (id)bundleIdForConversationId:(id)a0;
- (void)computeCandidateLevelSignals;
- (void)computeFeatureForMethod:(id)a0 arguments:(id)a1;
- (void)computeFeaturesForRecipe:(id)a0;
- (void)computeNumberOfAppsSharedFromWithConversation;
- (void)computeNumberOfEngagedSuggestionsToTargetApp;
- (void)computeNumberOfFacesSharedWithConversation;
- (void)computeNumberOfSharesToTargetApp;
- (void)computePASSFeatureWithPeopleDetectedInPhoto:(id)a0;
- (void)computeSASSFeatureWithScenesDetectedInPhoto:(id)a0 andConfiguredScenes:(id)a1;
- (void)copyFeature:(id)a0 toFeatureName:(id)a1;
- (id)descriptionRedacted:(BOOL)a0;
- (void)divide:(id)a0 withDivisor:(id)a1 resultFeatureName:(id)a2;
- (void)exponential:(id)a0 withMultiplier:(double)a1 resultFeatureName:(id)a2;
- (id)features;
- (BOOL)hasEverSharePlayed:(id)a0;
- (void)imputeFeature:(id)a0 withConstant:(id)a1;
- (void)includeFeature:(id)a0 from:(id)a1;
- (void)incrementValueForFeature:(id)a0 andConversationId:(id)a1;
- (void)initFeature:(id)a0 withValue:(id)a1;
- (id)initWithDefaultValues:(id)a0;
- (id)initWithProperties:(id)a0 features:(id)a1 defaultValues:(id)a2;
- (BOOL)isUsingDefaultValue:(id)a0 forConversationId:(id)a1;
- (void)laplaceProbability:(id)a0 withAlpha:(double)a1 resultFeatureName:(id)a2;
- (void)multiply:(id)a0 with:(id)a1 resultFeatureName:(id)a2;
- (void)multiply:(id)a0 withMultiplier:(double)a1 resultFeatureName:(id)a2;
- (id)nonNilFeaturesForConversationId:(id)a0;
- (void)power:(id)a0 withExponent:(double)a1 resultFeatureName:(id)a2;
- (id)privatizedConversationId:(id)a0;
- (void)reciprocal:(id)a0 withOffset:(double)a1 resultFeatureName:(id)a2;
- (void)recordSharePlayInformation:(id)a0;
- (void)removeConversationIds:(id)a0;
- (void)renameFeature:(id)a0 withFeatureName:(id)a1;
- (void)saveAppSharedFrom:(id)a0 forConversationId:(id)a1;
- (void)savePersonId:(id)a0 forConversationId:(id)a1 forSyntheticInteraction:(BOOL)a2;
- (void)savePersonsInPhoto:(id)a0 forConversationId:(id)a1;
- (void)setValue:(id)a0 forFeature:(id)a1 andConversationId:(id)a2;
- (void)setValue:(id)a0 forProperty:(id)a1 andConversationId:(id)a2;
- (void)sum:(id)a0 with:(id)a1 resultFeatureName:(id)a2;
- (void)sum:(id)a0 withAddend:(double)a1 resultFeatureName:(id)a2;
- (id)valueForFeature:(id)a0 forConversationId:(id)a1;
- (id)valueForProperty:(id)a0 forConversationId:(id)a1;
- (id)valueOrDefaultValueForFeature:(id)a0 forConversationId:(id)a1;

@end
