@interface MFJunkMailParser : NSObject <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ activePromise;
    void /* unknown type, empty encoding */ hasAddedScriptMessageHandlers;
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_webView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_parsingScriptHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loggingScriptHandler;
}

@property (class, nonatomic, readonly) MFJunkMailParser *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (id)parseHTMLString:(id)a0 baseURL:(id)a1;

@end
