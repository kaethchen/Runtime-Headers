@class NSArray;

@interface CWFKnownNetworkPreparer : NSObject

@property (retain, nonatomic) NSArray *profiles;
@property (nonatomic) unsigned long long maxResults;

- (void).cxx_destruct;
- (id)_filterForPrimaryHomeNetworkProfile:(id)a0;
- (id)_filterProfilesForHomeNetworksExceedingMaximumDistance:(id)a0;
- (id /* block */)_homeNetworkComparator;
- (id)_homeNetworkFilter;
- (id /* block */)_lastJoinedComparator;
- (id)_localNetworkFilter;
- (id /* block */)_networkProfileUsageComparator;
- (id /* block */)_presentationSortComparator;
- (id)_removeProfilesAtSimilarLocations:(id)a0;
- (id /* block */)_similarLocationComparator;
- (id)initWithNetworkProfiles:(id)a0;
- (id)localNetworkPromptProfiles;
- (id)prepareLocalNetworkProfilesForPresentation:(id)a0;
- (BOOL)profilesContainsHomeProfile:(id)a0;

@end
