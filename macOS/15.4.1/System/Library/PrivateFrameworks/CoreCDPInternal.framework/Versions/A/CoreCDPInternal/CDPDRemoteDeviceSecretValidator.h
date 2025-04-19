@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {
    id /* block */ _requestToJoinCompletion;
    BOOL _isWaitingForRemoteApproval;
}

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)cancelApproveFromAnotherDevice;
- (void)attemptToJoinCircleWithPiggybacking:(id)a0 withCompletion:(id /* block */)a1;
- (void)resetAccountCDPStateWithEscapeOptionsOffered:(unsigned long long)a0;
- (void)resetAccountCDPStateWithEscapeOptionsOffered:(unsigned long long)a0 andSetSecret:(id)a1;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)validateCustodianRecoveryInfo:(id)a0 withCompletion:(id /* block */)a1;
- (id)_decoratedDelegate;
- (void)_retriableValidateCustodianRecoveryInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)setValidSecretHandler:(id /* block */)a0;

@end
