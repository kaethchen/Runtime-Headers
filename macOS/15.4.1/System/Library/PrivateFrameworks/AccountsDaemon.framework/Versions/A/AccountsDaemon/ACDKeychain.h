@interface ACDKeychain : NSObject

+ (id)cache;
+ (void)_addKnownMigratedKeychainItem:(id)a0;
+ (BOOL)_isKnownMigratedKeychainItem:(id)a0;
+ (id)_knownMigratedKeychainItems;
+ (void)_migrateKeychainItemIfNecessary:(id)a0;
+ (id)_passwordForServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 checkInKeybag:(BOOL)a3 options:(id)a4 error:(id *)a5;
+ (unsigned long long)_syncStateForKeychainDictionary:(id)a0;
+ (void)addItemWithServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 passwordData:(id)a3 options:(id)a4 error:(id *)a5;
+ (BOOL)addSyncItemWithServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 options:(id)a3 extension:(id)a4 error:(id *)a5;
+ (BOOL)canAccessPasswordsWithPolicy:(id)a0;
+ (id)keychainDeletedAccounts;
+ (BOOL)macOSRemoveItemIfNonSyncable:(id)a0 username:(id)a1 accessGroup:(id)a2 options:(id)a3 success:(BOOL *)a4;
+ (id)passwordForServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 options:(id)a3 error:(id *)a4;
+ (BOOL)removeItemForServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 options:(id)a3 error:(id *)a4;
+ (BOOL)removeTombstoneForServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 extension:(id)a3 error:(id *)a4;
+ (void)updateItemForServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 newValues:(id)a3 options:(id)a4 error:(id *)a5;
+ (BOOL)updateSyncItemForServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 newValues:(id)a3 extension:(id)a4 error:(id *)a5;

@end
