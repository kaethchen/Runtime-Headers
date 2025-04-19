@class NSArray, INStartCallRequestMetadata, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (readonly) BOOL useSpeaker;
@property (readonly) long long destinationType;
@property (readonly, copy) NSArray *contacts;
@property long long audioRoute;
@property long long preferredCallProvider;
@property long long recordTypeForRedialing;
@property (setter=setTTYType:) long long ttyType;
@property (copy) INStartCallRequestMetadata *callRequestMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_ignoredParameters;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setDestinationType:(long long)a0;
- (void)setContacts:(id)a0;
- (id)initWithContacts:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_currentParameterCombination;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_spotlightContentType;
- (id)_subtitleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)initWithDestinationType:(long long)a0 contacts:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setUseSpeaker:(BOOL)a0;

@end
