@class EKSpotlightSearch, NSString, NSMutableDictionary, NSArray;

@interface CUIKOccurrenceCacheSearchDataSource : CUIKOccurrenceCacheDataSource {
    EKSpotlightSearch *_narrowSearch;
    EKSpotlightSearch *_distantFutureSearch;
    EKSpotlightSearch *_distantPastSearch;
    NSString *_searchTerm;
    NSMutableDictionary *_processingCachedDays;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _resultsLock;
    NSArray *_sortedDays;
    BOOL _sortedDaysUpdated;
    BOOL _scrolledToToday;
    int _searchSeed;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)searchWithTerm:(id)a0;
- (id)_createCachedDays;
- (void)_runBlock:(id /* block */)a0;
- (void)_runBlock:(id /* block */)a0 withRandomDelayUpperbound:(unsigned int)a1;
- (void)_updateCachedDays;
- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (void)invalidateCachedOccurrences;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (BOOL)supportsInvitations;

@end
