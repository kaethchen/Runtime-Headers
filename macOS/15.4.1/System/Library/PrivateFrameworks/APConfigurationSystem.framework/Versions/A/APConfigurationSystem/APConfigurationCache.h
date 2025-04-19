@class APInMemoryTTLCache;

@interface APConfigurationCache : NSObject <APPurgeableCacheNotifierP>

@property (retain, nonatomic) APInMemoryTTLCache *purgeableCache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)setConfiguration:(id)a0;
- (id)configurationForPath:(id)a0;
- (void)recentlyAccessedObject:(id)a0;

@end
