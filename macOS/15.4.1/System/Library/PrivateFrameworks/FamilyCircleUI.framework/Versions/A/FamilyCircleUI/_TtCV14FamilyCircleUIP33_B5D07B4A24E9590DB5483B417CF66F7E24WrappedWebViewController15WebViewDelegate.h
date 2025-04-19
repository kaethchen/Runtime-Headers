@interface _TtCV14FamilyCircleUIP33_B5D07B4A24E9590DB5483B417CF66F7E24WrappedWebViewController15WebViewDelegate : NSObject <iCloudWebViewDelegate> {
    void /* unknown type, empty encoding */ onClose;
    void /* unknown type, empty encoding */ dismiss;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ showMemberPurchaseSharingAction;
}

- (id)init;
- (void).cxx_destruct;
- (void)endWebView:(id)a0;
- (BOOL)shouldHideCancelButton;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)authenticationFailed:(id)a0;
- (void)loadFailed:(id)a0;
- (void)showPurchaseSharingForAltDSID:(id)a0 callback:(id)a1;

@end
