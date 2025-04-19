@class INSettingMetadata, NSString, INTemporalEventTrigger, INDateComponentsRange;

@interface INSetTemporalSettingIntent : INIntent <INSetTemporalSettingIntentExport>

@property (readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly, copy) INDateComponentsRange *timeValue;
@property (readonly, copy) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly) long long action;
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
- (id)initWithSettingMetadata:(id)a0 timeValue:(id)a1 temporalEventTrigger:(id)a2 action:(long long)a3;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;
- (void)setTimeValue:(id)a0;

@end
