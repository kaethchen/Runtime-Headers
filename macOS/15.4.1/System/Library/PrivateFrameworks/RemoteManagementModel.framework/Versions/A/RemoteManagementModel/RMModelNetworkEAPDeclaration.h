@class NSNumber, NSString, NSArray, NSSet, RMModelNetworkEAPDeclaration_TLS, RMModelNetworkEAPDeclaration_EAPSIMAKA, RMModelNetworkEAPDeclaration_EAPFAST, RMModelNetworkEAPDeclaration_PrivateAccessToken;

@interface RMModelNetworkEAPDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadEAPUUID;
@property (copy, nonatomic) NSArray *payloadAcceptEAPTypes;
@property (copy, nonatomic) NSNumber *payloadUseOneTimePassword;
@property (copy, nonatomic) NSString *payloadUserPasswordAssetReference;
@property (copy, nonatomic) RMModelNetworkEAPDeclaration_PrivateAccessToken *payloadPrivateAccessToken;
@property (copy, nonatomic) RMModelNetworkEAPDeclaration_EAPFAST *payloadEAPFAST;
@property (copy, nonatomic) RMModelNetworkEAPDeclaration_TLS *payloadTLS;
@property (copy, nonatomic) NSString *payloadOuterIdentity;
@property (copy, nonatomic) NSString *payloadTTLSInnerAuthentication;
@property (copy, nonatomic) NSString *payloadSystemModeCredentialsSource;
@property (copy, nonatomic) NSString *payloadExtensibleSSOProvider;
@property (copy, nonatomic) RMModelNetworkEAPDeclaration_EAPSIMAKA *payloadEAPSIMAKA;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 EAPUUID:(id)a1;
+ (id)buildWithIdentifier:(id)a0 EAPUUID:(id)a1 acceptEAPTypes:(id)a2 useOneTimePassword:(id)a3 userPasswordAssetReference:(id)a4 privateAccessToken:(id)a5 EAPFAST:(id)a6 TLS:(id)a7 outerIdentity:(id)a8 ttlsInnerAuthentication:(id)a9 systemModeCredentialsSource:(id)a10 extensibleSSOProvider:(id)a11 EAPSIMAKA:(id)a12;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
