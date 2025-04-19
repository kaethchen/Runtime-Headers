@interface ABRecordCoreDataFactoryImpl : NSObject <ABRecordFactoryProtocol>

+ (void)initialize;
+ (id)fetchObjectForClass:(Class)a0 withUniqueId:(id)a1 managedObjectContext:(id)a2;
+ (id)fetchObjectForClass:(Class)a0 withUniqueId:(id)a1 managedObjectContext:(id)a2 affectedStores:(id)a3;
+ (long long)addPropertiesAndTypes:(id)a0 forClass:(Class)a1 withAddressBook:(id)a2;
+ (long long)addPropertiesAndTypes:(id)a0 forClass:(Class)a1 withAddressBook:(id)a2 acquireLock:(BOOL)a3 save:(BOOL)a4;
+ (unsigned long long)countOfObjectsForClass:(Class)a0 withPredicate:(id)a1 managedObjectContext:(id)a2 affectedStores:(id)a3;
+ (unsigned long long)countOfPublicRecordsForClass:(Class)a0 withPredicate:(id)a1 addressBook:(id)a2;
+ (unsigned long long)countOfPublicRecordsForClass:(Class)a0 withPredicate:(id)a1 addressBook:(id)a2 persistentStoreUrls:(id)a3;
+ (id)createNewDatabaseImplForInstance:(id)a0 withUniqueId:(id)a1 addressBook:(id)a2;
+ (id)fetchObjectsForClass:(Class)a0 withPredicate:(id)a1 prefetchingKeyPaths:(id)a2 managedObjectContext:(id)a3;
+ (id)fetchObjectsForClass:(Class)a0 withPredicate:(id)a1 sortDescriptors:(id)a2 prefetchingKeyPaths:(id)a3 managedObjectContext:(id)a4 affectedStores:(id)a5;
+ (id)fetchPublicRecordForClass:(Class)a0 withUniqueId:(id)a1 addressBook:(id)a2 affectedStores:(id)a3;
+ (id)fetchPublicRecordsForClass:(Class)a0 withPredicate:(id)a1 addressBook:(id)a2;
+ (id)fetchPublicRecordsForClass:(Class)a0 withPredicate:(id)a1 sortDescriptors:(id)a2 prefetchingKeyPaths:(id)a3 addressBook:(id)a4;
+ (id)fetchPublicRecordsForClass:(Class)a0 withPredicate:(id)a1 sortDescriptors:(id)a2 prefetchingKeyPaths:(id)a3 addressBook:(id)a4 persistentStoreUrls:(id)a5;
+ (id)fetchPublicRecordsForClass:(Class)a0 withUniqueIds:(id)a1 addressBook:(id)a2 persistentStoreUrls:(id)a3;
+ (Class)implClassForPublicRecordClass:(Class)a0;
+ (id)propertyTypesForClass:(Class)a0 withAddressBook:(id)a1 acquireLock:(BOOL)a2;
+ (Class)publicRecordClassForImplClass:(Class)a0;
+ (Class)publicRecordClassFromUniqueId:(id)a0 inAddressBook:(id)a1;
+ (id)publicRecordWithUniqueId:(id)a0 inAddressBook:(id)a1;
+ (id)publicRecordWithUniqueId:(id)a0 inAddressBook:(id)a1 persistentStoreUrls:(id)a2;
+ (id)publicRecordsWithUniqueIds:(id)a0 inAddressBook:(id)a1 persistentStoreUrls:(id)a2;
+ (id)storesFromPersistentStoreUrls:(id)a0 inManagedObjectContext:(id)a1;
+ (id)uniqueIdsByType:(id)a0 addressBook:(id)a1;

@end
