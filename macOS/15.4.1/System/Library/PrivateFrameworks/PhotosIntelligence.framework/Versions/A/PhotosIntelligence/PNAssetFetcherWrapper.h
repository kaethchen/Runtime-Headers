@interface PNAssetFetcherWrapper : NSObject

+ (id)fetchAssetsWithOptions:(id)a0;
+ (id)fetchLimiterWithType:(long long)a0 limit:(long long)a1;
+ (id)fetchOptionsWithPhotoLibrary:(id)a0 limit:(long long)a1 fetchBatchSize:(long long)a2;

@end
