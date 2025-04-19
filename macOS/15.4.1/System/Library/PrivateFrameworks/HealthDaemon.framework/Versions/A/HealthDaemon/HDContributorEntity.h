@interface HDContributorEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)contributorEntityForNoContributorWithProfile:(id)a0 error:(id *)a1;
+ (id)contributorEntityWithUUID:(id)a0 profile:(id)a1 includeDeleted:(BOOL)a2 error:(id *)a3;
+ (id)contributorForReference:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)deleteContributorWithUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)externalReferenceForContributorReference:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)insertOrLookupContributorEntityForNoContributorWithTransaction:(id)a0 syncIdentity:(long long)a1 error:(id *)a2;
+ (id)insertPrimaryUserWithAppleID:(id)a0 callerID:(id)a1 syncIdentity:(long long)a2 database:(id)a3 error:(id *)a4;
+ (id)insertWithUUID:(id)a0 appleID:(id)a1 callerID:(id)a2 primaryUser:(BOOL)a3 profile:(id)a4 error:(id *)a5;
+ (id)insertWithUUID:(id)a0 appleID:(id)a1 callerID:(id)a2 primaryUser:(BOOL)a3 syncProvenance:(long long)a4 syncIdentity:(long long)a5 transaction:(id)a6 error:(id *)a7;
+ (id)noneContributorUUID;
+ (id)primaryUserContributorInDatabase:(id)a0 error:(id *)a1;
+ (id)primaryUserContributorInProfile:(id)a0 error:(id *)a1;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;

- (id)appleIDInProfile:(id)a0 error:(id *)a1;
- (id)callerIDInProfile:(id)a0 error:(id *)a1;
- (BOOL)deletedInProfile:(id)a0 error:(id *)a1;
- (id)modificationDateInProfile:(id)a0 error:(id *)a1;
- (id)syncAnchorInProfile:(id)a0 error:(id *)a1;
- (BOOL)updateAppleID:(id)a0 profile:(id)a1 error:(id *)a2;
- (BOOL)updateCallerID:(id)a0 profile:(id)a1 error:(id *)a2;

@end
