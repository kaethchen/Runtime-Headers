@class WebPreferences, WebView, NSString;
@protocol AKWebKitControllerDelegate;

@interface AKWebKitController : NSObject <WebFrameLoadDelegate, WebResourceLoadDelegate, WebUIDelegate> {
    struct { unsigned char webViewSetFrame : 1; unsigned char delegateConfigureForFrame : 1; unsigned char delegateDidCreateJavaScriptContextFrame : 1; unsigned char delegateDidCancel : 1; unsigned char delegateDidSucceed : 1; unsigned char delegateDidFailLoading : 1; unsigned char delegateDidFinishLoading : 1; unsigned char delegateDidReceiveResponse : 1; unsigned char delegateSignRequest : 1; unsigned char padding : 1; } _delegateFlags;
}

@property (retain, nonatomic) WebPreferences *webPreferences;
@property (retain, nonatomic) WebView *webView;
@property (weak, nonatomic) id<AKWebKitControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)webView:(id)a0 didCommitLoadForFrame:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFailProvisionalLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (id)webView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (void)reload;
- (void)loadHTMLString:(id)a0;
- (void)loadURLRequest:(id)a0;
- (id)initInView:(id)a0;
- (void)loadHTMLString:(id)a0 withParentURL:(id)a1;
- (id)webView:(id)a0 contextMenuItemsForElement:(id)a1 defaultMenuItems:(id)a2;
- (void)webView:(id)a0 didCreateJavaScriptContext:(id)a1 forFrame:(id)a2;
- (unsigned long long)webView:(id)a0 dragDestinationActionMaskForDraggingInfo:(id)a1;
- (void)webView:(id)a0 resource:(id)a1 didReceiveResponse:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 runOpenPanelForFileButtonWithResultListener:(id)a1;
- (void)webView:(id)a0 setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)webViewURL;

@end
