@class NSArray, INAlarmSearch, NSString;

@interface INDeleteAlarmIntent : INIntent <INDeleteAlarmIntentExport>

@property (readonly, copy) INAlarmSearch *alarmSearch;
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
- (id)initWithAlarmSearch:(id)a0 alarms:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
