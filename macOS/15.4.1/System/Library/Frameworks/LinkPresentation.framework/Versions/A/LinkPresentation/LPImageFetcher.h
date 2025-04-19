@class NSURL, WKWebView;

@interface LPImageFetcher : LPFetcher <LPFetcherURLSource> {
    id /* block */ _completionHandler;
    WKWebView *_webView;
}

@property (retain, nonatomic) NSURL *URL;

+ (id)imageFetcherForConfiguration:(id)a0;

- (void).cxx_destruct;
- (void)cancel;
- (void)_completedWithImage:(id)a0 error:(id)a1;
- (void)_failedWithErrorCode:(long long)a0 underlyingError:(id)a1;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
