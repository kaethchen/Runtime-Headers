@class NSString, AKAccountRecoveryModel;

@interface AKAccountRecoveryStepiCloudSecurityCode : NSObject <CDPStateUIProvider, AKAccountRecoveryStep> {
    id /* block */ _completion;
    AKAccountRecoveryModel *_model;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_promptForRecoveryKeyWithModel:(id)a0;
- (void)_beginICloudSecurityCodeWithResponse:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (id)_promptForPasscodeWithModel:(id)a0;
- (void)_verifyClientInfoWithResponse:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)_verifyLocalSecretWithModel:(id)a0 completion:(id /* block */)a1;
- (void)_verifyPinViewWithResponse:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)_verifyRemoteSecretWithRecoveryContext:(id)a0 recoveredInfo:(id)a1 recoveryError:(id)a2 model:(id)a3 completion:(id /* block */)a4;
- (void)_verifyRemoteSecretWithServerInfo:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (BOOL)canProcessResponse:(id)a0;
- (void)cdpContext:(id)a0 presentRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForAdoptionOfMultipleICSC:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForICSCWithIsNumeric:(BOOL)a1 numericLength:(id)a2 isRandom:(BOOL)a3 validator:(id)a4;
- (void)cdpContext:(id)a0 promptForInteractiveAuthenticationWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithSecretValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)cdpRecoveryFlowContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 validator:(id)a2;
- (void)processResponse:(id)a0 model:(id)a1 withCompletion:(id /* block */)a2;

@end
