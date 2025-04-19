@interface IFCertificateIdentity : NSObject {
    struct IFCertificateIdentity_Private { struct __SecTrust *x0; struct __SecCertificate *x1; unsigned int x2; id x3; id x4; BOOL x5; int x6; int x7; } *_private;
}

+ (unsigned int)algorithmForString:(id)a0;
+ (id)stringForAlgorthm:(unsigned int)a0;

- (void)dealloc;
- (struct __SecCertificate { } *)certificate;
- (int)policy;
- (id)certificateChain;
- (struct __SecTrust { } *)trustRef;
- (struct __SecPolicy { } *)_createSWUPolicy;
- (BOOL)_handleTrustResult:(unsigned int)a0 forTrustRef:(struct __SecTrust { } *)a1;
- (struct __SecPolicy { } *)_createInstallerPolicy;
- (struct __SecPolicy { } *)_createPolicyForType:(int)a0 withAnchorCerts:(id *)a1;
- (id)_readCerts:(id)a0;
- (BOOL)_validateTrust;
- (BOOL)_verifySignedData:(id)a0 withData:(id)a1 andCert:(struct __SecCertificate { } *)a2;
- (id)initWithCertArray:(id)a0 signatureData:(id)a1 comparisonData:(id)a2 andType:(id)a3;
- (int)trustState;
- (int)verifyTrustWithPolicy:(int)a0;

@end
