@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForNotificationPool;
+ (id)edgeCacheHintForPurchaseLookup;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForTrending;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;

@end
