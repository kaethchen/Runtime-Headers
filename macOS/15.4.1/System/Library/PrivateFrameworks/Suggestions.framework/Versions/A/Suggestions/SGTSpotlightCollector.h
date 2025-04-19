@class SGTSpotlightCollectorReserved, SGTSpotlightCollectorWarmingQueryReserved;

@interface SGTSpotlightCollector : SGTBaseCollector {
    SGTSpotlightCollectorReserved *_reserved2;
    SGTSpotlightCollectorWarmingQueryReserved *_reservedWarming;
}

+ (id)dispatchQueueName;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)_discardWarmingQuery;
- (void)_dispatchWarmingQuery;
- (void)_forceQueryResults:(struct __MDQuery { } *)a0;
- (void)_launchWarmingQuery;
- (void)_obtainQueryResultsAndProcessFromQuery:(struct __MDQuery { } *)a0 intermediateResults:(BOOL)a1;
- (void)_queryDidFinish:(id)a0;
- (void)_reallyScheduleWarmingQuery;
- (void)_setCurrentQuery:(struct __MDQuery { } *)a0;
- (void)_warmingQueryDidFinish:(id)a0;
- (BOOL)isQuerying;
- (void)schedulingWarmingQueryWithQuery:(id)a0 searchScopes:(id)a1;
- (id)searchItemsFromQuery:(struct __MDQuery { } *)a0 context:(id)a1;
- (void)searchWithContext:(id)a0;

@end
