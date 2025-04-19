@class RMModelSoftwareUpdateSettingsDeclaration_Beta, NSSet, NSString, RMModelSoftwareUpdateSettingsDeclaration_AutomaticActions, RMModelSoftwareUpdateSettingsDeclaration_RapidSecurityResponse, NSNumber, RMModelSoftwareUpdateSettingsDeclaration_Deferrals;

@interface RMModelSoftwareUpdateSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadNotifications;
@property (copy, nonatomic) RMModelSoftwareUpdateSettingsDeclaration_Deferrals *payloadDeferrals;
@property (copy, nonatomic) NSString *payloadRecommendedCadence;
@property (copy, nonatomic) RMModelSoftwareUpdateSettingsDeclaration_AutomaticActions *payloadAutomaticActions;
@property (copy, nonatomic) RMModelSoftwareUpdateSettingsDeclaration_RapidSecurityResponse *payloadRapidSecurityResponse;
@property (copy, nonatomic) NSNumber *payloadAllowStandardUserOSUpdates;
@property (copy, nonatomic) RMModelSoftwareUpdateSettingsDeclaration_Beta *payloadBeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)a0 notifications:(id)a1 deferrals:(id)a2 recommendedCadence:(id)a3 automaticActions:(id)a4 rapidSecurityResponse:(id)a5 allowStandardUserOSUpdates:(id)a6 beta:(id)a7;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)assetReferences;
- (void)combineWithOther:(id)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
