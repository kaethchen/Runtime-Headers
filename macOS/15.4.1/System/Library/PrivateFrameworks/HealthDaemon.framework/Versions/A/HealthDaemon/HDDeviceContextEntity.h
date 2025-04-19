@interface HDDeviceContextEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)deviceContextForLocalSyncIdentityWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateDeviceContextWithTransaction:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)deleteDeviceContextWithSyncIdentity:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (id)deviceContextEntityWithSyncIdentity:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)insertDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)lookupDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)lookupOrCreateDeviceContextForLocalSyncIdentityWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)lookupOrCreateDeviceContextForSyncIdentity:(id)a0 WithTransaction:(id)a1 error:(id *)a2;
+ (BOOL)updateDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)updateSoftwareVersionForDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
