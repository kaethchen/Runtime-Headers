@interface NewDeviceOutreachMacUI.NDOACWebViewController : NSViewController <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ warranty;
    void /* unknown type, empty encoding */ serialNumber;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ initialLoadCompleted;
    void /* unknown type, empty encoding */ retriesRemaining;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ kWebViewLoadMaxRetries;
    void /* unknown type, empty encoding */ kWebViewLoadRetryStatus;
    void /* unknown type, empty encoding */ kWebViewLoadSuccessStatus;
    void /* unknown type, empty encoding */ kWebViewLoadCloseScheme;
    void /* unknown type, empty encoding */ kWebViewLoadReadyScheme;
    void /* unknown type, empty encoding */ kWebViewLoadCompleteScheme;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ webview;
@property (nonatomic, weak) void /* unknown type, empty encoding */ spinner;
@property (nonatomic, weak) void /* unknown type, empty encoding */ headerView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ cancelButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ backButton;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)cancelButtonPressed:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;

@end
