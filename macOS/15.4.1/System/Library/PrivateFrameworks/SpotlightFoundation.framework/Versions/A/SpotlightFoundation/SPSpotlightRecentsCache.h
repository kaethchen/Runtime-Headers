@interface SPSpotlightRecentsCache : NSObject

+ (id)recentResults;
+ (void)cacheResult:(id)a0 title:(id)a1 searchString:(id)a2;
+ (void)cacheContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
+ (void)cacheLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3 searchString:(id)a4;
+ (void)cachePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
+ (void)cacheSuggestion:(id)a0 type:(int)a1 score:(id)a2 searchString:(id)a3;
+ (void)deleteAllRecentResults;
+ (void)deleteContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2;
+ (void)deleteLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3;
+ (void)deletePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2;
+ (void)deleteResult:(id)a0 title:(id)a1;
+ (void)deleteSuggestion:(id)a0 type:(int)a1 score:(id)a2;
+ (id)resultFromTopic:(id)a0;
+ (void)updateApplicationContexts:(id)a0;
+ (id)recentResultsWithOptions:(id)a0;
+ (id)recentResultsWithOptions:(id)a0 rankAndDeduplicate:(id /* block */)a1;
+ (BOOL)topic:(id)a0 isSameAsTopic:(id)a1;
+ (id)filteredTopics:(id)a0;
+ (void)enumerateRecentCompletionsWithSearchString:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateRecentResultsUsingBlock:(id /* block */)a0;

@end
