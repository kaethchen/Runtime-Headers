@interface CalMigrationControllerProvider : NSObject

+ (id)calendarMigrationController;
+ (id)calendarMigrationControllerWithDefaultsProvider:(id)a0;
+ (id)reminderMigrationController;
+ (id)reminderMigrationControllerWithReminderKitProvider:(id)a0;

@end
