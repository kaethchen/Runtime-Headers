@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject {
    CLSPublicEventCache *_cache;
}

@property (nonatomic) double queryRadius;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)saveEventsForCacheInvalidation:(id)a0;
- (id)cachedPublicEventsForMuid:(unsigned long long)a0;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)a0 progressBlock:(id /* block */)a1;
- (id)urlForEventsForCacheInvalidation;

@end
