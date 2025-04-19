@interface FCOfflineFeedRules : NSObject

@property (readonly, nonatomic) long long maxGroups;
@property (readonly, nonatomic) long long maxArticleDownloads;
@property (readonly, nonatomic) long long maxIssueDownloads;
@property (readonly, nonatomic) long long maxPuzzleDownloads;
@property (readonly, nonatomic) long long maxAudioDownloads;
@property (readonly, nonatomic) long long maxRecipeDownloads;

- (id)initWithDictionary:(id)a0 defaultMaxGroups:(long long)a1 defaultMaxArticleDownloads:(long long)a2 defaultMaxIssueDownloads:(long long)a3 defaultMaxPuzzleDownloads:(long long)a4 defaultMaxAudioDownloads:(long long)a5 defaultMaxRecipeDownloads:(long long)a6;
- (id)initWithMaxGroups:(long long)a0 maxArticleDownloads:(long long)a1 maxIssueDownloads:(long long)a2 maxPuzzleDownloads:(long long)a3 maxAudioDownloads:(long long)a4 maxRecipeDownloads:(long long)a5;

@end
