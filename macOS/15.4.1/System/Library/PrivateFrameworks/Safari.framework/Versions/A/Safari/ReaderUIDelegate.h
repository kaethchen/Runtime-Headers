@class NSString, ReaderViewController;

@interface ReaderUIDelegate : NSObject <WKUIDelegatePrivate> {
    ReaderViewController *_readerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)_webView:(id)a0 didNotHandleWheelEvent:(id)a1;
- (void)_webView:(id)a0 drawFooterInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forPageWithTitle:(id)a2 URL:(id)a3;
- (void)_webView:(id)a0 drawHeaderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forPageWithTitle:(id)a2 URL:(id)a3;
- (void)_webView:(id)a0 getContextMenuFromProposedMenu:(id)a1 forElement:(id)a2 userInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)_webView:(id)a0 mouseDidMoveOverElement:(id)a1 withFlags:(unsigned long long)a2 userInfo:(id)a3;
- (void)_webView:(id)a0 printFrame:(id)a1;
- (void)_webViewDidScroll:(id)a0;
- (double)_webViewFooterHeight:(id)a0;
- (double)_webViewHeaderHeight:(id)a0;
- (id)initWithReaderViewController:(id)a0;

@end
