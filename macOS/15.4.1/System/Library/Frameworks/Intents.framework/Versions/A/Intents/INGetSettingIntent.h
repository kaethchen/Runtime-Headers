@class NSString, INSettingMetadata;

@interface INGetSettingIntent : INIntent <INGetSettingIntentExport>

@property (readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly) long long confirmationValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
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
- (id)initWithSettingMetadata:(id)a0 confirmationValue:(long long)a1;
- (id)parametersByName;
- (void)setConfirmationValue:(long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;

@end
