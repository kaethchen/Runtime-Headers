@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRecoveryKeySecretValidatorProxyImpl : NSObject <CDPRemoteDeviceSecretValidatorProtocol> {
    id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
}

@property (nonatomic) unsigned long long supportedEscapeOfferMask;

- (void).cxx_destruct;
- (void)validateRecoveryKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)validateSecret:(id)a0 devices:(id)a1 type:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)cancelValidationWithError:(id)a0;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)cancelApproveFromAnotherDevice;
- (id)initWithRemoteObject:(id)a0;
- (void)resetAccountCDPStateWithEscapeOptionsOffered:(unsigned long long)a0;
- (void)resetAccountCDPStateWithEscapeOptionsOffered:(unsigned long long)a0 andSetSecret:(id)a1;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)validateCustodianRecoveryInfo:(id)a0 withCompletion:(id /* block */)a1;

@end
