@class NSString, PKSecureElementCertificateSet;

@interface PKAccountAttestationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKSecureElementCertificateSet *casdCertificate;
@property (copy, nonatomic) NSString *anonymizationSalt;

+ (id)_keychainItemWrapper;
+ (id)createAnonymizationSalt;
+ (id)defaultAnonymizationSaltWithError:(id *)a0;
+ (id)keychainDataWithError:(id *)a0;
+ (void)removeAccountAttesationData;
+ (void)removeLocalAccountAttesationData;
+ (id)setDefaultAnonymizationSalt:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
