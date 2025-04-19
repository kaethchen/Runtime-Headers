@class NSDictionary, NSHashTable, WFServicesStatusProvider, NSObject;
@protocol OS_dispatch_queue;

@interface WFQuickActionSurfaceStatus : NSObject <WFQuickActionSurfaceStatusObserver>

@property (class, readonly, nonatomic) WFQuickActionSurfaceStatus *sharedStatus;

@property (readonly, nonatomic) NSDictionary *providersBySurface;
@property (readonly, nonatomic) WFServicesStatusProvider *servicesProvider;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *maintenanceQueue;

+ (BOOL)availabilityOfSurface:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addStatusObserver:(id)a0;
- (void)removeStatusObserver:(id)a0;
- (void)quickActionSurfaceStatusDidChange;
- (id)globalKeyboardShortcutForWorkflow:(id)a0;
- (void)migratePreferencesCreatedPre80286216IfNeeded;
- (void)quickActionsShortcutsDidChange;
- (void)removeOrphanShortcuts;
- (BOOL)setGlobalKeyboardShortcut:(id)a0 forWorkflow:(id)a1;
- (BOOL)setVisibility:(BOOL)a0 ofReference:(id)a1 inQuickActionSurface:(id)a2;
- (BOOL)visibilityOfReference:(id)a0 inQuickActionSurface:(id)a1;

@end
