@class CDPStateController, NSString, AOSUIAccountContactSetupFlowController, CDPWalrusStateController, AKBiometricRatchetController, NSWindow, AIDAAccountManager, CDPStateUIController;
@protocol AOSUIRecoveryFactorControllerDelegate;

@interface AOSUIRecoveryFactorController : AARecoveryFactorController <AOSUIAccountContactSetupFlowControllerDelegate> {
    CDPStateController *_stateController;
    CDPStateUIController *_stateUIController;
    AOSUIAccountContactSetupFlowController *_custodianFlowController;
    AKBiometricRatchetController *_bioRatchetController;
    CDPWalrusStateController *_walrusStateController;
}

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (weak, nonatomic) id<AOSUIRecoveryFactorControllerDelegate> delegate;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHostWindow:(id)a0;
- (id)_account;
- (void)presentEDPRecoveryFlowWithCompletion:(id /* block */)a0;
- (void)accountContactSetupFlowControllerDidFinish:(id)a0;
- (id)_bioRatchetController;
- (void)_continueAddingRecoveryContact;
- (void)_custodianFlowControllerWithCompletion:(id /* block */)a0;
- (void)_handleRecoveryKeyOperationResultWithSuccess:(BOOL)a0 error:(id)a1 operationDescription:(id)a2 completion:(id /* block */)a3;
- (void)_presentAccountRecoveryFlowWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentEDPRecoveryTokenWindowWithCompletionHandler:(id /* block */)a0;
- (void)_presentRecoveryContactViewWithCompletionHandler:(id /* block */)a0;
- (void)_showCustodianAddNotAllowedAlert;
- (void)_showEDPRecoveryTokenPaneWithToken:(id)a0 hostWindow:(id)a1 accountManager:(id)a2 completion:(id /* block */)a3;
- (id)_stateController;
- (id)_stateUIController;
- (id)_walrusStateController;
- (void)authenticateAndDeleteRecoveryKeyFromAllSystemsWithCompletion:(id /* block */)a0;
- (void)authenticateAndGenerateRecoveryKeyWithCompletion:(id /* block */)a0;
- (void)generateRecoveryKeyWithCompletion:(id /* block */)a0;
- (id)initWithAccountManager:(id)a0 hostWindow:(id)a1;
- (void)presentAccountRecoveryFlowWithCompletion:(id /* block */)a0;
- (void)presentAccountRecoveryFlowWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)startAddingDataRecoveryServiceInWindow:(id)a0;
- (void)startAddingRecoveryContact;

@end
