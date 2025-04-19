@class NSSet, NSNumber;

@interface RMModelSoftwareUpdateSettingsDeclaration_Deferrals : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadCombinedPeriodInDays;
@property (copy, nonatomic) NSNumber *payloadMajorPeriodInDays;
@property (copy, nonatomic) NSNumber *payloadMinorPeriodInDays;
@property (copy, nonatomic) NSNumber *payloadSystemPeriodInDays;

+ (id)buildRequiredOnly;
+ (id)buildWithCombinedPeriodInDays:(id)a0 majorPeriodInDays:(id)a1 minorPeriodInDays:(id)a2 systemPeriodInDays:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
