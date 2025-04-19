@class NSSet, NSString;

@interface RMModelSoftwareUpdateSettingsDeclaration_AutomaticActions : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDownload;
@property (copy, nonatomic) NSString *payloadInstallOSUpdates;
@property (copy, nonatomic) NSString *payloadInstallSecurityUpdate;

+ (id)buildRequiredOnly;
+ (id)buildWithDownload:(id)a0 installOSUpdates:(id)a1 installSecurityUpdate:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
