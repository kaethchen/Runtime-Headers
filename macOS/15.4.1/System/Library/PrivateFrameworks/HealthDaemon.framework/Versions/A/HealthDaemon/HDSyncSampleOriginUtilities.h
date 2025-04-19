@interface HDSyncSampleOriginUtilities : NSObject

+ (BOOL)generateStateSyncCodableContributors:(id *)a0 predicate:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)generateStateSyncCodableDevices:(id *)a0 predicate:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (long long)ingestContributorSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (long long)ingestSourceSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;

@end
