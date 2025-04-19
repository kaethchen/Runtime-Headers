@class NSObject;
@protocol OS_os_log;

@interface CNPendingMigrationManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

+ (id)didMigrateAccountWithIdentifier:(id)a0;
+ (BOOL)isMigrationPendingForAccountWithIdentifier:(id)a0;
+ (id)pendingAccountMigrations;
+ (id)pendingAccountMigrationsStore;
+ (void)setPendingAccountMigrations:(id)a0;
+ (id)willMigrateAccountWithIdentifier:(id)a0;

@end
