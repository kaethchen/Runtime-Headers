@interface AMSStorageDatabaseSchema : NSObject

+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0 error:(out id *)a1;
+ (void)migrateVersion0to1WithMigration:(id)a0;

@end
