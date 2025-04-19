@class NSString;

@interface CalInProcessTruthFileMigrator : NSObject <CalInProcessTruthFileMigrator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)attemptMigrationIfNeededWithOptions:(id)a0 cancellationToken:(id)a1 calendarDataContainerProvider:(id)a2 accountStore:(id)a3 keychain:(id)a4 attemptedAnyMigration:(BOOL *)a5;
+ (BOOL)_attemptCalendarMigrationIfNeededWithOptions:(id)a0 cancellationToken:(id)a1 defaultsProvider:(id)a2 migrationController:(id)a3 calendarDataContainerProvider:(id)a4 accountStore:(id)a5 keychain:(id)a6 attemptedMigration:(BOOL *)a7;
+ (BOOL)_attemptReminderMigrationIfNeededWithOptions:(id)a0 defaultsProvider:(id)a1 migrationController:(id)a2 attemptedMigration:(BOOL *)a3;


@end
