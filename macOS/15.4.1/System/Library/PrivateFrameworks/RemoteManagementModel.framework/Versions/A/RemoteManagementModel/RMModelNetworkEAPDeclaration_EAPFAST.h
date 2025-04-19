@class NSSet, NSNumber;

@interface RMModelNetworkEAPDeclaration_EAPFAST : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadUsePrivateAccessToken;
@property (copy, nonatomic) NSNumber *payloadUsePAC;
@property (copy, nonatomic) NSNumber *payloadProvisionPAC;
@property (copy, nonatomic) NSNumber *payloadProvisionPACAnonymously;

+ (id)buildRequiredOnly;
+ (id)buildWithUsePrivateAccessToken:(id)a0 usePAC:(id)a1 provisionPAC:(id)a2 provisionPACAnonymously:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
