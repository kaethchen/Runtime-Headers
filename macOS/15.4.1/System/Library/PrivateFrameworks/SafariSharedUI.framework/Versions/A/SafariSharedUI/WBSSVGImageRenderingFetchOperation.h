@class WBSSVGImageRenderingRequest, NSMutableArray, NSTimer;

@interface WBSSVGImageRenderingFetchOperation : WBSWebViewMetadataFetchOperation {
    NSMutableArray *_remainingURLs;
    NSTimer *_loadingTimeoutTimer;
}

@property (readonly, nonatomic) WBSSVGImageRenderingRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)didFinishNavigation;
- (id)webViewConfiguration;
- (void)_didCompleteWithImage:(id)a0;
- (void)_didRenderImage:(id)a0;
- (id)_htmlStringWithImageElementString:(id)a0;
- (id)_htmlStringWithSVGContent:(id)a0;
- (id)_htmlStringWithURL:(id)a0;
- (void)_loadSVGFileURL:(id)a0;
- (void)_loadingTimerDidTimeout:(id)a0;
- (void)_renderNextImage;
- (void)_takeSnapshotAndFinish;
- (void)didCreateWebView;
- (void)didFailFetchWithError:(id)a0;
- (void)startOffscreenFetching;
- (struct CGSize { double x0; double x1; })webViewSize;

@end
