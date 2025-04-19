@interface RecentWebSearchesController : WBSRecentWebSearchesController

+ (id)sharedController;
+ (long long)_ageLimitInDaysForRecentSearches;
+ (BOOL)_shouldTrackSearches;

- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;

@end
