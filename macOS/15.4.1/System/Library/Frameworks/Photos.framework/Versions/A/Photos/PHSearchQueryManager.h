@class PLSearchSpotlightSandboxExtension, NSMutableDictionary, PHPhotoLibrary, NSObject, PHSearchQuery;
@protocol OS_dispatch_queue;

@interface PHSearchQueryManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queryLock;
    PLSearchSpotlightSandboxExtension *_spotlightSandboxExtension;
}

@property (copy, nonatomic) PHSearchQuery *currentSearchQuery;
@property (copy, nonatomic) PHSearchQuery *currentSuggestionsQuery;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *batchQueryQueue;
@property (nonatomic) int currentQueryId;
@property (nonatomic) int currentSuggestionsQueryId;
@property (nonatomic) BOOL isTestingConfiguration;
@property (nonatomic) int queryLock_currentBatchQueryId;
@property (readonly, nonatomic) NSMutableDictionary *queryLock_batchQueriesInProgress;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (BOOL)_isValidQueryText:(id)a0;
+ (BOOL)currentSpotlightVersionSupportsExactMatchBehavior;
+ (BOOL)currentSpotlightVersionSupportsExactMatchBehaviorWithEmbeddingOnlyResults;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initForTestingWithPhotoLibrary:(id)a0;
- (void)_acquireSpotlightSandboxExtensionIfNeeded;
- (void)_releaseSpotlightSandboxExtension;
- (id)_searchQueriesFromSearchTexts:(id)a0 searchOptions:(id)a1 batchQueryID:(int)a2;
- (void)cancelQueriesForBatchQueryId:(int)a0;
- (void)cancelQueryWithQueryId:(int)a0;
- (int)performBatchSearch:(id)a0 searchOptions:(id)a1 resultsHandler:(id /* block */)a2;
- (void)performSearch:(id)a0 resultsHandler:(id /* block */)a1;
- (int)performSearch:(id)a0 searchOptions:(id)a1 resultsHandler:(id /* block */)a2;
- (void)preheatSearchWithCompletionBlock:(id /* block */)a0;
- (int)suggestionsForSearchQuery:(id)a0 rangeOfSuggestionText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 searchQueryResult:(id)a2 suggestionsHandler:(id /* block */)a3;
- (int)suggestionsForSearchText:(id)a0 options:(id)a1 suggestionsHandler:(id /* block */)a2;

@end
