@class NSString, AKInheritanceAccessKey;

@interface CDPToolFakeUIProvider : NSObject <CDPStateUIProvider>

@property (copy, nonatomic) NSString *localSecret;
@property (copy, nonatomic) NSString *remoteSecret;
@property (copy, nonatomic) NSString *icsc;
@property (copy, nonatomic) NSString *recoveryKey;
@property (copy, nonatomic) AKInheritanceAccessKey *accessKey;
@property (copy, nonatomic) NSString *recoveryToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cdpContext:(id)a0 promptForAdoptionOfMultipleICSC:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForICSCWithIsNumeric:(BOOL)a1 numericLength:(id)a2 isRandom:(BOOL)a3 validator:(id)a4;
- (void)cdpContext:(id)a0 promptForInteractiveAuthenticationWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForLocalSecretWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithSecretValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)cdpRecoveryFlowContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 validator:(id)a2;
- (void)cdpContext:(id)a0 promptForEDPRecoveryTokenWithValidator:(id)a1 successfulCDPRecoveryContinuationHandler:(id /* block */)a2;
- (void)showCustodianProvidedCodeEntryScreen:(id)a0 controller:(id)a1 validator:(id)a2;
- (void)startCustodianRecoveryWithContext:(id)a0 validator:(id)a1;
- (void)validateCode:(id)a0 controller:(id)a1 completion:(id /* block */)a2;

@end
