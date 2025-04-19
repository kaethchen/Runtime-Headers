@class AKAppleIDServerResourceLoadDelegate, AKAppleIDAuthenticationController, NSString, AKAppleIDSession, WebView, NSURLRequest, WebPreferences, AKAppleIDAuthenticationContext, NSMapTable, CDPStateUIController;
@protocol MMWebKitControllerDelegate;

@interface MMWebKitController : NSObject <WebUIDelegate, WebFrameLoadDelegate, WebResourceLoadDelegate> {
    AKAppleIDSession *_appleIDSession;
    AKAppleIDAuthenticationController *_appleIDController;
    AKAppleIDAuthenticationContext *_authContext;
    CDPStateUIController *cdpStateUIController;
    AKAppleIDServerResourceLoadDelegate *_loadDelegate;
    BOOL _setupResourceDelegate;
    struct { unsigned char webViewSetFrame : 1; unsigned char delegateConfigureForFrame : 1; unsigned char delegateDidCreateJavaScriptContextFrame : 1; unsigned char delegateDidCancel : 1; unsigned char delegateDidSucceed : 1; unsigned char delegateDidFailLoading : 1; unsigned char delegateDidFinishLoading : 1; unsigned char delegateDidReceiveResponse : 1; unsigned char delegateWindow : 1; unsigned char padding : 1; } _delegateFlags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _signpostEndBlocksLock;
}

@property (retain, nonatomic) WebPreferences *webPreferences;
@property (retain, nonatomic) WebView *webView;
@property (copy, nonatomic) NSURLRequest *loadingRequest;
@property (retain, nonatomic) NSMapTable *signpostEndBlocks;
@property (nonatomic) id<MMWebKitControllerDelegate> delegate;
@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *oldPassword;
@property (nonatomic) unsigned long long gsType;
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
- (void)webView:(id)a0 resource:(id)a1 didFailLoadingWithError:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didFinishLoadingFromDataSource:(id)a2;
- (void)webView:(id)a0 resource:(id)a1 didReceiveAuthenticationChallenge:(id)a2 fromDataSource:(id)a3;
- (id)webView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (void)reload;
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
- (BOOL)webView:(id)a0 resource:(id)a1 canAuthenticateAgainstProtectionSpace:(id)a2 forDataSource:(id)a3;
- (void)_didFinishLoadingRequest:(id)a0 forFrame:(id)a1 withError:(id)a2;
- (void)_didFinishLoadingResource:(id)a0 withError:(id)a1;
- (void)_setSignpostEndBlock:(id /* block */)a0 forKey:(id)a1;
- (id /* block */)_signpostEndBlockForKey:(id)a0;
- (void)_updateAuthControllerWithResponse:(id)a0;
- (void)setupResourceLoadDelegate;

@end
