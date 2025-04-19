@interface PassKitMacHelper.ProvisioningVerificationFlowSection : NSObject <PKPaymentVerificationControllerFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ verificationController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)presentationContext;
- (void)didFinishVerification;

@end
