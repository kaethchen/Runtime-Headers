@interface EDAddMessagesValidationStateUpgradeStep : NSObject <EDPersistenceDatabasePostMigrationStep>

+ (id)log;
+ (int)runWithConnection:(id)a0;

@end
