@class NSTextField, NSString, WKWebView, NSProgressIndicator, NSButton;
@protocol ADUserTransparencySheetDelegate;

@interface ADUserTransparencySheet : NSWindowController <WKNavigationDelegate> {
    NSProgressIndicator *activityIndicator;
    NSButton *doneButton;
}

@property (retain, nonatomic) NSString *userTransparencyDetailsUnavailableMessage;
@property (retain, nonatomic) NSString *userTransparencyRendererPayload;
@property (retain, nonatomic) NSString *userTransparencyRendererURL;
@property (readonly, nonatomic) BOOL renderingStatusForPAPermission;
@property (retain, nonatomic) NSTextField *errorTextField;
@property (retain, nonatomic) WKWebView *userPrivacyWebView;
@property (retain, nonatomic) id<ADUserTransparencySheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)donePressed:(id)a0;
- (void)_showErrorMessage:(id)a0;
- (void)loadWebView;
- (id)initWithAdUserTransparencySheet;
- (void)_reportAdUserTransparencySheetEventWithType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_hideErrorMessage;
- (void)immediatelyLoadSheetViewBeforeNetworkRequest;
- (id)normalizeChineseLanguage:(id)a0;
- (void)presentViewDelegate;
- (void)renderUserTransparencySheet;
- (void)requestUserTransparencyDetailsWithCompletionHandler:(id /* block */)a0;

@end
