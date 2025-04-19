@class NSNumber, INSpeakableString, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (readonly, copy) NSNumber *enable;
@property (readonly) long long defroster;
@property (readonly, copy) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setCarName:(id)a0;
- (void)setEnable:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithEnable:(id)a0 defroster:(long long)a1;
- (id)initWithEnable:(id)a0 defroster:(long long)a1 carName:(id)a2;
- (id)parametersByName;
- (void)setDefroster:(long long)a0;
- (void)setParametersByName:(id)a0;

@end
