@interface GenerativeAssistantSettings.GenerativeAssistantEnablementViewControllerChatGPT : OBTemplateContainerViewController {
    void /* unknown type, empty encoding */ enablementDelegate;
    void /* unknown type, empty encoding */ requestType;
    void /* unknown type, empty encoding */ isExplicitRequest;
    void /* unknown type, empty encoding */ sheetStyle;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)showPrivacyView;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (void)showAccountView;
- (void)dismissedWithCancel;
- (void)dismissedWithEnableWithAccount;
- (void)dismissedWithEnableWithoutAccount;
- (void)dismissedWithNotNow;
- (void)openChatGPTTermsURL;
- (void)showEnablementView;

@end
