@class _PKProvisioningBackgroundCoordinator;

@interface PKProvisioningBackgroundCoordinator : NSObject {
    _PKProvisioningBackgroundCoordinator *_coordinator;
}

+ (void)provisionPaymentCredential:(id)a0 forPairedWatch:(BOOL)a1 completion:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (id)archivedState;
- (void)cleanUpArchivedProvisioningAndInvalidateWithCompletion:(id /* block */)a0;
- (id)initWithSetupContext:(id)a0 credential:(id)a1 previouslyAcceptedTerms:(BOOL)a2;
- (void)setOnRecoverableCheckpointReached:(id /* block */)a0;
- (void)startWithCompletion:(id /* block */)a0;

@end
