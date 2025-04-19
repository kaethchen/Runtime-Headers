@class WBSLPLinkMetadataRequest;

@interface WBSLPLinkMetadataFetchOperation : WBSSiteMetadataFetchOperation

@property (readonly, nonatomic) WBSLPLinkMetadataRequest *request;
@property (readonly, copy, nonatomic) id /* block */ operationCompletionHandler;

+ (id)configuredLPMetadataProvider;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)initWithRequest:(id)a0 operationCompletionHandler:(id /* block */)a1;

@end
