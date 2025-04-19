@class WBSIgnoredSiriSuggestedSitesDatabaseController, NSDate;

@interface WBSIgnoredSiriSuggestedSitesController : NSObject {
    WBSIgnoredSiriSuggestedSitesDatabaseController *_databaseController;
    NSDate *_dateOfLastPruning;
}

@property (class, readonly, nonatomic) WBSIgnoredSiriSuggestedSitesController *sharedController;

+ (id)_databaseURL;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (void)_pruneIgnoredSiriSuggestedSitesIfNeeded;
- (void)addIgnoredSiriSuggestedSiteWithURLString:(id)a0 inProfile:(id)a1 withQuery:(id)a2 visitedURLString:(id)a3;
- (id)databaseController;
- (void)getIgnoredSiriSuggestedSitesURLStringsInProfile:(id)a0 withQuery:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeIgnoredSiriSuggestedSitesInProfile:(id)a0;
- (void)removeIgnoredSiriSuggestedSitesInProfile:(id)a0 afterDate:(id)a1;
- (void)removeIgnoredSiriSuggestedSitesInProfile:(id)a0 query:(id)a1;
- (void)removeIgnoredSiriSuggestedSitesInProfile:(id)a0 visitedURLHost:(id)a1;
- (void)removeIgnoredSiriSuggestedSitesInProfile:(id)a0 visitedURLHost:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeIgnoredSiriSuggestedSitesWithURLHost:(id)a0 inProfile:(id)a1;
- (void)updateTimestampsOfIgnoredSiriSuggestedSitesInProfile:(id)a0 query:(id)a1 visitedURLString:(id)a2;

@end
