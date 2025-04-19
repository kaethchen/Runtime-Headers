@interface WFProgressiveCoreDataMigrator : NSObject

+ (id)customModificationsStepForSchemaWithIdentifier:(id)a0;
+ (BOOL)migrateDatabaseAtPersistentStoreDescription:(id)a0 useLockFile:(BOOL)a1 error:(id *)a2;

@end
