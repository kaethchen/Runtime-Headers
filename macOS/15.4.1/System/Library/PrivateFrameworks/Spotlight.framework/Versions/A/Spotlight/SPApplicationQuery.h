@class NSString, NSArray, PRSRankingItemRanker, SPMetadataPattern;

@interface SPApplicationQuery : SPKQuery {
    struct __MDAppRankEvaluator { } *_appRankEvaluator;
    NSString *_filterQuery;
    NSArray *_rankingPatterns;
    PRSRankingItemRanker *_ranker;
}

@property (readonly) NSString *queryString;
@property (readonly) SPMetadataPattern *queryPattern;
@property BOOL isFuzzy;

+ (void)initialize;
+ (void)boost;
+ (void)unboost;
+ (void)writeAppsToFlatFileForColdStart;
+ (id)_applicationQueryUpdateDisplayNamesForResult:(id)a0 withAttributes:(id)a1;
+ (void)_createApplicationsQuery;
+ (void)_displayNamePreferenceUpdated:(id)a0;
+ (void)_handleURLIsHiddenBySystemChangeNotification:(id)a0;
+ (id)appResultForPath:(id)a0;
+ (id)appToFastPathMapping;
+ (id)appToPathMapping;
+ (id)getAppDisplayNameList;
+ (id)getAppleApps;
+ (id)getAppleInternalApps;
+ (id)getAppleSystemApps;
+ (id)getFrequentlyUsedAppleInternalApps;
+ (id)getOrUpdateAppBundleIDList:(BOOL)a0;
+ (void)handleChangedItems:(id)a0 settings:(BOOL)a1;
+ (void)handleFoundItems:(id)a0 settings:(BOOL)a1;
+ (void)handleQueryDidFinish;
+ (void)handleRemovedItems:(id)a0 settings:(BOOL)a1;
+ (id)hiddenBySystemMapping;
+ (BOOL)isAppInExcludedList:(id)a0;
+ (BOOL)isAppleExternalApp:(id)a0;
+ (BOOL)isAppleInternalApp:(id)a0;
+ (BOOL)isAppleSystemApp:(id)a0;
+ (BOOL)isFrequentlyUsedAppleInternalApp:(id)a0;
+ (BOOL)isNonHomeDirectoryFilePath:(id)a0;
+ (BOOL)isNonRootVolumeNonHomeDirectoryContactResultWithFilePath:(id)a0 contentType:(id)a1;
+ (BOOL)isNonRootVolumePrefResultWithFilePath:(id)a0 bundleID:(id)a1 contentType:(id)a2 groupID:(id)a3;
+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (BOOL)isURLHiddenBySystem:(id)a0;
+ (void)loadFastAppsCache;
+ (void)readFlatFileForFastRetrievalAfterColdStart;
+ (unsigned int)searchDomain;
+ (void)setApplicationBundleIdentifierForAppResult:(id)a0;
+ (void)updateWithNewResults:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)prepareQuery:(BOOL)a0;
- (id)ranker;
- (void)setRankingQueries:(id)a0;
- (void)_applicationResultsDidUpdateNotification:(id)a0;
- (void)_registerForApplicationResultsUpdateNotification;
- (void)_sendFastFilteredResults;
- (void)_sendFilteredResponseOfKind:(int)a0;
- (void)_sendResponse:(id)a0;
- (void)_unregisterForApplicationResultsUpdateNotification;
- (unsigned __int128)calculateScoreForResult:(id)a0 withTextQuery:(id)a1;
- (id)filterResultsBasedOnDisplayName:(id)a0;
- (BOOL)isApplicationQuery;
- (BOOL)isCopyrightApple:(id)a0;
- (void)startWithFuzzyValue:(BOOL)a0;

@end
