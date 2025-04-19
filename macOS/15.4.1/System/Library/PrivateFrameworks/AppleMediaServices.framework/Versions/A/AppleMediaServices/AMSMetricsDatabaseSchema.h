@interface AMSMetricsDatabaseSchema : NSObject

+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0 error:(out id *)a1;
+ (void)migrateVersion0to1WithMigration:(id)a0;
+ (void)migrateVersion1to2WithMigration:(id)a0;
+ (void)migrateVersion2to3WithMigration:(id)a0;
+ (void)migrateVersion3to4WithMigration:(id)a0;
+ (void)migrateVersion4to5WithMigration:(id)a0;
+ (void)migrateVersion5to6WithMigration:(id)a0;
+ (void)migrateVersion6to7WithMigration:(id)a0;

@end
