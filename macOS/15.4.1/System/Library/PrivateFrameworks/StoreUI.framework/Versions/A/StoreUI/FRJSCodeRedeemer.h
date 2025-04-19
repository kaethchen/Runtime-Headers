@class AMSUICodeRedeemerViewController, NSString, FRWKView, NSWindow;

@interface FRJSCodeRedeemer : FRJSObject <AMSUICodeRedeemerViewControllerDelegate>

@property (readonly, weak) FRWKView *webView;
@property (retain) AMSUICodeRedeemerViewController *codeRedeemer;
@property (retain) NSWindow *codeRedeemerWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)codeRedeemer:(id)a0 didFailWithError:(id)a1;
- (void)codeRedeemer:(id)a0 didSucceedWithCodes:(id)a1;
- (void)codeRedeemer:(id)a0 willRecognizeCodes:(id)a1;
- (void)codeRedeemerDidDismiss:(id)a0;
- (void)codeRedeemerDidFadeStatus:(id)a0;
- (void)codeRedeemerDidFindBox:(id)a0;
- (void)codeRedeemerDidStart:(id)a0;
- (void)codeRedeemerWillFadeStatus:(id)a0;
- (id)callFunction:(id)a0 withArguments:(id)a1;

@end
