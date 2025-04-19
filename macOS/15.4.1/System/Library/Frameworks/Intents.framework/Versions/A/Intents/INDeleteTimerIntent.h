@class INTimer, NSNumber, NSString;

@interface INDeleteTimerIntent : INIntent <INDeleteTimerIntentExport>

@property (readonly, copy) INTimer *targetTimer;
@property (readonly, copy) NSNumber *deleteMultiple;
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
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTargetTimer:(id)a0 deleteMultiple:(id)a1;
- (id)parametersByName;
- (void)setDeleteMultiple:(id)a0;
- (void)setParametersByName:(id)a0;

@end
