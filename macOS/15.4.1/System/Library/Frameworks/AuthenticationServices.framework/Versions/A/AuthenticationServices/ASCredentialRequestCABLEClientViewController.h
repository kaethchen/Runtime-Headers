@class ASCABLELoginChoice, NSObject, ASCAuthorizationPresentationContext;
@protocol OS_os_activity;

@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCABLELoginChoice *_loginChoice;
    NSObject<OS_os_activity> *_authorizationActivity;
}

- (void).cxx_destruct;
- (void)_setUpTitleView;
- (void)viewDidLoad;
- (double)_marginBelowQRCode;
- (double)_marginBelowSecurityKeyButton;
- (id)_qrCodeMessage;
- (void)_setUpQRCodeView;
- (void)_setUpSecurityKeyButtonViewIfNeeded;
- (id)_titleText;
- (void)_useSecurityKeyButtonTapped;
- (id)initWithPresentationContext:(id)a0 loginChoice:(id)a1 activity:(id)a2;

@end
