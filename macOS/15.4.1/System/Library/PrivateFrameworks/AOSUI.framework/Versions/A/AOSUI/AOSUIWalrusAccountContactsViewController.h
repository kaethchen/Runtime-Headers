@class NSStackView, AAOBCustodiansListViewModel, AOSUIContactsProvider, AOSUIAccountContactsTableViewController, AOSUIAccountRecoveryContext, NSButton, NSWindow;

@interface AOSUIWalrusAccountContactsViewController : AOSUISpyglassBaseViewController {
    AOSUIAccountRecoveryContext *_context;
    AAOBCustodiansListViewModel *_viewModel;
    AOSUIContactsProvider *_contactProvider;
    AOSUIAccountContactsTableViewController *_custodianTableViewController;
}

@property (weak) NSButton *continueButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSButton *manageButton;
@property (retain) NSWindow *modalWindow;
@property (retain) NSWindow *hostWindow;
@property (weak) NSStackView *stackViewContainer;

- (void).cxx_destruct;
- (id)nibName;
- (void)cancelButtonPressed:(id)a0;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)_dismissWithCode:(long long)a0;
- (id)initWithAccountManager:(id)a0 context:(id)a1;
- (void)_fetchAllCustodianContacts;
- (void)_setupButtons;
- (void)_setupCustodianTableView;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)continueButtonPressed:(id)a0;
- (void)manageButtonPressed:(id)a0;
- (void)presentViewControllerFromHostWindow:(id)a0 withCompletion:(id /* block */)a1;

@end
