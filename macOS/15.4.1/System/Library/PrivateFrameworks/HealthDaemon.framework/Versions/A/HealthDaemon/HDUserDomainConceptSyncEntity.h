@class NSString, HDSyncEntityIdentifier;

@interface HDUserDomainConceptSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeSyncObjectWithData:(id)a0;
+ (BOOL)enumerateCodableObjectsForPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5 handler:(id /* block */)a6;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (long long)nextSyncAnchorWithSession:(id)a0 startSyncAnchor:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)pruneSyncedObjectsThroughAnchor:(id)a0 limit:(unsigned long long)a1 nowDate:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)receiveSyncObjects:(id)a0 version:(struct { int x0; int x1; })a1 syncProvenance:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (long long)receiveSyncObjects:(id)a0 version:(struct { int x0; int x1; })a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (struct { int x0; int x1; })supportedSyncVersionRange;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (struct { int x0; int x1; })syncVersionRangeForSession:(id)a0;


@end
