@class AAAccountBeneficiaryManagementViewModel, AOSUIAccountContactSetupFlowController, AOSUIAccountContactsTableViewController, AOSUIContactsProvider, AOSUIAccountContactsTopContentViewController;

@interface AOSUIAccountBeneficiaryViewController : AOSUIAccountContactsViewController {
    AAAccountBeneficiaryManagementViewModel *_viewModel;
    AOSUIAccountContactsTopContentViewController *_topContentViewController;
    AOSUIAccountContactsTableViewController *_beneficiaryTableViewController;
    AOSUIAccountContactsTableViewController *_benefactorTableViewController;
    AOSUIContactsProvider *_contactProvider;
    AOSUIAccountContactSetupFlowController *setupFlowController;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_appleAccount;
- (id)initWithAccountManager:(id)a0;
- (void)_configureStackView;
- (void)_beginObservingTrustedContactChangeNotification;
- (void)_fetchAllInheritanceContacts;
- (void)_setupBenefactorTableView;
- (void)_setupBeneficiaryTableView;
- (void)_setupTopContentView;
- (void)_stopObservingTrustedContactChangeNotification;
- (void)_syncTrustedContactsFromCloudKit;
- (void)addBeneficiaryButtonPressed:(id)a0;
- (void)presentViewControllerFromHostWindow:(id)a0;

@end
