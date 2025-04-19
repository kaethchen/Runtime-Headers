@interface WBSIgnoredSiriSuggestedSitesDatabaseController : WBSSQLiteStore

+ (unsigned long long)thresholdForHidingIgnoredSiriSuggestedSites;

- (int)_createFreshDatabaseSchema;
- (void)_addIgnoredSiriSuggestedSiteWithURLString:(id)a0 inProfile:(id)a1 withQuery:(id)a2 visitedURLString:(id)a3;
- (int)_currentSchemaVersion;
- (id)_dateAtWhichIgnoredSiriSuggestedSitesArePruned;
- (id)_getIgnoredSiriSuggestedSitesURLStringsInProfile:(id)a0 withQuery:(id)a1;
- (int)_migrateToSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (void)_removeIgnoredSiriSuggestedSitesBeforeDate:(id)a0;
- (void)_removeIgnoredSiriSuggestedSitesInProfile:(id)a0 afterDate:(id)a1;
- (void)_removeIgnoredSiriSuggestedSitesInProfile:(id)a0 query:(id)a1;
- (void)_removeIgnoredSiriSuggestedSitesInProfile:(id)a0 visitedURLHost:(id)a1;
- (void)_removeIgnoredSiriSuggestedSitesWithURLHost:(id)a0 inProfile:(id)a1;
- (void)_updateTimestampsOfIgnoredSiriSuggestedSitesInProfile:(id)a0 query:(id)a1 visitedURLString:(id)a2;
- (void)addIgnoredSiriSuggestedSiteWithURLString:(id)a0 inProfile:(id)a1 withQuery:(id)a2 visitedURLString:(id)a3;
- (void)getIgnoredSiriSuggestedSitesURLStringsInProfile:(id)a0 withQuery:(id)a1 completionHandler:(id /* block */)a2;
- (void)pruneIgnoredSiriSuggestedSites;
- (void)removeIgnoredSiriSuggestedSitesInProfile:(id)a0 afterDate:(id)a1;
- (void)removeIgnoredSiriSuggestedSitesInProfile:(id)a0 query:(id)a1;
- (void)removeIgnoredSiriSuggestedSitesInProfile:(id)a0 visitedURLHost:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeIgnoredSiriSuggestedSitesWithURLHost:(id)a0 inProfile:(id)a1;
- (void)updateTimestampsOfIgnoredSiriSuggestedSitesInProfile:(id)a0 query:(id)a1 visitedURLString:(id)a2;

@end
