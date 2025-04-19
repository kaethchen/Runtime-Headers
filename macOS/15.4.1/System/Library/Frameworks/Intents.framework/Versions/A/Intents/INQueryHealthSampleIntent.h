@class NSArray, HKUnit, NSString;

@interface INQueryHealthSampleIntent : INIntent <INQueryHealthSampleIntentExport>

@property (readonly) long long objectType;
@property (readonly, copy) NSArray *recordDates;
@property (readonly, copy) HKUnit *unit;
@property (readonly) long long questionType;
@property (readonly, copy) NSArray *thresholdValues;
@property (readonly) long long expectedResultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setUnit:(id)a0;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setObjectType:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (void)setRecordDates:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithObjectType:(long long)a0 recordDates:(id)a1 unit:(id)a2 questionType:(long long)a3 thresholdValues:(id)a4 expectedResultType:(long long)a5;
- (id)parametersByName;
- (void)setExpectedResultType:(long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setQuestionType:(long long)a0;
- (void)setThresholdValues:(id)a0;

@end
