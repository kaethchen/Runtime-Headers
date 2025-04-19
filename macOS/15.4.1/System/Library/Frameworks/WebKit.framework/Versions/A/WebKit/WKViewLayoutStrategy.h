@class NSView;

@interface WKViewLayoutStrategy : NSObject {
    struct NakedPtr<WebKit::WebPageProxy> { struct WebPageProxy *m_ptr; } _page;
    struct NakedPtr<WebKit::WebViewImpl> { struct WebViewImpl *m_ptr; } _webViewImpl;
    NSView *_view;
    unsigned int _layoutMode;
}

@property (readonly, nonatomic) unsigned int layoutMode;

+ (id)layoutStrategyWithPage:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 view:(id)a1 viewImpl:(struct NakedRef<WebKit::WebViewImpl> { struct WebViewImpl *x0; })a2 mode:(unsigned int)a3;

- (void)invalidate;
- (id).cxx_construct;
- (void)updateLayout;
- (void)didChangeFrameSize;
- (void)didChangeViewScale;
- (void)didEndLiveResize;
- (void)disableFrameSizeUpdates;
- (void)enableFrameSizeUpdates;
- (BOOL)frameSizeUpdatesDisabled;
- (id)initWithPage:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 view:(id)a1 viewImpl:(struct NakedRef<WebKit::WebViewImpl> { struct WebViewImpl *x0; })a2 mode:(unsigned int)a3;
- (void)willChangeLayoutStrategy;
- (void)willStartLiveResize;

@end
