@interface HDAuthorizationEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)allSourcesRequestingTypes:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationRecordsBySourceForType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationRecordsByTypeForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)authorizationRequestsForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)authorizationStatusesForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)modificationDateForSourceEntity:(id)a0 type:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)readAuthorizationStatusesByTypeForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)resetAllAuthorizationStatusesWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)resetAuthorizationStatusesForBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)setAuthorizationStatuses:(id)a0 authorizationRequests:(id)a1 authorizationModes:(id)a2 sourceEntity:(id)a3 options:(unsigned long long)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)setAuthorizationStatuses:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)uniquedColumns;

@end
