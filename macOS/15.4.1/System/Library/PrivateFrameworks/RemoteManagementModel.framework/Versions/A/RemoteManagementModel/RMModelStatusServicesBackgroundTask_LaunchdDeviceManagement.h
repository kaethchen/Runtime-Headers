@class NSSet, NSString;

@interface RMModelStatusServicesBackgroundTask_LaunchdDeviceManagement : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusConfigurationIdentifier;
@property (copy, nonatomic) NSString *statusAssetIdentifier;
@property (copy, nonatomic) NSString *statusAssetServerToken;

+ (id)buildRequiredOnlyWithConfigurationIdentifier:(id)a0 assetIdentifier:(id)a1 assetServerToken:(id)a2;
+ (id)buildWithConfigurationIdentifier:(id)a0 assetIdentifier:(id)a1 assetServerToken:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
