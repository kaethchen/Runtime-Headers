@class INDateComponentsRange, NSString, INAlarm, INSpeakableString, INAlarmSearch;

@interface INUpdateAlarmIntent : INIntent <INUpdateAlarmIntentExport>

@property (readonly, copy) INAlarmSearch *alarmSearch;
@property (readonly, copy) INAlarm *alarm;
@property (readonly) long long operation;
@property (readonly, copy) INDateComponentsRange *proposedTime;
@property (readonly, copy) INSpeakableString *proposedLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setOperation:(long long)a0;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)initWithAlarmSearch:(id)a0 alarm:(id)a1 operation:(long long)a2 proposedTime:(id)a3 proposedLabel:(id)a4;
- (void)setAlarmSearch:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setAlarm:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setProposedLabel:(id)a0;
- (void)setProposedTime:(id)a0;

@end
