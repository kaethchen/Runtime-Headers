@class INTask, INContactEventTrigger, INSpatialEventTrigger, INTemporalEventTrigger, INSpeakableString, NSString;

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>

@property (readonly, copy) INTask *targetTask;
@property (readonly, copy) INSpeakableString *taskTitle;
@property (readonly) long long status;
@property (readonly) long long priority;
@property (readonly, copy) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly, copy) INTemporalEventTrigger *temporalEventTrigger;
@property (copy) INContactEventTrigger *contactEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (void)setPriority:(long long)a0;
- (id)verb;
- (void)setStatus:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTargetTask:(id)a0 status:(long long)a1 spatialEventTrigger:(id)a2 temporalEventTrigger:(id)a3;
- (id)initWithTargetTask:(id)a0 taskTitle:(id)a1 status:(long long)a2 priority:(long long)a3 spatialEventTrigger:(id)a4 temporalEventTrigger:(id)a5;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSpatialEventTrigger:(id)a0;
- (void)setTargetTask:(id)a0;
- (void)setTaskTitle:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;

@end
