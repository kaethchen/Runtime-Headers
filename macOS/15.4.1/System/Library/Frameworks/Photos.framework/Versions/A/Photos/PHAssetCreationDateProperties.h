@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (long long)cacheSize;
+ (id)propertiesToSortBy;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;

@end
