@interface PassKitCore.ProvisioningCarKeyStepFindReader : NSObject <PKAppletSubcredentialPairingSessionDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ credential;
    void /* unknown type, empty encoding */ sharedState;
    void /* unknown type, empty encoding */ carConfiguration;
    void /* unknown type, empty encoding */ commonCompletion;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ bindingAttestation;
    void /* unknown type, empty encoding */ onDidStartPairing;
}

- (id)init;
- (void).cxx_destruct;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)a0 withError:(id)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithError:(id)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithSubcredential:(id)a1 registrationData:(id)a2;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishProbingTerminalWithError:(id)a1 brandCode:(long long)a2;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)a0;

@end
