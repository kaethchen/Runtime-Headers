@interface FCForYouQueryUtilities : NSObject

+ (id)_filterTagsForQuerying:(id)a0 withMutedTagIDs:(id)a1;
+ (id)feedRequestsForTags:(id)a0 tagBinProvider:(id /* block */)a1 hiddenFeedIDs:(id)a2 allowPaidBundleFeed:(BOOL)a3 purchasedTagIDs:(id)a4 bundleSubscriptionProvider:(id)a5 configuration:(id)a6 maxCount:(unsigned long long)a7 feedRange:(id)a8 sidecar:(id)a9 isRunningPPT:(BOOL)a10;
+ (id)feedRequestsForTags:(id)a0 tagBinProvider:(id /* block */)a1 hiddenFeedIDs:(id)a2 purchasedTagIDs:(id)a3 bundleSubscriptionProvider:(id)a4 configuration:(id)a5 maxCount:(unsigned long long)a6 feedRange:(id)a7 sidecar:(id)a8 options:(unsigned long long)a9;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)a0 mutedTagIDs:(id)a1 purchasedTagIDs:(id)a2 bundleSubscriptionProvider:(id)a3 configuration:(id)a4 contentContext:(id)a5 fallbackToPresubscribedTagIDs:(BOOL)a6 qualityOfService:(long long)a7 completionHandler:(id /* block */)a8;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)a0 mutedTagIDs:(id)a1 purchasedTagIDs:(id)a2 bundleSubscriptionProvider:(id)a3 configuration:(id)a4 contentContext:(id)a5 fallbackToPresubscribedTagIDs:(BOOL)a6 qualityOfService:(long long)a7 completionHandler:(id /* block */)a8;

@end
