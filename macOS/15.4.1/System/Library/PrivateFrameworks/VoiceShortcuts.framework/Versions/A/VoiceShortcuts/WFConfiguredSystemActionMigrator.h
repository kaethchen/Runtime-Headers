@class WFDatabase, WFDebouncer, WFConfiguredSystemActionProvider, NSObject, ICAppRegistry;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface WFConfiguredSystemActionMigrator : NSObject <WFDatabaseObjectObserver, WFConfiguredSystemActionObserver, ICAppInstallStatusObserver>

@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) ICAppRegistry *appRegistry;
@property (retain, nonatomic) WFDebouncer *migrationDeboucer;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFConfiguredSystemActionProvider *actionProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (BOOL)completedSystemAppMigration;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;
- (void)configuredSystemActionChangedForType:(id)a0 oldAction:(id)a1 newAction:(id)a2;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (id)initWithDatabaseProvider:(id)a0 actionProvider:(id)a1;
- (BOOL)isConfiguredSystemActionValid:(id)a0;
- (void)scheduleActionMigrationWithReason:(id)a0;
- (void)scheduledActionMigrationFired;
- (void)updateActionsIfNeeded;
- (void)updateConfiguredSystemActionOfType:(id)a0;
- (id)updatedConfiguredSystemActionFrom:(id)a0;

@end
