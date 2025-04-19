@interface MMiCloudAccountsMigrator : NSObject

+ (id)IsAccountDuplicate:(id)a0;
+ (id)accountInfoFromMobileMeAccount:(id)a0;
+ (id)accountIDFromMobileMeAccount:(id)a0;
+ (BOOL)areAccountsEqual:(id)a0 acAccount:(id)a1 equivalent:(BOOL)a2;
+ (void)dedupeAppleAccounts;
+ (id)dsidFromMobileMeAccount:(id)a0;
+ (void)migrateAccounts:(BOOL)a0;
+ (id)migrateMobileMeAccounts:(id)a0 toACAccounts:(id)a1 store:(id)a2 error:(id *)a3;
+ (id)mobileMeAccounts;
+ (void)removeAccountFromDefaults:(id)a0;
+ (id)saveMigratedACAccounts:(id)a0 store:(id)a1;

@end
