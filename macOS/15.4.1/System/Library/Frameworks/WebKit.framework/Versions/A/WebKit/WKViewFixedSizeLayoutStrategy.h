@interface WKViewFixedSizeLayoutStrategy : WKViewLayoutStrategy

- (void)updateLayout;
- (id)initWithPage:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 view:(id)a1 viewImpl:(struct NakedRef<WebKit::WebViewImpl> { struct WebViewImpl *x0; })a2 mode:(unsigned int)a3;

@end
