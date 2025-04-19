@class WebView;

@interface WebTextListTouchBarViewController : NSViewController {
    WebView *_webView;
}

@property (nonatomic) int currentListType;

- (void)_selectList:(id)a0;
- (id)initWithWebView:(id)a0;

@end
