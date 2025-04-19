@class MCActivityAggregate, NSString, MCActivityMonitor, NSObject;
@protocol OS_os_log, MFPersistenceVersionUpgraderDelegate;

@interface MFPersistenceVersionUpgrader : NSObject <MCActivityTarget, MFActivityProgressUpdater>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) MCActivityMonitor *monitor;
@property (retain, nonatomic) MCActivityAggregate *activity;
@property (readonly) BOOL requiresVersionMigration;
@property (weak, nonatomic) id<MFPersistenceVersionUpgraderDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)renameMigrationDirectoryToFinalDirectory:(long long)a0;
+ (BOOL)renameVersionDirectory:(long long)a0 toMigrationDirectory:(long long)a1;
+ (BOOL)upgradeSmartMailboxesInMigrationDirectory:(long long)a0 withUpgrader:(id /* block */)a1;
+ (BOOL)upgradeSyncedRulesInMigrationDirectory:(long long)a0 withUpgrader:(id /* block */)a1;
+ (BOOL)upgradeUnsyncedRulesInMigrationDirectory:(long long)a0 withUpgrader:(id /* block */)a1;

@end
