@class NSSet, NSString, NSNumber;

@interface RMModelAccountCalDAVDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadVisibleName;
@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) NSString *payloadPath;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 hostName:(id)a1;
+ (id)buildWithIdentifier:(id)a0 visibleName:(id)a1 hostName:(id)a2 port:(id)a3 path:(id)a4 authenticationCredentialsAssetReference:(id)a5;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
