@class WKProcessPool, NSMutableSet;

@interface WBSWebViewPoolManager : NSObject {
    WKProcessPool *_processPool;
    NSMutableSet *_usedWebViews;
    NSMutableSet *_reusableWebViews;
}

- (id)init;
- (void).cxx_destruct;
- (id)_processPool;
- (void)_discardWebViewSoon:(id)a0;
- (unsigned long long)_numberOfConcurrentRequests;
- (id)_popReusableWebView;
- (void)didFinishUsingWebView:(id)a0;
- (void)getWebViewOfSize:(struct CGSize { double x0; double x1; })a0 withConfiguration:(id)a1 completionHandler:(id /* block */)a2;

@end
