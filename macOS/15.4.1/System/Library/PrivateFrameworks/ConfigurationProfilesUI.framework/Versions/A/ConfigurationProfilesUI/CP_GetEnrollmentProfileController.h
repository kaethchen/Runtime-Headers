@class NSURL, NSButton, NSDictionary, NSBox, NSProgressIndicator, NSLayoutConstraint, NSString, WKWebView, NSArray, NSView, NSData, NSTextField, NSError;

@interface CP_GetEnrollmentProfileController : NSWindowController <WKNavigationDelegate, WKDownloadDelegate, WKUIDelegate, _WKDiagnosticLoggingDelegate>

@property (retain) NSView *webViewContainer;
@property (retain) NSBox *webViewBox;
@property (retain) NSTextField *promptLabel;
@property (retain) NSButton *cancelButton;
@property (retain) NSTextField *statusLabel;
@property (retain) NSButton *retryButton;
@property (retain) NSLayoutConstraint *layoutRetryLeading;
@property (retain) NSLayoutConstraint *layoutRetryTrailing;
@property (retain) NSLayoutConstraint *layoutRetryBaseline;
@property (retain) NSLayoutConstraint *layoutStatusTrailing;
@property (retain) WKWebView *webView;
@property (retain) NSProgressIndicator *webViewSpinner;
@property (retain) NSURL *initialURL;
@property (retain) NSString *orgName;
@property (retain) NSArray *anchorCerts;
@property (retain) NSError *authError;
@property BOOL mdmCanRequireSUVia403;
@property unsigned long long numPagesLoaded;
@property unsigned long long downloadMode;
@property (retain) NSData *downloadedData;
@property (retain) NSString *downloadDestination;
@property NSString *mimeTypeFor403;
@property (retain) NSDictionary *softwareUpdateRequiredDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)windowDidLoad;
- (void)downloadDidFinish:(id)a0;
- (void)setStatus:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 navigationAction:(id)a1 didBecomeDownload:(id)a2;
- (void)webView:(id)a0 navigationResponse:(id)a1 didBecomeDownload:(id)a2;
- (void)_webView:(id)a0 navigation:(id)a1 didFailProvisionalLoadInSubframe:(id)a2 withError:(id)a3;
- (void)_webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2 userInfo:(id)a3;
- (void)_webView:(id)a0 navigationDidFinishDocumentLoad:(id)a1;
- (void)_webViewWebProcessDidCrash:(id)a0;
- (void)download:(id)a0 decideDestinationUsingResponse:(id)a1 suggestedFilename:(id)a2 completionHandler:(id /* block */)a3;
- (void)download:(id)a0 didFailWithError:(id)a1 resumeData:(id)a2;
- (void)download:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)buttonClicked:(id)a0;
- (void)clearStatus;
- (void)addSpinnerToWebView;
- (void)download:(id)a0 didWriteData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)handleAuthenticationFrom:(id)a0 challenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)setRetryVisible:(BOOL)a0;
- (void)setStatusToError:(id)a0;
- (void)setStatusToErrorText:(id)a0;
- (void)startLoad;

@end
