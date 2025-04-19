@class NSArray, NSString, INTaskList, NSNumber;

@interface INDeleteTasksIntent : INIntent <INDeleteTasksIntentExport>

@property (readonly, copy) INTaskList *taskList;
@property (readonly, copy) NSArray *tasks;
@property (readonly, copy) NSNumber *all;
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
- (void)setAll:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTaskList:(id)a0 tasks:(id)a1 all:(id)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setTaskList:(id)a0;
- (void)setTasks:(id)a0;

@end
