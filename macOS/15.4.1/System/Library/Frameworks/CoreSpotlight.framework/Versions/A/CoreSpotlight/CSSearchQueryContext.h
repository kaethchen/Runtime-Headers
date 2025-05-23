@class NSData, NSAttributedString, NSArray, NSString, CSSuggestion, _MDQueryRewriteContext, NSDictionary, NSDate;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_fetchAttributes;
    struct __CFBitVector { } *_nonTopHitFetchAttributeIndexesBits;
    long long _topHitExtraFetchAttributeCount;
    long long _maxRankedResultCount;
    long long _maxSuggestionCount;
    long long _maxDenseResultCount;
    NSString *_clientBundleID;
    NSArray *_bundleIDs;
    NSArray *_additionalBundleIDs;
    NSArray *_instantAnswersBundleIDs;
    NSArray *_answerAttributes;
    NSArray *_rankingQueries;
    NSArray *_additionalQueries;
    NSArray *_instantAnswersQueries;
    NSArray *_preferredLanguages;
    NSArray *_markedTextArray;
    NSArray *_disableBundles;
    NSString *_filterQuery;
    NSString *_keyboardLanguage;
    NSString *_userQuery;
    long long _currentTokenScope;
    NSArray *_resultMatchingAttributes;
    CSSuggestion *_suggestion;
    int _rankingType;
    long long _strongRankingQueryCount;
    long long _dominantRankingQueryCount;
    long long _dominatedRankingQueryCount;
    long long _shortcutBit;
    long long _highMatchBit;
    long long _lowMatchBit;
    long long _highRecencyBit;
    long long _lowRecencyBit;
    long long _maxCount;
    long long _minCount;
    long long _completionResultCount;
    long long _queryID;
    long long _embeddingGenerationTimeout;
    double _embeddingRelevanceThreshold;
    double _minL2Score;
    double _maxAge;
    BOOL _internal;
    BOOL _grouped;
    BOOL _live;
    BOOL _counting;
    BOOL _attribute;
    BOOL _lowPriority;
    BOOL _parseUserQuery;
    BOOL _enableSuggestionTokens;
    BOOL _enableRecentSuggestions;
    BOOL _enableResultCountsPerSuggestion;
    BOOL _fsOnly;
    BOOL _playback;
    BOOL _includeUserActivities;
    BOOL _disableBlockingOnIndex;
    BOOL _advancedQuery;
    BOOL _hasFreeTextQuery;
    unsigned __int128 _fuzzyMask;
    unsigned __int128 _fuzzyMatch;
    NSString *_completionString;
    NSString *_normalizedSearchQuery;
    NSArray *_completionAttributes;
    NSArray *_completionWeights;
    unsigned int _completionOptions;
    unsigned int _qos;
    unsigned int _userQueryOptions;
    double _currentTime;
    NSDictionary *_options;
    NSArray *_mountPoints;
    NSArray *_scopes;
    NSString *_reason;
    _MDQueryRewriteContext *_rewriteContext;
    NSArray *_customFieldSpecifications;
    NSDate *_instantAnswersOverrideDate;
    NSString *_customResourceDirectory;
    unsigned long long _maximumBatchSize;
    BOOL _filterOutHiddenApps;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSArray *protectionClasses;
@property (nonatomic) int entitledAttributes;
@property BOOL disableResultStreaming;
@property (nonatomic) struct __CFBitVector { } *nonTopHitFetchAttributeIndexesBits;
@property (retain, nonatomic) NSString *clientBundleID;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *additionalBundleIDs;
@property (retain, nonatomic) NSArray *instantAnswersBundleIDs;
@property (retain, nonatomic) NSArray *answerAttributes;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) NSArray *additionalQueries;
@property (retain, nonatomic) NSArray *instantAnswersQueries;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (retain, nonatomic) NSArray *disableBundles;
@property (retain, nonatomic) NSString *userQuery;
@property (copy, nonatomic) CSSuggestion *suggestion;
@property (copy, nonatomic) NSArray *groupingRules;
@property (retain, nonatomic) NSArray *resultMatchingAttributes;
@property (retain, nonatomic) NSArray *resultMatchingSceneIdentifiers;
@property (nonatomic) BOOL computePhotosDerivedAttributes;
@property (nonatomic) int rankingType;
@property (retain, nonatomic) NSString *filterQuery;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic) long long currentTokenScope;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic) long long topHitExtraFetchAttributeCount;
@property (nonatomic) long long shortcutBit;
@property (nonatomic) long long highMatchBit;
@property (nonatomic) long long lowMatchBit;
@property (nonatomic) long long highRecencyBit;
@property (nonatomic) long long lowRecencyBit;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long minCount;
@property (nonatomic) long long maxRankedResultCount;
@property (nonatomic) long long maxDenseResultCount;
@property (nonatomic) long long maxSuggestionCount;
@property (nonatomic) long long completionResultCount;
@property (nonatomic) long long queryID;
@property (nonatomic) double minL2Score;
@property (nonatomic) double maxAge;
@property (nonatomic) BOOL internal;
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL counting;
@property (nonatomic) BOOL attribute;
@property (nonatomic) BOOL pommes;
@property (nonatomic) BOOL pommesSuggestions;
@property (nonatomic) BOOL pommesZKW;
@property (nonatomic) BOOL lowPriority;
@property (nonatomic) BOOL parseUserQuery;
@property (nonatomic) BOOL disableNLP;
@property (nonatomic) BOOL generateSuggestions;
@property (nonatomic) BOOL disableSemanticSearch;
@property (nonatomic) BOOL disableMetadataSearch;
@property (nonatomic) BOOL disableU2;
@property (nonatomic) BOOL enableInstantAnswers;
@property (nonatomic) BOOL filterTopHits;
@property (nonatomic) BOOL privateQuery;
@property (nonatomic) BOOL fsOnly;
@property (nonatomic) BOOL playback;
@property (nonatomic) BOOL includeUserActivities;
@property (nonatomic) BOOL disableBlockingOnIndex;
@property (nonatomic) BOOL fetchl2Signals;
@property (nonatomic) BOOL priorityIndexQuery;
@property (nonatomic) BOOL advancedQuery;
@property (nonatomic) BOOL hasFreeTextQuery;
@property (nonatomic) BOOL filterOutHiddenApps;
@property (nonatomic) long long feedbackQueryID;
@property (nonatomic) unsigned __int128 fuzzyMask;
@property (nonatomic) unsigned __int128 fuzzyMatch;
@property (retain, nonatomic) NSString *completionString;
@property (retain, nonatomic) NSArray *completionAttributes;
@property (retain, nonatomic) NSArray *completionWeights;
@property (nonatomic) unsigned int completionOptions;
@property (readonly) unsigned int qos;
@property (nonatomic) unsigned int userQueryOptions;
@property (nonatomic) double currentTime;
@property (nonatomic) unsigned long long maximumBatchSize;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSArray *mountPoints;
@property (retain, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) _MDQueryRewriteContext *rewriteContext;
@property (copy, nonatomic) NSDictionary *queryUnderstandingOutput;
@property (copy, nonatomic) NSData *queryEmbedding;
@property (retain, nonatomic) NSAttributedString *attributedUserQuery;
@property (nonatomic) BOOL includeMDResults;
@property (retain, nonatomic) NSArray *fileScopes;
@property (nonatomic) BOOL matchesSupportFiles;
@property (nonatomic) BOOL matchesOnlyFinderFiles;
@property (nonatomic) unsigned long long maxPerGroup;
@property (nonatomic) BOOL ignoreTopNForAggregation;
@property (nonatomic) unsigned long long maxFirstDelay;
@property (nonatomic) unsigned long long maxFirstCount;
@property (nonatomic) unsigned long long maxProgressDelay;
@property (nonatomic) unsigned long long maxProgressCount;
@property (nonatomic) unsigned long long maxUpdateDelay;
@property (nonatomic) unsigned long long maxUpdateCount;
@property (retain, nonatomic) NSArray *protectionClasses;
@property (nonatomic) int entitledAttributes;
@property BOOL disableResultStreaming;
@property (nonatomic) struct __CFBitVector { } *nonTopHitFetchAttributeIndexesBits;
@property (retain, nonatomic) NSString *clientBundleID;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *additionalBundleIDs;
@property (retain, nonatomic) NSArray *instantAnswersBundleIDs;
@property (retain, nonatomic) NSArray *answerAttributes;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) NSArray *additionalQueries;
@property (retain, nonatomic) NSArray *instantAnswersQueries;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (retain, nonatomic) NSArray *disableBundles;
@property (retain, nonatomic) NSString *userQuery;
@property (copy, nonatomic) CSSuggestion *suggestion;
@property (copy, nonatomic) NSArray *groupingRules;
@property (retain, nonatomic) NSArray *resultMatchingAttributes;
@property (retain, nonatomic) NSArray *resultMatchingSceneIdentifiers;
@property (nonatomic) BOOL computePhotosDerivedAttributes;
@property (nonatomic) int rankingType;
@property (retain, nonatomic) NSString *filterQuery;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic) long long currentTokenScope;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic) long long topHitExtraFetchAttributeCount;
@property (nonatomic) long long shortcutBit;
@property (nonatomic) long long highMatchBit;
@property (nonatomic) long long lowMatchBit;
@property (nonatomic) long long highRecencyBit;
@property (nonatomic) long long lowRecencyBit;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long minCount;
@property (nonatomic) long long maxRankedResultCount;
@property (nonatomic) long long maxDenseResultCount;
@property (nonatomic) long long maxSuggestionCount;
@property (nonatomic) long long completionResultCount;
@property (nonatomic) long long queryID;
@property (nonatomic) double minL2Score;
@property (nonatomic) double maxAge;
@property (nonatomic) BOOL internal;
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL counting;
@property (nonatomic) BOOL attribute;
@property (nonatomic) BOOL pommes;
@property (nonatomic) BOOL pommesSuggestions;
@property (nonatomic) BOOL pommesZKW;
@property (nonatomic) BOOL lowPriority;
@property (nonatomic) BOOL parseUserQuery;
@property (nonatomic) BOOL disableNLP;
@property (nonatomic) BOOL generateSuggestions;
@property (nonatomic) BOOL disableSemanticSearch;
@property (nonatomic) BOOL disableMetadataSearch;
@property (nonatomic) BOOL disableU2;
@property (nonatomic) BOOL enableInstantAnswers;
@property (nonatomic) BOOL filterTopHits;
@property (nonatomic) BOOL privateQuery;
@property (nonatomic) BOOL fsOnly;
@property (nonatomic) BOOL playback;
@property (nonatomic) BOOL includeUserActivities;
@property (nonatomic) BOOL disableBlockingOnIndex;
@property (nonatomic) BOOL fetchl2Signals;
@property (nonatomic) BOOL priorityIndexQuery;
@property (nonatomic) BOOL advancedQuery;
@property (nonatomic) BOOL hasFreeTextQuery;
@property (nonatomic) BOOL filterOutHiddenApps;
@property (nonatomic) long long feedbackQueryID;
@property (nonatomic) unsigned __int128 fuzzyMask;
@property (nonatomic) unsigned __int128 fuzzyMatch;
@property (retain, nonatomic) NSString *completionString;
@property (retain, nonatomic) NSArray *completionAttributes;
@property (retain, nonatomic) NSArray *completionWeights;
@property (nonatomic) unsigned int completionOptions;
@property (readonly) unsigned int qos;
@property (nonatomic) unsigned int userQueryOptions;
@property (nonatomic) double currentTime;
@property (nonatomic) unsigned long long maximumBatchSize;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSArray *mountPoints;
@property (retain, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) _MDQueryRewriteContext *rewriteContext;
@property (copy, nonatomic) NSDictionary *queryUnderstandingOutput;
@property (copy, nonatomic) NSData *queryEmbedding;
@property (retain, nonatomic) NSAttributedString *attributedUserQuery;
@property (nonatomic) BOOL includeMDResults;
@property (retain, nonatomic) NSArray *fileScopes;
@property (nonatomic) BOOL matchesSupportFiles;
@property (nonatomic) BOOL matchesOnlyFinderFiles;
@property (nonatomic) unsigned long long maxPerGroup;
@property (nonatomic) BOOL ignoreTopNForAggregation;
@property (nonatomic) unsigned long long maxFirstDelay;
@property (nonatomic) unsigned long long maxFirstCount;
@property (nonatomic) unsigned long long maxProgressDelay;
@property (nonatomic) unsigned long long maxProgressCount;
@property (nonatomic) unsigned long long maxUpdateDelay;
@property (nonatomic) unsigned long long maxUpdateCount;
@property (retain, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) unsigned long long sourceOptions;

+ (id)pommesSupportedBundleIDs;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnableSuggestionTokens:(BOOL)a0;
- (void)setQos:(unsigned int)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isNotes;
- (BOOL)enableResultCountsPerSuggestion;
- (void)setEmbeddingRelevanceThreshold:(double)a0;
- (id)customFieldSpecifications;
- (id)customResourceDirectory;
- (BOOL)disableSafetyCheck;
- (long long)embeddingGenerationTimeout;
- (double)embeddingRelevanceThreshold;
- (BOOL)enablePhotosEntitySearch;
- (BOOL)enableRecentSuggestions;
- (BOOL)enableSuggestionTokens;
- (id)initWithQoS:(unsigned int)a0;
- (id)instantAnswersOverrideDate;
- (BOOL)isDateQueryContext;
- (BOOL)isFinder;
- (BOOL)isMail;
- (BOOL)isMessages;
- (BOOL)isPhotos;
- (BOOL)isPommesCtl;
- (BOOL)isSafari;
- (BOOL)isSettings;
- (long long)maxItemCount;
- (id)normalizedSearchQuery;
- (id)pommesEnabledBundleID;
- (void)setCustomFieldSpecifications:(id)a0;
- (void)setCustomResourceDirectory:(id)a0;
- (void)setDisableSafetyCheck:(BOOL)a0;
- (void)setEmbeddingGenerationTimeout:(long long)a0;
- (void)setEnablePhotosEntitySearch:(BOOL)a0;
- (void)setEnableRecentSuggestions:(BOOL)a0;
- (void)setEnableResultCountsPerSuggestion:(BOOL)a0;
- (void)setInstantAnswersOverrideDate:(id)a0;
- (void)setIsDateQueryContext:(BOOL)a0;
- (void)setMaxItemCount:(long long)a0;
- (void)setNormalizedSearchQuery:(id)a0;
- (id)xpc_dictionary;

@end
