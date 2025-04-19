@class NSArray, FCEdgeCacheHint;
@protocol FCContentContext;

@interface FCIssueArticlesOperation : FCOperation {
    id<FCContentContext> _context;
    NSArray *_issueIDs;
    NSArray *_resultFeedItems;
}

@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) unsigned long long maxIssuesPerFetch;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)initWithContext:(id)a0 issueIDs:(id)a1;
- (id)initWithContext:(id)a0 issues:(id)a1;

@end
