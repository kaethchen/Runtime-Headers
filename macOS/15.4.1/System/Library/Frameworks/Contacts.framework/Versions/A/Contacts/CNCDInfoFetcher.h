@interface CNCDInfoFetcher : NSObject

+ (id)_accountIdentifierFromPersistentStoreURL:(id)a0;
+ (id)_persistentStoresForAccountsWithIdentifiers:(id)a0 fromManagedObjectContext:(id)a1;
+ (id)allInfosWithManagedObjectContext:(id)a0 inStores:(id)a1 error:(id *)a2;
+ (id)allInfosWithPersistenceStack:(id)a0 forAccountsWithIdentifiers:(id)a1 error:(id *)a2;

@end
