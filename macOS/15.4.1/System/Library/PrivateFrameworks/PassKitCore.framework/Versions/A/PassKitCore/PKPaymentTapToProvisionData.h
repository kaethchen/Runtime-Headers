@class NSData;

@interface PKPaymentTapToProvisionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *encryptedData;
@property (readonly, nonatomic) NSData *casdCertificate;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithEncryptedData:(id)a0 casdCertificate:(id)a1;

@end
