@class AMSEngagementCacheDatabase;

@interface AMSEngagementCache : NSObject

@property (retain) AMSEngagementCacheDatabase *database;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (void)cacheResponse:(id)a0 filter:(id)a1 expiration:(id)a2;
- (id)cachedResponseForEvent:(id)a0;

@end
