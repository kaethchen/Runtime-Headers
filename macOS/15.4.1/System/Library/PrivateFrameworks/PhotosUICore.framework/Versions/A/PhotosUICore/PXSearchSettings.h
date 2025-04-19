@class NSString;

@interface PXSearchSettings : PXSettings

@property (nonatomic) unsigned long long maxNumberOfTopAssetColumns;
@property (nonatomic) unsigned long long maxNumberOfResultColumns;
@property (nonatomic) unsigned long long maxNumberOfTopAssetRows;
@property (nonatomic) unsigned long long standardNumberOfTopAssetRows;
@property (nonatomic) BOOL disableTopAssetCuration;
@property (nonatomic) BOOL forceIndexingFooter;
@property (nonatomic) unsigned long long indexingBannerPercentageThreshold;
@property (nonatomic) BOOL forceIndexingPausedTitle;
@property (copy, nonatomic) NSString *overrideMatchedQueryText;
@property (nonatomic) BOOL enableAutoCorrect;
@property (nonatomic) BOOL enableBatchedSearchResults;
@property (nonatomic) unsigned long long batchedSearchResultInitialBatchSize;
@property (nonatomic) unsigned long long batchedSearchResultSubsequentBatchSize;
@property (nonatomic) BOOL enableEmbeddingSearch;
@property (nonatomic) double embeddingVectorDistanceThreshold;
@property (nonatomic) unsigned long long queryDepersonalizationType;
@property (nonatomic) long long overriddenCentralizedFeedbackMode;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_formatIndexingStatusAlertMessageForRemainingCount:(unsigned long long)a0 isPaused:(BOOL)a1 elapsedTimeSincePause:(double)a2;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
