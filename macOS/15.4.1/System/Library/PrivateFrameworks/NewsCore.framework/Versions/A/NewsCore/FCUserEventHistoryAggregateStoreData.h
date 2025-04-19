@class FCUserEventHistoryAggregateCounts;

@interface FCUserEventHistoryAggregateStoreData : NSObject

@property (class, readonly, nonatomic) FCUserEventHistoryAggregateStoreData *empty;

@property (nonatomic) long long baselineTimestamp;
@property (nonatomic) long long baselineStatelessEventCount;
@property (nonatomic) long long baselineTotalEventCount;
@property (retain, nonatomic) FCUserEventHistoryAggregateCounts *aggregateCounts;

- (id)init;
- (void).cxx_destruct;

@end
