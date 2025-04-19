@class NSArray, NSString, INMediaSearch, INPrivateSearchForMediaIntentData;

@interface INSearchForMediaIntent : INIntent <INSearchForMediaIntentExport>

@property (readonly, copy) NSArray *mediaItems;
@property (readonly, copy) INMediaSearch *mediaSearch;
@property (copy) INPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;
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
- (id)initWithMediaItems:(id)a0 mediaSearch:(id)a1;
- (void)setMediaSearch:(id)a0;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
