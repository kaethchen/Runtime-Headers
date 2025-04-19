@class NSUUID, NSData, NSString;

@interface AKInheritanceAccessKey : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *beneficiaryID;
@property (retain, nonatomic) NSData *wrappingKeyData;
@property (retain, nonatomic) NSString *wrappingKeyString;
@property (retain, nonatomic) NSData *wrappedKeyData;
@property (retain, nonatomic) NSString *wrappedKeyString;
@property (retain, nonatomic) NSData *claimTokenData;
@property (retain, nonatomic) NSString *claimTokenString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBeneficiairyIdentifier:(id)a0;

@end
