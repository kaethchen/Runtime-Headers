@class NSArray, WKWebView, _WKApplicationManifest;

@interface WBSApplicationManifestFetcher : NSObject {
    NSArray *_completionHandlers;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

+ (void)downloadImagesForManifest:(id)a0 linkIconParameters:(id)a1 usingWebView:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (double)_longestEdgeForIcon:(id)a0;
+ (long long)_preferredPurposeForIcons:(id)a0;
+ (long long)_primaryPurposeForPurposes:(id)a0;

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)getApplicationManifestWithCompletionHandler:(id /* block */)a0;

@end
