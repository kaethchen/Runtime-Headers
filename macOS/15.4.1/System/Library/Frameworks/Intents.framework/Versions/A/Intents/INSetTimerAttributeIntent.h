@class INTimer, INSpeakableString, NSString;

@interface INSetTimerAttributeIntent : INIntent <INSetTimerAttributeIntentExport>

@property (readonly, copy) INTimer *targetTimer;
@property (readonly) double toDuration;
@property (readonly, copy) INSpeakableString *toLabel;
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
- (void)setTargetTimer:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTargetTimer:(id)a0 toDuration:(double)a1 toLabel:(id)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setToDuration:(double)a0;
- (void)setToLabel:(id)a0;

@end
