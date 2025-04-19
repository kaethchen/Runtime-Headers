@class INIntent, NSArray, INContactEventTrigger, INSpatialEventTrigger, INTaskList, INTemporalEventTrigger, NSString;

@interface INAddTasksIntent : INIntent <INAddTasksIntentExport>

@property (copy) NSArray *contactEventTriggers;
@property (readonly, copy) INTaskList *targetTaskList;
@property (readonly, copy) NSArray *taskTitles;
@property (readonly, copy) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly, copy) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly) long long priority;
@property long long taskReference;
@property (copy) NSArray *targetTaskListMembers;
@property (copy) INContactEventTrigger *contactEventTrigger;
@property (copy) INIntent *intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (void)setPriority:(long long)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTargetTaskList:(id)a0 taskTitles:(id)a1 spatialEventTrigger:(id)a2 temporalEventTrigger:(id)a3;
- (id)initWithTargetTaskList:(id)a0 taskTitles:(id)a1 spatialEventTrigger:(id)a2 temporalEventTrigger:(id)a3 priority:(long long)a4;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSpatialEventTrigger:(id)a0;
- (void)setTargetTaskList:(id)a0;
- (void)setTaskTitles:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;

@end
