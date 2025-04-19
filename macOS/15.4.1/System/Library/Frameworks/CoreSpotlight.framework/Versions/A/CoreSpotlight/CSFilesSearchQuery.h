@class CSFilesSearchQueryContext;

@interface CSFilesSearchQuery : CSSearchQuery

@property (retain, nonatomic) CSFilesSearchQueryContext *context;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (unsigned long long)foundItemCount;
- (void)handleCompletion:(id)a0;
- (void)handleGatherEnded;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;
- (id)initWithQueryString:(id)a0 context:(id)a1;

@end
