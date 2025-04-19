@class NSSet, NSString, NSNumber;

@interface CEMSystemSiriDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowAssistant;
@property (copy, nonatomic) NSNumber *payloadAllowDictation;
@property (copy, nonatomic) NSNumber *payloadAllowAssistantUserGeneratedContent;
@property (copy, nonatomic) NSNumber *payloadForceAssistantProfanityFilter;
@property (copy, nonatomic) NSNumber *payloadAllowKeyboardMathSolving;
@property (copy, nonatomic) NSNumber *payloadAllowMathPaperSolving;
@property (copy, nonatomic) NSNumber *payloadAllowWritingTools;
@property (copy, nonatomic) NSNumber *payloadAllowGenmoji;
@property (copy, nonatomic) NSNumber *payloadAllowImagePlayground;
@property (copy, nonatomic) NSNumber *payloadAllowImageWand;
@property (copy, nonatomic) NSNumber *payloadAllowExternalIntelligenceIntegrations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowAssistant:(id)a1 withAllowDictation:(id)a2 withAllowAssistantUserGeneratedContent:(id)a3 withForceAssistantProfanityFilter:(id)a4;
+ (id)buildWithIdentifier:(id)a0 withAllowAssistant:(id)a1 withAllowDictation:(id)a2 withAllowAssistantUserGeneratedContent:(id)a3 withForceAssistantProfanityFilter:(id)a4 withAllowKeyboardMathSolving:(id)a5 withAllowMathPaperSolving:(id)a6 withAllowWritingTools:(id)a7 withAllowGenmoji:(id)a8 withAllowImagePlayground:(id)a9 withAllowImageWand:(id)a10;
+ (id)buildWithIdentifier:(id)a0 withAllowAssistant:(id)a1 withAllowDictation:(id)a2 withAllowAssistantUserGeneratedContent:(id)a3 withForceAssistantProfanityFilter:(id)a4 withAllowKeyboardMathSolving:(id)a5 withAllowMathPaperSolving:(id)a6 withAllowWritingTools:(id)a7 withAllowGenmoji:(id)a8 withAllowImagePlayground:(id)a9 withAllowImageWand:(id)a10 withAllowExternalIntelligenceIntegrations:(id)a11;
+ (id)restrictionPayloadKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
