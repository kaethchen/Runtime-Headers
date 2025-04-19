@class NSData, NSString;

@interface PKEncryptedPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *data;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long targetDevice;
@property (retain, nonatomic) NSString *verificationCode;
@property (retain, nonatomic) NSString *secondarySource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asWebServiceDictionary;
- (BOOL)isEqualToEncryptedProvisioningTarget:(id)a0;

@end
