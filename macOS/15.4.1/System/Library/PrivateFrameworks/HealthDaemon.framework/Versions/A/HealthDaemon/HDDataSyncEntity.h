@class NSString, HDSyncEntityIdentifier;

@interface HDDataSyncEntity : NSObject <HDSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_predicateForSyncSession:(id)a0;
+ (id)_pruningPredicateWithRestrictionPredicates:(id)a0;
+ (id)decodeSyncObjectWithData:(id)a0;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (Class)healthEntityClass;
+ (long long)nextSyncAnchorWithSession:(id)a0 startSyncAnchor:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)objectsFromCodableObjectsInCollection:(id)a0;
+ (id)pruneSyncedObjectsThroughAnchor:(id)a0 limit:(unsigned long long)a1 nowDate:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)pruneSyncedObjectsWithRestrictionPredicates:(id)a0 limit:(unsigned long long)a1 nowDate:(id)a2 profile:(id)a3 error:(id *)a4;
+ (long long)receiveSyncObjects:(id)a0 version:(struct { int x0; int x1; })a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)supportsDateBasedSharding;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (id)unitTest_predicateForSyncSession:(id)a0;
+ (id)unitTest_pruningPredicateForDate:(id)a0 profile:(id)a1;
+ (id)unitTest_pruningPredicateWithRestrictionPredicates:(id)a0;


@end
