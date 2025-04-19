@class NSString, NSSet, NSArray;
@protocol FCBundleSubscriptionProviderType;

@interface NTForYouRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *topStoriesChannelID;
@property (readonly, copy, nonatomic) NSString *localNewsTagID;
@property (readonly, copy, nonatomic) NSSet *hiddenFeedIDs;
@property (readonly, nonatomic) BOOL allowPaidBundleFeed;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly, copy, nonatomic) NSArray *rankedSubscribedTagIDs;
@property (readonly, copy, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (readonly, nonatomic) long long cutoffTime;
@property (readonly, nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (readonly, nonatomic) unsigned long long feedMaxCount;
@property (readonly, nonatomic) unsigned long long feedItemMaxCount;
@property (readonly, nonatomic) long long fetchingBin;
@property (readonly, copy, nonatomic) NSString *throttlingIdentifier;
@property (readonly, nonatomic) double minimumUpdateInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithForYouTodaySectionSpecificConfig:(id)a0 appConfiguration:(id)a1 topStoriesChannelID:(id)a2 localNewsTagID:(id)a3 hiddenFeedIDs:(id)a4 allowPaidBundleFeed:(BOOL)a5 mutedTagIDs:(id)a6 purchasedTagIDs:(id)a7 rankedAllSubscribedTagIDs:(id)a8 bundleSubscriptionProvider:(id)a9 throttlingIdentifier:(id)a10;

@end
