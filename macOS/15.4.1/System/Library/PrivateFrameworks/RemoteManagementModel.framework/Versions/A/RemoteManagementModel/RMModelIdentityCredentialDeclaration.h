@class NSSet, NSString, NSData;

@interface RMModelIdentityCredentialDeclaration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSData *payloadIdentity;

+ (id)buildRequiredOnlyWithPassword:(id)a0 identity:(id)a1;
+ (id)buildWithPassword:(id)a0 identity:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
