@class INPrivateAddMediaIntentData, NSArray, NSString, INMediaSearch, INMediaDestination;

@interface INAddMediaIntent : INIntent <INAddMediaIntentExport>

@property (readonly, copy) NSArray *mediaItems;
@property (readonly, copy) INMediaSearch *mediaSearch;
@property (readonly, copy) INMediaDestination *mediaDestination;
@property (copy) INPrivateAddMediaIntentData *privateAddMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setMediaItems:(id)a0;
- (void)setVerb:(id)a0;
- (void)setMediaSearch:(id)a0;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithMediaItems:(id)a0 mediaSearch:(id)a1 mediaDestination:(id)a2;
- (id)parametersByName;
- (void)setMediaDestination:(id)a0;
- (void)setParametersByName:(id)a0;

@end
