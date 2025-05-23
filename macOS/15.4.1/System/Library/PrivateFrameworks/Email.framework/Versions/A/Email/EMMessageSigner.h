@class EMCertificateTrustInformation, NSError;

@interface EMMessageSigner : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) EMCertificateTrustInformation *signingCertificateTrustInfo;
@property (retain, nonatomic) EMCertificateTrustInformation *encryptionCertificateTrustInfo;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL hasSeparateSigningAndEncryptionCertificates;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)evaluateTrustsWithOptions:(unsigned long long)a0;
- (id)initWithSigningTrust:(id)a0 encryptionTrust:(id)a1;
- (void)reevaluateTrustWithNetworkAccessAllowed;

@end
