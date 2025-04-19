@interface HDDatabasePruningShowShim : NSObject

+ (long long)currentSyncIdentityWithProfile:(id)a0;
+ (id)_instantiateStores:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_persistentIDForSyncIdentity:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_syncStoresInProfile:(id)a0 error:(id *)a1;
+ (id)activeStoresForMaxAnchorWithProfile:(id)a0 referenceDate:(id)a1 error:(id *)a2;
+ (id)activeStoresForRestrictionPredicatesWithProfile:(id)a0 referenceDate:(id)a1 error:(id *)a2;
+ (BOOL)canPerformRecentRecordRollWithProfile:(id)a0;
+ (BOOL)datesMatchSampleStartDate:(id)a0 sampleEndDate:(id)a1 shardStartDate:(id)a2 shardEndDate:(id)a3;
+ (id)deletedSampleInProfile:(id)a0 sampleUUID:(id)a1 error:(id *)a2;
+ (id)deletedSampleSyncEntityClassName;
+ (id)deletedSampleSyncEntityIdentifier;
+ (id)deletedSamplesInProfile:(id)a0 anchor:(long long)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (id)entitiesInProfile:(id)a0 referenceDate:(id)a1 shouldIncludeEntity:(id /* block */)a2 error:(id *)a3;
+ (double)pruningFrozenAnchorRelevanceInterval;
+ (double)recentStoreAnchorRelevanceInterval;
+ (id)syncIdentitiesInProfile:(id)a0 error:(id *)a1;
+ (id)syncStoresInProfile:(id)a0 shouldIncludeEntityIdentifier:(id /* block */)a1 error:(id *)a2;

@end
