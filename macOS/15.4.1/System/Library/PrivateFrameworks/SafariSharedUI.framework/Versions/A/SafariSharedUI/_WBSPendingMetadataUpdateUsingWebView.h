@class NSURL, WKWebView;

@interface _WBSPendingMetadataUpdateUsingWebView : NSObject

@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0 url:(id)a1;

@end
