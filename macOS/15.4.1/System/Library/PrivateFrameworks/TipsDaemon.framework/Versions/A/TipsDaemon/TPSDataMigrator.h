@interface TPSDataMigrator : NSObject

+ (void)performMigrationIfNeeded;
+ (void)revertTipStatusArchivalIfNeeded;
+ (void)_performDesiredOutcomeMigration;
+ (void)_performSavedTipsMigration;

@end
