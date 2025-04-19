@class MKLocalSearchCompleter, NSString, MKLocalSearchRequest, CalUILocationSuggestionResult, CUIKiCloudKVStore, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, GEOMapServiceCompletionTicket;

@interface CalUILocationSuggestionManager : NSObject <MKLocalSearchCompleterDelegatePrivate> {
    NSString *_currentSearchQuery;
}

@property (retain, nonatomic) NSString *currentSearchQuery;
@property (retain, nonatomic) NSString *redactedCurrentQuery;
@property (retain) CalUILocationSuggestionResult *currentLocation;
@property unsigned long long options;
@property (retain) NSMutableArray *meCardResults;
@property (retain) NSMutableArray *recentResults;
@property (retain) NSMutableArray *virtualConferenceResults;
@property (retain) NSMutableArray *abResults;
@property (retain) NSMutableArray *mkResults;
@property (retain) NSMutableArray *runningQueries;
@property (retain) NSObject<OS_dispatch_queue> *runningQueriesQueue;
@property (retain) NSObject<OS_dispatch_queue> *resultsAccessQueue;
@property (retain) NSObject<OS_dispatch_queue> *recentsResponseQueue;
@property (retain) NSObject<OS_dispatch_queue> *contactsLookupQueue;
@property (retain) NSObject<OS_dispatch_queue> *virtualConferenceLookupQueue;
@property (retain) MKLocalSearchRequest *localSearchRequest;
@property (retain) CUIKiCloudKVStore *iCloudKVStore;
@property (retain, nonatomic) NSMutableSet *pendingSearchTypes;
@property BOOL searchingTier1;
@property BOOL searchingTier2;
@property (retain) NSObject<OS_dispatch_queue> *resultProcessingQueue;
@property (retain) MKLocalSearchCompleter *mkCompleter;
@property (retain) NSMutableArray *suggestionsNeedingGeocoding;
@property (retain) CalUILocationSuggestionResult *suggestionBeingGeocoded;
@property (copy) id /* block */ suggestionsFoundHandler;
@property (retain, nonatomic) id<GEOMapServiceCompletionTicket> lastTicket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)manager;
+ (id)currentLocation;
+ (id)addressStringsFromMetaData:(id)a0;
+ (id)currentLocationString;
+ (void)findSuggestionsForQuery:(id)a0 options:(unsigned long long)a1 withHandler:(id /* block */)a2;
+ (id)locationFromMetaData:(id)a0;
+ (id)mapKitHandleFromMetaData:(id)a0;
+ (id)metadataForSuggestion:(id)a0;
+ (double)radiusFromMetaData:(id)a0;
+ (void)recordRecentForSuggestion:(id)a0 withDomain:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)results;
- (BOOL)isFinished;
- (void)completerDidFail:(id)a0 error:(id)a1;
- (void)completerDidUpdateResults:(id)a0 finished:(BOOL)a1;
- (void)_addArray:(id)a0 toArray:(id)a1 withMaxElements:(long long)a2;
- (void)_addArray:(id)a0 toSet:(id)a1 withKeySet:(id)a2 withMaxElements:(long long)a3;
- (void)_addResult:(id)a0 toResults:(id)a1;
- (void)_reverseGeocodeMapURLItem:(id)a0 completion:(id /* block */)a1;
- (void)addRunningQuery:(id)a0;
- (void)clearRunningQueries;
- (void)contactLocationsForSearchString:(id)a0;
- (void)executeSearch:(id)a0;
- (void)finishSearchType:(id)a0 withResultCount:(unsigned long long)a1;
- (void)geocodeLocationSuggestion:(id)a0;
- (void)geocodeNextLocationSuggestion;
- (void)handleCompletedGeocodeWithPlacemark:(id)a0 error:(id)a1;
- (void)mapSearchFor:(id)a0;
- (id)pendingSearchTypesCopy;
- (void)resultsUpdated;
- (void)startSearchType:(id)a0;
- (BOOL)tier1Finished;

@end
