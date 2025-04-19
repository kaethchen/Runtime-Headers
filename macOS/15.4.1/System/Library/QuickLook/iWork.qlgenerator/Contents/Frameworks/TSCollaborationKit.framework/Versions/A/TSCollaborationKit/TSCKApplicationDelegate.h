@class TSCKApplicationPropertiesProvider;

@interface TSCKApplicationDelegate : TSKApplicationDelegate

@property (class, readonly, nonatomic) TSCKApplicationDelegate *tsck_sharedDelegate;
@property (class, readonly, nonatomic) TSCKApplicationPropertiesProvider *tsck_sharedPropertiesProvider;

@property (readonly, nonatomic) double minOperationStorageEntryAge;
@property (readonly, nonatomic) unsigned long long maxOperationStorageSize;
@property (readonly, nonatomic) unsigned long long smallOperationStorageSize;
@property (readonly, nonatomic) double minActivityStreamActivityAge;
@property (readonly, nonatomic) unsigned long long maxActivityStreamSize;
@property (readonly, nonatomic) unsigned long long smallActivityStreamSize;
@property (readonly, nonatomic) double activityAuthorCacheAuditTimeInterval;
@property (readonly, nonatomic) double activityAuthorCacheCleanAuthorDuringAuditMinimumTimeInterval;

- (unsigned long long)activityStreamPruningThresholdWithDocumentRoot:(id)a0;
- (unsigned long long)operationStoragePruningThresholdWithDocumentRoot:(id)a0;

@end
