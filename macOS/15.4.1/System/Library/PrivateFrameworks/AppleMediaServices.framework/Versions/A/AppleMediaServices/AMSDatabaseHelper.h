@interface AMSDatabaseHelper : NSObject

+ (BOOL)_addSkipBackupAttribute:(BOOL)a0 forURL:(id)a1;
+ (void)_applyProtectionClassForDirectoryAtURL:(id)a0;
+ (id)_cachesURLForCachePath:(id)a0;
+ (id)_databaseNameForType:(long long)a0;
+ (id)dataVaultURLForDataVaultPath:(id)a0;
+ (id)databaseFolderNameForType:(long long)a0;
+ (id)databasePathForCachePath:(id)a0 type:(long long)a1;
+ (id)databasePathForDataVaultPath:(id)a0 type:(long long)a1;
+ (id)databaseURLForCachePath:(id)a0 type:(long long)a1;
+ (id)databaseURLForDataVaultPath:(id)a0 type:(long long)a1;
+ (BOOL)removeDatabaseAtURL:(id)a0 error:(out id *)a1;
+ (BOOL)removeDatabaseForCachePath:(id)a0 error:(out id *)a1;
+ (BOOL)removeDatabaseForDataVaultPath:(id)a0 error:(out id *)a1;

@end
