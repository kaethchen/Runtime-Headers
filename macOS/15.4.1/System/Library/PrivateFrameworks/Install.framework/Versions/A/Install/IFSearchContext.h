@class NSString, NSMutableDictionary, NSMutableArray, NSLock;

@interface IFSearchContext : NSObject {
    NSMutableArray *_searchOrder;
    NSMutableDictionary *_searchByIdentifier;
    NSMutableDictionary *_resultsByIdentifier;
    NSString *_targetContext;
    NSLock *_searchLock;
}

- (void)dealloc;
- (id)targetPath;
- (id)searchIdentifiers;
- (void)addSearch:(id)a0;
- (void)_logResultForSearch:(id)a0;
- (void)addSearches:(id)a0;
- (id)initWithSearchArray:(id)a0 onTargetContext:(id)a1;
- (id)initWithTargetContext:(id)a0;
- (BOOL)resolveAllSearches;
- (id)resultsForIdentifier:(id)a0;
- (void)setResults:(id)a0 forIdentifier:(id)a1;

@end
