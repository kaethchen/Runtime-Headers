@class NSString, NSArray, SFCertificatePresentationController;
@protocol CertificateSheetViewControllerDelegate;

@interface CertificateSheetViewController : NSObject <SFCertificatePresentationControllerDelegate> {
    NSArray *_certificateChain;
    NSString *_evCertificateOrganizationName;
    NSString *_hostName;
    struct RetainPtr<__SecTrust *> { void *m_ptr; } _serverTrust;
    SFCertificatePresentationController *_certificatePresentationController;
}

@property (weak, nonatomic) id<CertificateSheetViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_certificateTrustSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_showCertificateSheetWithHostname:(id)a0 cerficiateChain:(id)a1 evCertificateOrganizationName:(id)a2 inWindow:(id)a3;
- (void)certificatePresentationControllerDidDismiss:(id)a0;
- (id)initWithBrowserViewController:(id)a0;
- (id)initWithCertificateChain:(id)a0 evCertificateOrganizationName:(id)a1 hostName:(id)a2 serverTrust:(struct __SecTrust { } *)a3;
- (void)showCertificateSheetInWindow:(id)a0;

@end
