@interface SFCertificateImportManager : SFCertificateTrustPanel {
    id _reserved_SFCertificateImportManager;
}

+ (id)sharedCertificateImportManager;

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)setDelegate:(id)a0;
- (void)unlock;
- (void)setParentWindow:(id)a0;
- (void)setPolicy:(struct __SecPolicy { } *)a0;
- (void)setCertificates:(id)a0;
- (void)setDestinationKeychain:(struct __SecKeychain { } *)a0;
- (id)_clientDelegate;
- (int)_addCert:(struct __SecCertificate { } *)a0 certData:(id)a1 commonName:(id)a2;
- (void)_bringUpTrustSheetForNextCertificate;
- (SEL)_clientDidEndSelector;
- (void)setContextInfo:(void *)a0;
- (void)_addCertAndEndSheet:(struct __SecCertificate { } *)a0 certData:(id)a1 commonName:(id)a2;
- (void *)_clientContextInfo;
- (void)_errSheetDidDismiss:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)_setRef:(id *)a0 toObj:(id)a1;
- (void)_sheetDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)import;
- (void)importCertificates:(id)a0 toKeychain:(struct __SecKeychain { } *)a1 parentWindow:(id)a2 policy:(struct __SecPolicy { } *)a3 modalDelegate:(id)a4 didEndSelector:(SEL)a5 contextInfo:(void *)a6;
- (id)initWithCertificates:(id)a0 toKeychain:(struct __SecKeychain { } *)a1 parentWindow:(id)a2 policy:(struct __SecPolicy { } *)a3;
- (void)setDidEndSelector:(SEL)a0;

@end
