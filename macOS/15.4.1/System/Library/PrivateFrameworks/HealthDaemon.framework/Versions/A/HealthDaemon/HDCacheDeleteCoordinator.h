@class HKSynchronousObserverSet;

@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}

+ (id)unitTesting_cacheDeleteUrgencies;

- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (id)purgeSpace:(int)a0 info:(id)a1;
- (id)queryPurgeableSpace:(int)a0 info:(id)a1;
- (void)registerCacheDeleteProvider:(id)a0;
- (id)unitTesting_purgeSpace:(int)a0 info:(id)a1;
- (id)unitTesting_queryPurgeableSpace:(int)a0 info:(id)a1;
- (void)unregisterCacheDeleteProvider:(id)a0;

@end
