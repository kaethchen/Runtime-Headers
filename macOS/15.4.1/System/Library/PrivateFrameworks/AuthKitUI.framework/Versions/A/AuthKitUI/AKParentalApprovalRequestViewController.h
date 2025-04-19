@class AKAuthorizationViewController, AKAuthorizationSubPaneInfoLabel, AKAuthorizationPresentationContext;

@interface AKParentalApprovalRequestViewController : AKAuthorizationPaneViewController {
    AKAuthorizationSubPaneInfoLabel *_messageLabel;
    AKAuthorizationPresentationContext *_presentationContext;
    BOOL _requestStatusPending;
}

@property (weak, nonatomic) AKAuthorizationViewController *authorizationViewController;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_addSendButtonToContext:(id)a0;
- (void)_createIconViewWithIcon:(id)a0;
- (void)_handleAuthorizationError:(id)a0;
- (id)_localizedButtonTitleString;
- (id)_localizedDescriptionLabelString;
- (id)_localizedTitleString;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)a0 error:(id)a1;
- (void)_paneDelegate_didRequestAuthorizationWithUserProvidedInformation:(id)a0 completion:(id /* block */)a1;
- (void)_sendButtonSelected:(id)a0;
- (void)_setupIconView;
- (void)_setupMessageLabel;
- (void)_setupTitleLabel;
- (id)_userResponse;
- (id)initWithPresentationContext:(id)a0;

@end
