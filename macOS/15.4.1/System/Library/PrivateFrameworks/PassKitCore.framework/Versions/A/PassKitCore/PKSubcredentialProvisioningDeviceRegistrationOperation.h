@class PKPaymentProvisioningController;

@interface PKSubcredentialProvisioningDeviceRegistrationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentProvisioningController *_provisioningController;
    BOOL _operationCancelled;
}

- (void).cxx_destruct;
- (void)performOperation;
- (void)cancelOperation;
- (BOOL)canCancelOperation;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
