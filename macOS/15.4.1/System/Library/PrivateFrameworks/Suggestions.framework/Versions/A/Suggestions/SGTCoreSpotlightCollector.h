@class SGTCoreSpotlightCollectorReserved;

@interface SGTCoreSpotlightCollector : SGTBaseCollector {
    SGTCoreSpotlightCollectorReserved *_reserved2;
}

+ (id)dispatchQueueName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)_currentQuery;
- (void)_setCurrentQuery:(id)a0;
- (BOOL)isQuerying;
- (void)schedulingWarmingQueryWithQuery:(id)a0 searchScopes:(id)a1;
- (void)searchWithContext:(id)a0;

@end
