@class NSTextField, NSView, NSStackView, AOSUICircularImageView, NSWindow, AIDAAccountManager, NSButton, AAAccountContactPromptModel;
@protocol AOSUIAccountContactPromptActionHandler;

@interface AOSUIAccountContactPromptController : NSViewController

@property (retain) AIDAAccountManager *accountManager;
@property (retain) AAAccountContactPromptModel *viewModel;
@property (retain) id<AOSUIAccountContactPromptActionHandler> actionHandler;
@property (weak) NSTextField *titleLabel;
@property (weak) NSTextField *contactNameLabel;
@property (weak) NSTextField *contactEmailLabel;
@property (weak) AOSUICircularImageView *contactProfileImageView;
@property (weak) NSButton *doneButton;
@property (weak) NSTextField *containerTitleLabel;
@property (weak) NSTextField *containerDetailLabel;
@property (weak) NSButton *containerDestructiveButton;
@property (weak) NSButton *containerPrimaryButton;
@property (weak) NSButton *containerSecondaryButton;
@property (weak) NSStackView *containerStackView;
@property (weak) NSView *contactDetailsContainer;
@property (weak) NSView *actionContainer;
@property (weak) NSView *doneButtonContainer;
@property (retain) NSWindow *modalWindow;
@property (retain) NSWindow *hostWindow;

- (void).cxx_destruct;
- (void)dismiss;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (id)_authContext;
- (void)doneButtonPressed:(id)a0;
- (id)initWithViewModel:(id)a0;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)_showAuthenticationAlertWithCompletion:(id /* block */)a0;
- (void)configureActionContainer;
- (void)configureContactView;
- (void)configureDoneContainer;
- (void)destructiveButtonPressed:(id)a0;
- (id)initWithAccountManager:(id)a0 viewModel:(id)a1 actionHandler:(id)a2;
- (id)initWithViewModel:(id)a0 actionHandler:(id)a1;
- (void)presentViewControllerFromHostWindow:(id)a0;
- (void)primaryButtonPressed:(id)a0;
- (void)secondaryButtonPressed:(id)a0;

@end
