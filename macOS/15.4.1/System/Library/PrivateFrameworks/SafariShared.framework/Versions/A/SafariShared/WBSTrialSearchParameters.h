@class NSArray, NSString, NSNumber;

@interface WBSTrialSearchParameters : NSObject <WBSSearchEnginePreferenceObserverDelegate, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *searchParameters;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isProvider1Enabled;
@property (readonly, nonatomic) BOOL isProvider2Enabled;
@property (nonatomic) BOOL isCFSearch;
@property (nonatomic) BOOL isForVoiceSearch;
@property (nonatomic) BOOL isResultFilteringDisabled;
@property (nonatomic) BOOL isDedupeThroughAlternativeURLsEnabled;
@property (nonatomic) BOOL strengthenAutocompleteTriggerExtensionMatching;
@property (nonatomic) BOOL enableCompletionListHistoryDeduplicationValue;
@property (nonatomic) BOOL enableCompletionListHistoryDeduplicationSwitchToTabValue;
@property (nonatomic) long long characterThresholdForAnywhereInTitleOrURL;
@property (nonatomic) double percentageThresholdForAnywhereInTitle;
@property (nonatomic) double percentageThresholdForAnywhereInURL;
@property (nonatomic) long long characterThresholdForStartOfURLPathComponent;
@property (nonatomic) long long matchingWordsInTitleThreshold;
@property (nonatomic) long long characterThresholdForStartOfTitle;
@property (nonatomic) long long characterThresholdForStartOfTitleWord;
@property (nonatomic) long long characterThresholdForStartOfTitleWordMatchLongEnoughForTopHit;
@property (nonatomic) long long characterThresholdForStartOfURL;
@property (nonatomic) double normalizedTopSitesScoreAndVisitCountMultiplier;
@property (nonatomic) long long maxBookmarksAndHistoryItems;
@property (readonly, nonatomic) long long thresholdForHidingIgnoredSiriSuggestedSites;
@property (readonly, nonatomic) BOOL shouldHideIgnoredSiriSuggestedSites;
@property (readonly, nonatomic) NSString *codepathIDs;
@property (readonly, nonatomic) BOOL shouldEmitTriggerLoggingForHidingIgnoredSiriSuggestedWebsite;
@property (readonly, nonatomic) BOOL isPostFixSuggestionsEnabled;
@property (readonly, nonatomic) NSNumber *prefixNavigationalIntentThreshold;
@property (readonly, nonatomic) BOOL checkServerCompletionForPrefixNavigationalIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)codePathUUIDForHideIgnoredSiriSuggestedWebsites;
+ (id)getSearchParametersHelper:(id)a0 withTrial:(id)a1 withCache:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPreferences:(id)a0;
- (id)initWithTrial:(BOOL)a0 forPrefs:(id)a1 forTrial:(id)a2;
- (BOOL)isDuckDuckGoABEnabledForSearchEnginePreferenceObserver:(id)a0;
- (BOOL)isGoogleABEnabledForSearchEnginePreferenceObserver:(id)a0;
- (void)updateUsingPreferenceKeys:(id)a0;
- (void)updateWithDefaults;
- (void)updateWithTrial:(BOOL)a0 forTrial:(id)a1;

@end
