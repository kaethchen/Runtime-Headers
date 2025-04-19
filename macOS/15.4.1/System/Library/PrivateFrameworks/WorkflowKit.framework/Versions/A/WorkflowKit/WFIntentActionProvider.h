@class NSDictionary, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface WFIntentActionProvider : WFActionProvider

@property (nonatomic, getter=isObservingInstalledApplicationsChanges) BOOL observingInstalledApplicationsChanges;
@property (copy) NSDictionary *cachedSchemasByBundleIdentifier;
@property (retain, nonatomic) NSSet *cachedSystemIntentActions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long options;

+ (void)initialize;
+ (id)disabledPlatformsForIntentWithTypeName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (void)installedApplicationsDidChange:(id)a0;
- (id)actionIdentifiersForBundleIdentifier:(id)a0 schema:(id)a1;
- (id)actionIdentifiersRequiringBundledActionProvider;
- (id)actionIdentifiersRequiringBundledActionProviderMappedByApp;
- (id)availableActionIdentifiers;
- (id)createActionsForBundleIdentifier:(id)a0;
- (void)createActionsForRequests:(id)a0 forceLocalActionsOnly:(BOOL)a1;
- (id)createAllAvailableActions;
- (void)handleApplicationDidChangeNotification:(id)a0;
- (void)observeInstalledApplicationsChangesIfNeeded;
- (id)schemaForBundleIdentifier:(id)a0 ignoreCache:(BOOL)a1;
- (id)schemasByBundleIdentifier;
- (BOOL)shouldConsiderSystemIntents;
- (BOOL)shouldCreateActionForIntentClassName:(id)a0 actionIdentifier:(id)a1 bundleIdentifier:(id)a2 inSchema:(id)a3;

@end
