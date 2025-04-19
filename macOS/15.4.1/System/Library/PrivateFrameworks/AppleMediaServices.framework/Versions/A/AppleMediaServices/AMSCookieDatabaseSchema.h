@interface AMSCookieDatabaseSchema : NSObject

+ (BOOL)promptTapToRadarForSchemaMigrationFailureWithDescription:(id)a0 error:(id *)a1;
+ (id)_deviceStorageDetails;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0 error:(id *)a1;
+ (BOOL)migrateVersion0to1WithMigration:(id)a0 error:(id *)a1;

@end
