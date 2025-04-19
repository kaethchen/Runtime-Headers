@class NSString;

@interface HMDiskCache : HMFObject <HMPersistentCache>

@property (readonly, copy) NSString *cachePath;

- (void).cxx_destruct;
- (id)initWithCachePath:(id)a0;
- (id)loadCachedObjectsForCacheWithName:(id)a0;
- (BOOL)storeCachedObjects:(id)a0 forCacheName:(id)a1;

@end
