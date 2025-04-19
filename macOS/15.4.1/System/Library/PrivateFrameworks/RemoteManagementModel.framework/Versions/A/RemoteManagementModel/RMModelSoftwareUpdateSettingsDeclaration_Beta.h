@class NSSet, NSString, NSArray, RMModelSoftwareUpdateSettingsDeclaration_BetaRequireProgram;

@interface RMModelSoftwareUpdateSettingsDeclaration_Beta : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadProgramEnrollment;
@property (copy, nonatomic) NSArray *payloadOfferPrograms;
@property (copy, nonatomic) RMModelSoftwareUpdateSettingsDeclaration_BetaRequireProgram *payloadRequireProgram;

+ (id)buildRequiredOnly;
+ (id)buildWithProgramEnrollment:(id)a0 offerPrograms:(id)a1 requireProgram:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
