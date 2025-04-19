@interface CalMigratorProvider : NSObject

+ (id)defaultCalendarMigrationDefaultsProvider;
+ (id)defaultContactsProvider;
+ (id)defaultMigrationAccountStore;
+ (id)reminderMigrator;
+ (id)reminderMigratorWithDefaultsProvider:(id)a0;
+ (id)reminderMigratorWithReminderKitProvider:(id)a0 defaultsProvider:(id)a1;

@end
