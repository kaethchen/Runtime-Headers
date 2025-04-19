@class WebView;

@interface GKAppearanceWebViewWrapper : NSView

@property (retain) WebView *webView;
@property BOOL htmlLoaded;

- (void).cxx_destruct;
- (void)updateLayer;

@end
