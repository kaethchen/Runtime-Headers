@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
}

- (void).cxx_destruct;
- (void)_handleBatches:(id)a0;
- (unsigned long long)dispatchApplyWidth;
- (void)handleCompletion:(id)a0;
- (void)handleFoundCompletions:(id)a0;
- (void)handleFoundItems:(id)a0;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2 hitCount:(unsigned long long)a3;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;
- (BOOL)isTopHitQuery;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;

@end
