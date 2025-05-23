@class NSSet, NSNumber, NSString;

@interface RMModelAccountExchangeDeclaration_SMIMEEncryption : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadEnabled;
@property (copy, nonatomic) NSString *payloadIdentityAssetReference;
@property (copy, nonatomic) NSNumber *payloadUserOverrideable;
@property (copy, nonatomic) NSNumber *payloadIdentityUserOverrideable;
@property (copy, nonatomic) NSNumber *payloadPerMessageSwitchEnabled;

+ (id)buildRequiredOnlyWithEnabled:(id)a0;
+ (id)buildWithEnabled:(id)a0 identityAssetReference:(id)a1 userOverrideable:(id)a2 identityUserOverrideable:(id)a3 perMessageSwitchEnabled:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
