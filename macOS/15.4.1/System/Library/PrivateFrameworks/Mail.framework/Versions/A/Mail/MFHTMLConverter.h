@class NSString, NSData, NSPort, WebView, NSObject;
@protocol OS_os_log;

@interface MFHTMLConverter : NSObject <WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, EFLoggable, NSPortDelegate> {
    NSPort *_replyPort;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) WebView *webView;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL didHandlePortMessage;
@property (nonatomic) long long mainThreadSelectorType;
@property (retain, nonatomic) NSData *resultData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handlePortMessage:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFailProvisionalLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (id)webView:(id)a0 identifierForInitialRequest:(id)a1 fromDataSource:(id)a2;
- (void)webView:(id)a0 resource:(id)a1 didReceiveAuthenticationChallenge:(id)a2 fromDataSource:(id)a3;
- (id)webView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (id)_archivedAttributedStringFromLoadedDocument;
- (id)_archivedHTMLStringWithInlinedStyleFromLoadedDocument;
- (void)_loadWebViewOnMainThreadFromData:(id)a0 withTextEncodingName:(id)a1 orFromWebArchive:(id)a2;
- (void)_setUpWebView;
- (void)_stopLoadingWebView;
- (id)junkMailParserResultFromHTMLString:(id)a0 baseURL:(id)a1;
- (void)webView:(id)a0 locationChangeDone:(id)a1 forDataSource:(id)a2;

@end
