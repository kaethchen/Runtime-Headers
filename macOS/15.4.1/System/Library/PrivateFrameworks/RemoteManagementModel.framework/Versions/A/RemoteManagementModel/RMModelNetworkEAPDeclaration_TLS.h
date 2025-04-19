@class NSSet, NSString, NSArray, NSNumber;

@interface RMModelNetworkEAPDeclaration_TLS : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadRequireClientCertificate;
@property (copy, nonatomic) NSString *payloadIdentityAssetReference;
@property (copy, nonatomic) NSArray *payloadTrustedServerNames;
@property (copy, nonatomic) NSArray *payloadAnchorCertificateAssetReferences;
@property (copy, nonatomic) NSString *payloadMinimumVersion;
@property (copy, nonatomic) NSString *payloadMaximumVersion;

+ (id)buildRequiredOnly;
+ (id)buildWithRequireClientCertificate:(id)a0 identityAssetReference:(id)a1 trustedServerNames:(id)a2 anchorCertificateAssetReferences:(id)a3 minimumVersion:(id)a4 maximumVersion:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
