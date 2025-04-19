@class NSSet, NSString;

@interface RMModelSoftwareUpdateSettingsDeclaration_BetaProgram : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDescription;
@property (copy, nonatomic) NSString *payloadToken;

+ (id)buildRequiredOnlyWithDescription:(id)a0 token:(id)a1;
+ (id)buildWithDescription:(id)a0 token:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
