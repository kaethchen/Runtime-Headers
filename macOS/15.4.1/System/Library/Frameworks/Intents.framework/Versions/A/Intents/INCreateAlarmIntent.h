@class INDateComponentsRange, NSString, NSNumber, INSpeakableString;

@interface INCreateAlarmIntent : INIntent <INCreateAlarmIntentExport>

@property (readonly, copy) NSNumber *relativeOffsetInMinutes;
@property (readonly, copy) INDateComponentsRange *time;
@property (readonly, copy) INSpeakableString *label;
@property (readonly) unsigned long long alarmRepeatScheduleOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setLabel:(id)a0;
- (void)setTime:(id)a0;
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
- (id)initWithRelativeOffsetInMinutes:(id)a0 time:(id)a1 label:(id)a2 alarmRepeatScheduleOptions:(unsigned long long)a3;
- (id)parametersByName;
- (void)setAlarmRepeatScheduleOptions:(unsigned long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setRelativeOffsetInMinutes:(id)a0;

@end
