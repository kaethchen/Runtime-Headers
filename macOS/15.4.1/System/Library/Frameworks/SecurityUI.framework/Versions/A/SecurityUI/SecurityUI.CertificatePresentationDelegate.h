@interface SecurityUI.CertificatePresentationDelegate : NSObject <SFCertificatePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ currentWindow;
    void /* unknown type, empty encoding */ onDismiss;
}

- (id)init;
- (void).cxx_destruct;
- (void)certificatePresentationControllerDidDismiss:(id)a0;
- (id)presentationWindowForCertificatePresentationController:(id)a0;

@end
