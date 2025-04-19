@class NSString;

@interface MTEpisodeLookupUtil : NSObject <EpisodeLookupUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_entityForFetchRequest:(id)a0 context:(id)a1;
- (id)findEpisodeWithRequest:(id)a0 context:(id)a1;
- (id)_entityForFetchRequest:(id)a0;
- (id)_episodeMatchFromPredicate:(id)a0;
- (id)_episodeMatchFromPredicate:(id)a0 context:(id)a1;
- (id)_podcastMatchFromPredicate:(id)a0;
- (id)_podcastMatchFromPredicate:(id)a0 context:(id)a1;
- (id)findEpisodeWithRequest:(id)a0;
- (id)findPodcastWithFeedUrl:(id)a0;

@end
