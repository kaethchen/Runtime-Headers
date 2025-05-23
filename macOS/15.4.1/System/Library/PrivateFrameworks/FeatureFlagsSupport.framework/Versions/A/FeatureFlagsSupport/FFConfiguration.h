@class NSMutableDictionary, FFPlistParser, NSSet, NSArray, NSMutableArray, NSMutableSet;
@protocol FFBuildVersionGetter, FFParseErrorReporter, FFFileReader, FFSafeModeChecker, FFFileWriter;

@interface FFConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSArray *searchPaths;
    NSMutableSet *_domains;
    NSMutableDictionary *configByLevelIndex[2][8];
    NSMutableDictionary *metaByLevelIndex[8];
    NSMutableSet *disclosuresByLevelIndex[8];
    NSMutableDictionary *featureSetsMetaByLevelIndex[8];
    NSMutableSet *enabledFeatureSetsByLevelIndex[8];
    NSMutableDictionary *enabledFeatureSetsAtLevelIndexByGroup[8];
    NSMutableDictionary *definedFeatureSets;
    NSMutableDictionary *definedFeatureGroups;
    NSMutableDictionary *subscriptionsMetaByLevelIndex[8];
    NSMutableArray *subscriptionsByLevelIndex[8];
}

@property (class, readonly, nonatomic) FFConfiguration *shared;

@property (retain, nonatomic) id<FFFileWriter> filewriter;
@property (retain, nonatomic) id<FFFileReader> filereader;
@property (retain, nonatomic) id<FFParseErrorReporter> parseerrorreporter;
@property (retain, nonatomic) FFPlistParser *plistparser;
@property (retain, nonatomic) id<FFSafeModeChecker> safemodechecker;
@property (retain, nonatomic) id<FFBuildVersionGetter> buildVersionGetter;
@property (retain, nonatomic) NSMutableArray *profilePayloads;
@property (readonly, nonatomic) NSSet *domains;

+ (BOOL)isValidName:(id)a0;
+ (id)_configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1 buildVersionGetter:(id)a2 parseErrorReporter:(id)a3 safeModeChecker:(id)a4;
+ (id)configurationForProfileManagement;
+ (id)configurationForTestingWithFileReader:(id)a0;
+ (id)configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1;
+ (id)configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1 buildVersionGetter:(id)a2;
+ (id)configurationForTestingWithFileReader:(id)a0 parseErrorReporter:(id)a1;
+ (id)configurationForTestingWithFileReader:(id)a0 parseErrorReporter:(id)a1 safeModeChecker:(id)a2;
+ (id)configurationForTestingWithFileWriter:(id)a0;
+ (BOOL)isValidDisclosureName:(id)a0;

- (void).cxx_destruct;
- (void)invalidateCache;
- (BOOL)reset:(id *)a0;
- (id)initPrivate;
- (BOOL)commitUpdates:(id *)a0;
- (BOOL)isValidName:(id)a0;
- (BOOL)resetDomain:(id)a0 error:(id *)a1;
- (id)stateForFeature:(id)a0 domain:(id)a1;
- (id)stateForFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)clearCachedData;
- (id)featuresForDomainAlreadyLocked:(id)a0;
- (id)currentDisclosuresAtLevelIndex:(unsigned long long)a0;
- (id)fileURLForLevelIndex:(unsigned long long)a0 pathIndex:(int)a1;
- (void)recalculateFeatureSetEffectsAt:(unsigned long long)a0;
- (id)resolvedStateForFeature:(id)a0 domain:(id)a1;
- (void)unsetFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (void)_enableFeatureSetAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (long long)_resolvedValueForFeatureSet:(id)a0;
- (void)_unsetFeatureSetAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (long long)_valueForFeatureSet:(id)a0 atLevel:(long long)a1;
- (void)addDisclosure:(id)a0 atLevel:(long long)a1;
- (void)addDisclosureAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (void)addFeaturesForDomain:(id)a0 pathIndex:(int)a1 fromURL:(id)a2;
- (BOOL)addProfilePayload:(id)a0 error:(id *)a1;
- (void)addSubscription:(id)a0 atLevel:(long long)a1;
- (void)addSubscriptionAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (id)allFeatureGroups;
- (id)allSubscriptionsAtLevel:(long long)a0;
- (id)attributesForFeatureGroup:(id)a0;
- (BOOL)commitProfilePayloadsAndReturnError:(id *)a0;
- (void)createMutableDomainConfig:(id)a0 levelIndex:(unsigned long long)a1;
- (id)currentDisclosures;
- (id)currentDisclosuresAtLevel:(long long)a0;
- (id)defaultStateForFeature:(id)a0 domain:(id)a1;
- (id)definedFeatureGroupsFilteredByCurrentDisclosures;
- (id)definedFeatureSetsFilteredByCurrentDisclosures;
- (void)disableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)disableFeature:(id)a0 domain:(id)a1 level:(long long)a2 transient:(BOOL)a3;
- (void)disableFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (void)disableFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2 transient:(BOOL)a3;
- (void)disableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (id)disclosureFileURLForLevelIndex:(unsigned long long)a0 pathIndex:(int)a1;
- (id)disclosureForFeature:(id)a0 domain:(id)a1;
- (id)disclosureForFeatureGroup:(id)a0;
- (id)effectiveStateForFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (void)enableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)enableFeature:(id)a0 domain:(id)a1 level:(long long)a2 transient:(BOOL)a3;
- (void)enableFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (void)enableFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2 transient:(BOOL)a3;
- (void)enableFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (void)enableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (id)featureFlagsInSet:(id)a0 inGroup:(id)a1;
- (id)featureSetsFileURLForLevelIndex:(unsigned long long)a0;
- (id)featureSetsInGroup:(id)a0;
- (id)featuresForDomain:(id)a0;
- (id)fileURLForDomain:(id)a0 pathIndex:(int)a1;
- (id)initPrivateForBootTask;
- (id)internalDisclosureFileURLForLevelIndex:(unsigned long long)a0;
- (BOOL)isFeatureHidden:(id)a0 domain:(id)a1;
- (BOOL)isSafeMode;
- (BOOL)isValidDisclosureName:(id)a0;
- (void)loadAllData;
- (void)loadAllLevelsForDomain:(id)a0;
- (void)loadCombinedDataForLevelIndex:(unsigned long long)a0;
- (void)loadDomain:(id)a0 levelIndex:(unsigned long long)a1;
- (void)loadFeatureSetDataForLevelIndex:(unsigned long long)a0;
- (void)loadFeatureSetDefinitions;
- (void)loadFeatureSetDefinitionsNamed:(id)a0 fromURL:(id)a1;
- (void)loadSubscriptionDataForLevelIndex:(unsigned long long)a0;
- (id)makeFeatureDictionaryFrom:(id)a0 forDomain:(id)a1 atDomainLevel:(BOOL)a2 reportableFilename:(id)a3;
- (id)mutableDisclosureSetAtLevelIndex:(unsigned long long)a0;
- (id)parseSubscriptionsDictionary:(id)a0;
- (BOOL)phaseShouldBeEnabledByDefault:(id)a0;
- (void)populateDictionary:(id)a0 withFeatures:(id)a1;
- (void)prepareToAddProfilePayloads;
- (void)recalculateSubscriptionEffectsAt:(unsigned long long)a0;
- (void)removeAllDisclosuresAtLevelIndex:(unsigned long long)a0;
- (void)removeAllFeatureSetDataAtLevelIndex:(unsigned long long)a0;
- (void)removeAllSubscriptionsAtLevelIndex:(unsigned long long)a0;
- (void)removeDisclosure:(id)a0 atLevel:(long long)a1;
- (void)removeDisclosure:(id)a0 atLevelIndex:(unsigned long long)a1;
- (void)removeSubscription:(id)a0 atLevel:(long long)a1;
- (void)reportParseError:(id)a0 severity:(id)a1 whileParsingKey:(id)a2 inContext:(id)a3 inFile:(id)a4;
- (BOOL)resolvedStateForDisclosure:(id)a0;
- (long long)resolvedValueForFeatureSet:(id)a0 inGroup:(id)a1;
- (void)setFeaturesMatchingAttribute:(id)a0 levelIndex:(unsigned long long)a1 value:(long long)a2;
- (void)setValue:(long long)a0 feature:(id)a1 domain:(id)a2 levelIndex:(unsigned long long)a3;
- (void)setValue:(long long)a0 feature:(id)a1 domain:(id)a2 levelIndex:(unsigned long long)a3 buildVersion:(id)a4;
- (unsigned int)sortValueForPhase:(id)a0;
- (id)subscriptionsFileURLForLevelIndex:(unsigned long long)a0;
- (void)unsetFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)unsetFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (void)unsetFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (void)validateName:(id)a0;
- (long long)valueForFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (BOOL)writeCombinedUpdates:(id *)a0;
- (BOOL)writeCombinedUpdatesAtLevelIndex:(unsigned long long)a0 error:(id *)a1;
- (BOOL)writeDisclosureUpdates:(id *)a0;
- (BOOL)writeDisclosureUpdatesAtlevelIndex:(unsigned long long)a0 error:(id *)a1;
- (BOOL)writeDomainUpdates:(id *)a0;
- (BOOL)writeFeatureSetUpdates:(id *)a0;
- (BOOL)writeFeatureSetUpdatesAtLevelIndex:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)writeSubscriptionUpdates:(id *)a0;
- (BOOL)writeSubscriptionUpdatesAtLevelIndex:(unsigned long long)a0 withError:(id *)a1;

@end
