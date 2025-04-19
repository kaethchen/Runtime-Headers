@interface PLModelMigrationActionUtility : NSObject

+ (BOOL)processExtendedAttributesWithAction:(id)a0 asset:(id)a1 metadata:(id)a2 error:(id *)a3;
+ (long long)processManagedObjectBatchesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 pendingParentUnitCount:(long long)a3 useObjectIDResumeMarker:(BOOL)a4 error:(id *)a5 processingBlock:(id /* block */)a6;
+ (long long)processManagedObjectWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 useObjectIDResumeMarker:(BOOL)a3 error:(id *)a4 processingBlock:(id /* block */)a5;
+ (long long)processManagedObjectsWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 pendingParentUnitCount:(long long)a3 error:(id *)a4 processingBlock:(id /* block */)a5;
+ (long long)removeFromDuplicatesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 requiresTokenReset:(BOOL)a3 error:(id *)a4;
+ (long long)removeOrphanedObjectsWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 error:(id *)a3;
+ (long long)resetDuplicateProcessingWithAction:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
+ (long long)updateExtendedAttributesWithAction:(id)a0 managedObjectContext:(id)a1 fetchRequest:(id)a2 useObjectIDResumeMarker:(BOOL)a3 error:(id *)a4;

@end
