@class AOSUIAccountContactSetupFlowController, NSWindow, NSViewController;

@interface AOSUILegacyContactsViewController : AOSUIAccountContactsViewController {
    NSViewController *_viewController;
    NSWindow *_hostWindow;
    AOSUIAccountContactSetupFlowController *setupFlowController;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_appleAccount;
- (id)initWithAccountManager:(id)a0;
- (void)_addTrustedContactNotificationObserved;
- (void)_showTrustedContactsDetails:(id)a0;
- (void)_startObservingBeneficiaryChanges;
- (void)_stopObservingBeneficiaryChanges;
- (void)presentViewControllerFromHostWindow:(id)a0 viewController:(id)a1 completionHandler:(id /* block */)a2;

@end
