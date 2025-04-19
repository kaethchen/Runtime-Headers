@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {
    NSMutableArray *_recentSearchEntries;
}

+ (long long)_ageLimitInDaysForRecentSearches;
+ (id)_defaultsKey;
+ (BOOL)_shouldTrackSearches;

- (void).cxx_destruct;
- (void)_addRecentSearchEntry:(id)a0;
- (void)_loadRecentSearchesIfNeeded;
- (void)_postClearingNotificationForSearches:(id)a0;
- (void)_pruneRecentSearchesOlderThanOneMonth;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)a0;
- (id)_recentSearchesDictionaries;
- (void)_saveRecentSearchDictionaries:(id)a0 toUserDefaultsUsingKey:(id)a1;
- (void)_saveRecentSearches;
- (void)addRecentSearch:(id)a0 fromURL:(id)a1;
- (void)clearRecentSearch:(id)a0;
- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;
- (id)recentSearchesMatchingPrefix:(id)a0;
- (id)recentWebSearchEntries;
- (id)recentWebSearchEntriesYoungerThanOneDay;

@end
