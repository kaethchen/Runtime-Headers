@class NSArray, INAlarmSearch, NSString;

@interface INSearchAlarmIntent : INIntent <INSearchAlarmIntentExport>

@property (readonly, copy) INAlarmSearch *alarmSearch;
@property (readonly) long long alarmSearchType;
@property (readonly, copy) NSArray *alarms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setAlarms:(id)a0;
- (void)setVerb:(id)a0;
- (void)setAlarmSearch:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithAlarmSearch:(id)a0 alarmSearchType:(long long)a1 alarms:(id)a2;
- (id)parametersByName;
- (void)setAlarmSearchType:(long long)a0;
- (void)setParametersByName:(id)a0;

@end
