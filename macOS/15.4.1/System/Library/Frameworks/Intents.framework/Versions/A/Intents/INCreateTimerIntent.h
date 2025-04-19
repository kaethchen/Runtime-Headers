@class INSpeakableString, NSString;

@interface INCreateTimerIntent : INIntent <INCreateTimerIntentExport>

@property (readonly, copy) INSpeakableString *label;
@property (readonly) double duration;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setType:(long long)a0;
- (void)setLabel:(id)a0;
- (void)setDuration:(double)a0;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithLabel:(id)a0 duration:(double)a1 type:(long long)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
