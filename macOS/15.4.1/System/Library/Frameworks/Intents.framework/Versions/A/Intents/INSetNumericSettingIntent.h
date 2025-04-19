@class INSettingMetadata, INNumericSettingValue, NSString, INTemporalEventTrigger;

@interface INSetNumericSettingIntent : INIntent <INSetNumericSettingIntentExport>

@property (readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly, copy) INNumericSettingValue *numericValue;
@property (readonly) long long boundedValue;
@property (readonly) long long action;
@property (readonly, copy) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setAction:(long long)a0;
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
- (id)initWithSettingMetadata:(id)a0 numericValue:(id)a1 boundedValue:(long long)a2 action:(long long)a3 temporalEventTrigger:(id)a4;
- (id)parametersByName;
- (void)setBoundedValue:(long long)a0;
- (void)setNumericValue:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;

@end
