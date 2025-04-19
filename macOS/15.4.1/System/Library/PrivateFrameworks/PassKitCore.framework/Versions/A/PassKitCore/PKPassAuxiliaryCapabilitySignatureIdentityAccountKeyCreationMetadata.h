@class NSString;

@interface PKPassAuxiliaryCapabilitySignatureIdentityAccountKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSString *subcredentialIdentifier;
@property (retain, nonatomic) NSString *existingAccountKeyIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSubcredentialIdentifier:(id)a0;

@end
