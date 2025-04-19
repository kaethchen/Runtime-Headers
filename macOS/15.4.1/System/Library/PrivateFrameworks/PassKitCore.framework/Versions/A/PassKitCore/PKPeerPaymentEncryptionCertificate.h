@class NSArray;

@interface PKPeerPaymentEncryptionCertificate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long encryptionScheme;
@property (nonatomic) long long certificatesVersion;
@property (copy, nonatomic) NSArray *encryptionCertificates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
