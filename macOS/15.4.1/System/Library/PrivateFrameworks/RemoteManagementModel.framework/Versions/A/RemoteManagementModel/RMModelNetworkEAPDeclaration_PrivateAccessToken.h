@class NSSet, NSString, NSData, NSNumber;

@interface RMModelNetworkEAPDeclaration_PrivateAccessToken : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadType;
@property (copy, nonatomic) NSString *payloadIssuerName;
@property (copy, nonatomic) NSData *payloadRedemptionContext;
@property (copy, nonatomic) NSString *payloadTokenKey;

+ (id)buildRequiredOnlyWithIssuerName:(id)a0 tokenKey:(id)a1;
+ (id)buildWithType:(id)a0 issuerName:(id)a1 redemptionContext:(id)a2 tokenKey:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
