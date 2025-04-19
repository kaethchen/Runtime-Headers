@class RMModelAppManagedDeclaration_InstallBehavior, NSSet, NSString, RMModelAppManagedDeclaration_AppConfigDictionary, RMModelAppManagedDeclaration_ExtensionConfigs, NSNumber, RMModelAppManagedDeclaration_Attributes;

@interface RMModelAppManagedDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadAppStoreID;
@property (copy, nonatomic) NSString *payloadBundleID;
@property (copy, nonatomic) NSString *payloadManifestURL;
@property (copy, nonatomic) RMModelAppManagedDeclaration_InstallBehavior *payloadInstallBehavior;
@property (copy, nonatomic) NSNumber *payloadIncludeInBackup;
@property (copy, nonatomic) RMModelAppManagedDeclaration_Attributes *payloadAttributes;
@property (copy, nonatomic) RMModelAppManagedDeclaration_AppConfigDictionary *payloadAppConfig;
@property (copy, nonatomic) RMModelAppManagedDeclaration_ExtensionConfigs *payloadExtensionConfigs;
@property (copy, nonatomic) NSString *payloadLegacyAppConfigAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)a0 appStoreID:(id)a1 bundleID:(id)a2 manifestURL:(id)a3 installBehavior:(id)a4 includeInBackup:(id)a5 attributes:(id)a6 appConfig:(id)a7 extensionConfigs:(id)a8 legacyAppConfigAssetReference:(id)a9;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
