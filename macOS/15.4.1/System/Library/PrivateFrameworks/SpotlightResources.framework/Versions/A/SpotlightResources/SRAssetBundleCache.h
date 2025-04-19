@class NSMutableDictionary;

@interface SRAssetBundleCache : NSObject {
    NSMutableDictionary *_cache;
}

+ (id)sharedInstance;
+ (id)cacheFilePath;

- (id)init;
- (void).cxx_destruct;
- (id)dumpCache;
- (void)flushCacheToFile;
- (void)loadCacheFromFile;
- (void)queryCache:(id)a0;
- (void)queryServerCache:(id)a0 completion:(id /* block */)a1;
- (void)removeAssetBundleWithAssetType:(id)a0 language:(id)a1 deliveryType:(id)a2;
- (void)updateCacheWithResults:(id)a0;
- (void)upsertAssetBundleWithAssetType:(id)a0 language:(id)a1 deliveryType:(id)a2 contentVersion:(unsigned long long)a3 path:(id)a4;

@end
