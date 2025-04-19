@interface HDSyncIdentityEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)childIdentitiesForCurrentSyncIdentityWithTransaction:(id)a0 error:(id *)a1;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)concreteIdentityForIdentity:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)concreteIdentityForPersistentID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (id)concreteIdentityForPersistentID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateConcreteIdentitiesWithTransaction:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
+ (id)insertOrLookupConcreteIdentityForIdentity:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)insertOrLookupConcreteIdentityForIdentity:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;
+ (id)updateIsChild:(BOOL)a0 concreteIdentity:(id)a1 transaction:(id)a2 error:(id *)a3;

- (id)concreteIdentityWithTransaction:(id)a0 error:(id *)a1;

@end
