@class WBSPerformImageOperationUsingWebViewRequest;

@interface WBSPerformImageOperationUsingWebViewFetchOperation : WBSWebViewMetadataFetchOperation

@property (readonly, nonatomic) WBSPerformImageOperationUsingWebViewRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchOperationFinished;
- (void)_getImageInfoUsingWebView;
- (void)_getMultiResolutionImageDataUsingWebView;
- (void)startOffscreenFetching;

@end
