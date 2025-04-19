@class CDPContext;
@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRemoteDeviceSecretValidator : NSObject {
    id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
    CDPContext *_context;
}

- (void).cxx_destruct;
- (void)validateRecoveryKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)validateSecret:(id)a0 devices:(id)a1 type:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)cancelValidationWithError:(id)a0;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)cancelApproveFromAnotherDevice;
- (unsigned long long)supportedEscapeOfferMask;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)a0;
- (void)attemptToJoinCircleWithPiggybacking:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithContext:(id)a0 validator:(id)a1;
- (void)repairEDPStateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)resetAccountCDPState;
- (void)resetAccountCDPStateWithEscapeOptionsOffered:(unsigned long long)a0;
- (void)resetAccountCDPStateWithEscapeOptionsOffered:(unsigned long long)a0 andSetSecret:(id)a1;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)validateCustodianRecoveryInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)validateEDPRecoveryToken:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;

@end
