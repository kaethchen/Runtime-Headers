@class NSString, NSArray;

@interface WBSSearchContextManager : NSObject {
    NSArray *_searchParametersContexts;
    NSString *_treatmentId;
    BOOL _needsCounterfactualSearchData;
    BOOL contextsNeedUpdating;
}

@property (class, readonly, nonatomic) WBSSearchContextManager *sharedSearchContextManager;

@property (readonly, nonatomic) long long numberOfSearchContexts;
@property (readonly, nonatomic) long long regularSearchContextIndex;
@property (readonly, copy, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL needsCounterfactualSearchData;

- (void).cxx_destruct;
- (void)clearResults;
- (void)_updateSearchContexts:(id)a0 trialManager:(id)a1;
- (id)historyAndBookmarkMatchesForContext:(long long)a0;
- (id)initWithSearchParameters:(id)a0 trialManager:(id)a1;
- (void)markContextsNeedUpdate;
- (BOOL)runCounterfactualForContext:(long long)a0;
- (id)searchParametersForContext:(long long)a0;
- (void)setHistoryAndBookmarkMatches:(id)a0 forContext:(long long)a1;
- (void)setTopHits:(id)a0 forContext:(long long)a1;
- (id)topHitsForContext:(long long)a0;
- (void)updateSearchContexts;

@end
