@class NSManagedObjectContext;

@interface ULStore : NSObject

@property (nonatomic) struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *db;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (void).cxx_destruct;
- (unsigned int)count;
- (BOOL)deleteAllRecords;
- (BOOL)batchDeleteObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (BOOL)batchUpdateObjectsWithEntityName:(id)a0 predicate:(id)a1 propertiesToUpdate:(id)a2;
- (BOOL)commitChangesToStore;
- (id)fetchManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (BOOL)deleteOldestRecordsForEntityName:(id)a0 sortProperty:(id)a1 maxRecordsToKeep:(unsigned int)a2;
- (id)_batchFetchManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 batchSize:(unsigned long long)a3 limit:(unsigned long long)a4 error:(id *)a5;
- (void)_handleDatabaseError:(id)a0;
- (BOOL)_insertFetchedBatchedObjects:(id)a0 usingBatchSize:(unsigned long long)a1 withCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (BOOL)batchTransferManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 batchSize:(unsigned long long)a3 limit:(unsigned long long)a4 intoTargetStore:(id)a5 withCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a6;
- (id)countAllRecordsForEntityName:(id)a0;
- (id)countManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (BOOL)deleteAllRecordsForEntityName:(id)a0;
- (BOOL)deleteOldestRecordsIfFull;
- (BOOL)deleteRecordsForEntityName:(id)a0 sortProperty:(id)a1 olderThan:(double)a2 orNewerThan:(double)a3;
- (BOOL)deleteRecordsOlderThan:(double)a0 orNewerThan:(double)a1;
- (id)fetchManagedObjectsForEntityName:(id)a0 propertiesToFetch:(id)a1 propertiesToGroupBy:(id)a2 byAndPredicates:(id)a3 sortDescriptors:(id)a4 andLimit:(unsigned long long)a5;
- (id)fetchPropertiesForEntityName:(id)a0 propertiesToFetch:(id)a1 propertiesToGroupBy:(id)a2 distinctResults:(BOOL)a3 byAndPredicates:(id)a4 sortDescriptors:(id)a5 andLimit:(unsigned long long)a6 resetContext:(BOOL)a7;
- (id)fetchPropertyForEntityName:(id)a0 propertyToFetch:(id)a1 distinctResults:(BOOL)a2 byAndPredicates:(id)a3 sortDescriptors:(id)a4 andLimit:(unsigned long long)a5;
- (id)initWithDb:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0;

@end
