@class FCCloudContext, NSArray, NSDictionary, FCCachePolicy;

@interface FCIssueHeadlinesFetchOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_issueIDs;
    NSDictionary *_resultHeadlinesByIssue;
}

@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)initWithContext:(id)a0 issueIDs:(id)a1;
- (id)initWithContext:(id)a0 issues:(id)a1;

@end
