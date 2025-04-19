@class FCOfflineFeedRules;

@interface FCOfflineDownloadsConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long minDeviceStorage;
@property (readonly, nonatomic) long long maxDownloadStorage;
@property (readonly, nonatomic) long long maxArticleDownloads;
@property (readonly, nonatomic) long long maxIssueDownloads;
@property (readonly, nonatomic) long long maxPuzzleDownloads;
@property (readonly, nonatomic) long long maxAudioDownloads;
@property (readonly, nonatomic) long long maxRecipeDownloads;
@property (readonly, nonatomic) long long maxImagesPerArticle;
@property (readonly, nonatomic) BOOL useSmallestArticleThumbnails;
@property (readonly, nonatomic) BOOL useSmallestPuzzleThumbnails;
@property (readonly, nonatomic) BOOL useSmallestRecipeThumbnails;
@property (readonly, nonatomic) BOOL useSmallestArticleImages;
@property (readonly, nonatomic) FCOfflineFeedRules *todayFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *puzzleHubFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *puzzleTypeFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *sportsFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *magazineFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *audioFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *savedFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *historyFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *sharedWithYouFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *recipeBoxFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *foodHubFeedRules;
@property (readonly, nonatomic) FCOfflineFeedRules *recipeCatalogFeedRules;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 optimized:(BOOL)a1;

@end
