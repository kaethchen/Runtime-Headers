@class AKAuthorizationViewController;

@interface AKAuthorizationFirstTimePaneViewController : AKAuthorizationPaneViewController

@property (weak, nonatomic) AKAuthorizationViewController *authorizationViewController;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_addAdditionalCTAToContext:(id)a0;
- (void)_addContinueButtonToContext:(id)a0 title:(id)a1;
- (void)_addIconToContext:(id)a0;
- (void)_addPrivacyLinkToContext:(id)a0;
- (void)_addSeparatorToContext:(id)a0;
- (void)_addTitleToContext:(id)a0;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)a0;
- (void)_continueButtonSelected:(id)a0;
- (void)_performAdditionalCTA:(id)a0;
- (BOOL)shouldEmbedContentTrayIfNeeded;

@end
