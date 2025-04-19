@class NSString, NSWindow, AIDAAccountManager;

@interface AOSUIAccountConversionSignOutFlowControllerDelegate : NSObject <AASignOutFlowControllerDelegate> {
    BOOL _shouldRemoveAppleAccount;
}

@property (weak, nonatomic) NSWindow *presentingWindow;
@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)signOutFlowController:(id)a0 disableFindMyDeviceForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 performWalrusValidationForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)signOutFlowController:(id)a0 signOutAccount:(id)a1 completion:(id /* block */)a2;
- (id)_prepareDataClassActionsForDeletion:(id)a0;
- (id)initWithAccountManager:(id)a0 shouldRemoveAppleAccount:(BOOL)a1 presentingWindow:(id)a2;
- (id)initWithPresentingWindow:(id)a0;

@end
