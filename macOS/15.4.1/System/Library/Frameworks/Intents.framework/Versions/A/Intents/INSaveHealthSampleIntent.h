@class NSArray, NSString, HKUnit, INDateComponentsRange;

@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>

@property (readonly, copy) INDateComponentsRange *recordDate;
@property (readonly) long long objectType;
@property (readonly, copy) NSArray *values;
@property (readonly, copy) HKUnit *unit;
@property (readonly, copy) NSArray *sampleMetadatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setUnit:(id)a0;
- (void)setDomain:(id)a0;
- (void)setValues:(id)a0;
- (id)verb;
- (void)setObjectType:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithRecordDate:(id)a0 objectType:(long long)a1 values:(id)a2 unit:(id)a3 sampleMetadatas:(id)a4;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setRecordDate:(id)a0;
- (void)setSampleMetadatas:(id)a0;

@end
