@class NSSet, NSNumber;

@interface RMModelSoftwareUpdateSettingsDeclaration_RapidSecurityResponse : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadEnable;
@property (copy, nonatomic) NSNumber *payloadEnableRollback;

+ (id)buildRequiredOnly;
+ (id)buildWithEnable:(id)a0 enableRollback:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
