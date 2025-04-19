@class NSSet, NSString, NSArray;

@interface RMModelAppManagedDeclaration_AppConfigDictionary : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDataAssetReference;
@property (copy, nonatomic) NSArray *payloadPasswords;
@property (copy, nonatomic) NSArray *payloadIdentities;
@property (copy, nonatomic) NSArray *payloadCertificates;

+ (id)buildRequiredOnly;
+ (id)buildWithDataAssetReference:(id)a0 passwords:(id)a1 identities:(id)a2 certificates:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
