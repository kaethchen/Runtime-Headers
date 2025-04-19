@class FCThreadSafeMutableDictionary;
@protocol FCFeedPersonalizing;

@interface FCFeedItemScoreCache : NSObject

@property (readonly, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *scoreProfilesByConfigurationSet;

- (void).cxx_destruct;
- (void)_accessScoreCacheForForConfigurationSet:(long long)a0 withBlock:(id /* block */)a1;
- (void)addScoreProfiles:(id)a0 configurationSet:(long long)a1;
- (id)initWithFeedPersonalizer:(id)a0;
- (id)scoreProfilesForFeedItems:(id)a0 configurationSet:(long long)a1;

@end
