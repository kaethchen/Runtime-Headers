@class NSString, AOSUIAccountRecoveryContext, AOSUIPrintableAccountSummaryViewController, AOSUIAccountContactSetupFlowController, AAUICustodianRepairHelper, AOSUIAccountContactsTableViewController, AOSUIAccountContactsTopContentViewController, ACAccount, AAAccountRecoveryManagementViewModel, AOSUIContactsProvider, AOSUIAccountContactsRecoveryKeyViewController;

@interface AOSUIAccountRecoveryViewController : AOSUIAccountContactsViewController <AOSUIAccountContactsRecoveryKeyViewControllerDelegate, AAUIRepairDelegate> {
    AOSUIAccountRecoveryContext *_context;
    AAAccountRecoveryManagementViewModel *_viewModel;
    AOSUIAccountContactsTopContentViewController *_topContentViewController;
    AOSUIAccountContactsTableViewController *_custodianTableViewController;
    AOSUIAccountContactsTableViewController *_custodianshipTableViewController;
    AOSUIAccountContactsRecoveryKeyViewController *_recoveryKeyViewController;
    AOSUIPrintableAccountSummaryViewController *_printableAccountSummaryViewController;
    AOSUIContactsProvider *_contactProvider;
    AOSUIAccountContactSetupFlowController *setupFlowController;
    ACAccount *_idmsAccount;
    BOOL _isWalrusEnabled;
    AAUICustodianRepairHelper *_repairHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_appleAccount;
- (void)_configureStackView;
- (id)initWithAccountManager:(id)a0 context:(id)a1;
- (BOOL)_canBeCustodian;
- (void)_startObservingCustodianChanges;
- (void)finishingRepair;
- (void)_addRecoveryContactNotificationObserved;
- (BOOL)_canHaveCustodian;
- (void)_displayMyCustodians:(id)a0;
- (void)_fetchAllCustodianContacts;
- (void)_fetchWalrusStateWithCompletion:(id /* block */)a0;
- (id)_idmsAccount;
- (BOOL)_isEligibleForRecoveryKey;
- (void)_openSetupFlowController:(id)a0;
- (void)_refreshRecoveryKeyStatus;
- (void)_setUpRecoveryKeyNotificationObserved;
- (void)_setupCustodianTableView;
- (void)_setupCustodianshipTableView;
- (void)_setupPrintableAccountSummaryView;
- (void)_setupRecoveryKeyView;
- (void)_setupTopContentView;
- (void)_showReviewCustodiansModalIfNeeded;
- (void)_startObservingChanges;
- (void)_stopObservingChanges;
- (void)_stopObservingCustodianChanges;
- (void)_syncTrustedContactsFromCloudKit;
- (void)_walrusStateDidChange;
- (void)addCustodianButtonPressed:(id)a0;
- (void)startingRepair;
- (void)webViewDidEndPresentingOnViewController:(id)a0;

@end
