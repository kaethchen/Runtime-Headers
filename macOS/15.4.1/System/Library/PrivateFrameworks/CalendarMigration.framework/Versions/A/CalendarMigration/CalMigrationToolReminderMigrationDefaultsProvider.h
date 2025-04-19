@class NSString, CalMigrationToolOptions;
@protocol CalCalendarMigrationDefaultsProvider, CalMigrationController, CalReminderMigrationDefaultsProvider;

@interface CalMigrationToolReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>

@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions;
@property (readonly, nonatomic) id<CalReminderMigrationDefaultsProvider> reminderDefaultsProvider;
@property (readonly, nonatomic) id<CalCalendarMigrationDefaultsProvider> calendarDefaultsProvider;
@property (readonly, nonatomic) id<CalMigrationController> calendarMigrationController;
@property (readonly, nonatomic) NSString *defaultReminderListIdentifier;
@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (nonatomic) BOOL havePerformedReminderMigrationCleanup;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
