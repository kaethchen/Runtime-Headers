@interface PKPassAuxiliaryCapabilityKeyCreationMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)createMetadataFromDictionary:(id)a0 forCapability:(id)a1;
+ (id)createMetadataFromDictionary:(id)a0 forDecryptionCapabilityType:(unsigned long long)a1;
+ (id)createMetadataFromDictionary:(id)a0 forSignatureCapabilityType:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)_copyInto:(id)a0;
- (id)decryptionISO18013;
- (id)signatureAliroHome;
- (id)signatureAliroHydra;
- (id)signatureCarConnectivityConsortium;
- (id)signatureFido;
- (id)signatureIdentityAccount;
- (id)signatureUnifiedAccessHome;
- (id)signatureUnifiedAccessHydra;

@end
