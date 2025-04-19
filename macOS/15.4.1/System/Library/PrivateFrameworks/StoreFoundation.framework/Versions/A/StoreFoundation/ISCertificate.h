@interface ISCertificate : NSObject {
    struct __SecTrust { } *_trust;
}

- (void)dealloc;
- (BOOL)isValid;
- (void)setCertificateData:(id)a0;
- (BOOL)checkData:(id)a0 againstAppleSignature:(id)a1;
- (BOOL)checkData:(id)a0 againstSignature:(id)a1;

@end
