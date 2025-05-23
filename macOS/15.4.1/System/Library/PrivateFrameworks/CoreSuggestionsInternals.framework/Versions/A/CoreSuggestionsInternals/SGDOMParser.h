@class NSString, WKWebView, NSObject;
@protocol OS_dispatch_semaphore;

@interface SGDOMParser : NSObject <WKNavigationDelegate> {
    NSObject<OS_dispatch_semaphore> *_loadedSem;
    WKWebView *_webView;
    NSString *_html;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)webView;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (id)_parseDocument:(id)a0;
- (id)parseHTML:(id)a0;
- (void)runJavascriptOnWebView:(id)a0 withCallback:(id /* block */)a1;

@end
