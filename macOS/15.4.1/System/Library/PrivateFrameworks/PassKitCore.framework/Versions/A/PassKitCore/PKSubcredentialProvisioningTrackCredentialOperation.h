@class NSData, PKAppletSubcredential;

@interface PKSubcredentialProvisioningTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _performingOperation;
    BOOL _hasTrackedCredential;
    BOOL _firstTransactionCompleted;
    PKAppletSubcredential *_subcredential;
    NSData *_trackingAttestation;
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;
- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)a0 withError:(id)a1;
- (void)performOperationWithCompletion:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)trackCredentialWithAttestation;

@end
