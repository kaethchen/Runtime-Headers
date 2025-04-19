@class WebView, WebNodeHighlight;

@interface WebNodeHighlighter : NSObject {
    WebView *_inspectedWebView;
    WebNodeHighlight *_currentHighlight;
}

- (void)dealloc;
- (void)hideHighlight;
- (void)highlight;
- (void)didAttachWebNodeHighlight:(id)a0;
- (id)initWithInspectedWebView:(id)a0;
- (void)willDetachWebNodeHighlight:(id)a0;

@end
