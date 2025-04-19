@class NSSet, NSString;

@interface RMModelAppManagedDeclaration_CredentialConfig : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) NSString *payloadAssetReference;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 assetReference:(id)a1;
+ (id)buildWithIdentifier:(id)a0 assetReference:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
