@interface SMMigrateUserToolBox : NSObject

+ (BOOL)tenaciousCreateUserRecord:(id)a0 inDB:(id)a1;
+ (BOOL)addDenyDeleteACLToPath:(id)a0;
+ (void)applyUserTemplateToDirectory:(id)a0 forUserWithName:(id)a1 andID:(unsigned int)a2;
+ (BOOL)archiveUserDatabaseForDebuggingFromSourceSystem:(id)a0 toDestinationSystem:(id)a1;
+ (BOOL)convertLegacyFilevaultAccountForUserEntry:(id)a0 onDestinationSystem:(id)a1;
+ (BOOL)createUser:(id)a0 andCorrespondingGroup:(id)a1 inDB:(id)a2 onDestinationSystem:(id)a3 error:(id *)a4;
+ (BOOL)deleteConflictingUsers:(id)a0 onSystem:(id)a1;
+ (unsigned int)gidForEveryoneACL;
+ (void)migrateExtraHiddenSystemUsersFrom:(id)a0 toDestinationSystem:(id)a1;
+ (BOOL)migrateFileVaultMasterPasswordInfoFromSourceSystem:(id)a0 toDestinationSystem:(id)a1;
+ (BOOL)migrateFinalCutProServerUserFrom:(id)a0 toDestinationSystem:(id)a1;
+ (BOOL)migrateGlimmerblockerUserFrom:(id)a0 toDestinationSystem:(id)a1;
+ (BOOL)migrateGuestAccountForRequest:(id)a0 andDestination:(id)a1;
+ (BOOL)migrateRootUserFrom:(id)a0 toDestinationSystem:(id)a1 error:(id *)a2;
+ (BOOL)migrateUserCustomImages:(id)a0 fromSourceSystem:(id)a1 toDestinationSystem:(id)a2;
+ (BOOL)migrateUserEntry:(id)a0 andGroup:(BOOL)a1 inDB:(id)a2 toDestinationSystem:(id)a3 error:(id *)a4;
+ (void)migrateUserRoleAccountsFrom:(id)a0 toDestinationSystem:(id)a1;
+ (BOOL)modifyACLs:(id)a0 atPath:(id)a1;
+ (BOOL)recreateAdminUsersForSourceSystem:(id)a0 andDestinationSystem:(id)a1;
+ (BOOL)removeDenyDeleteACLFromPath:(id)a0;
+ (void)storeKeyInSystemKeychain:(id)a0 forUser:(id)a1 serverURL:(id)a2;
+ (BOOL)storeSystemKeychainPassword:(id)a0 forAccount:(id)a1 service:(id)a2;

@end
