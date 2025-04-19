@class NSData, NSString, NSArray;

@interface PKAuxiliaryCapabilityRequirementKeyMaterialContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSString *publicKeyIdentifier;
@property (retain, nonatomic) NSArray *attestation;
@property (retain, nonatomic) NSArray *secondaryAttestation;
@property (retain, nonatomic) NSData *authorization;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSArray *certificateChain;
@property (retain, nonatomic) NSString *keyReferenceIdentifier;
@property (retain, nonatomic) NSData *applicationIdentifier;
@property (retain, nonatomic) NSData *securityAccessControl;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
