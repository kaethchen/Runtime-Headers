@class NSMutableSet;
@protocol BCSMetricFactoryProtocol, BCSShardCacheSkipping, BCSShardCacheQueryable, BCSConfigCaching, BCSMegashardRemoteFetching, BCSShardItemInstantiating, BCSUserDefaultsProviding;

@interface BCSMegashardFetcher : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long shardType;
@property (retain, nonatomic) id<BCSConfigCaching> configCache;
@property (retain, nonatomic) id<BCSShardCacheQueryable> shardCache;
@property (retain, nonatomic) id<BCSShardCacheSkipping> shardCacheSkipper;
@property (retain, nonatomic) id<BCSMegashardRemoteFetching> megashardRemoteFetcher;
@property (retain, nonatomic) id<BCSShardItemInstantiating> shardInstantiator;
@property (retain, nonatomic) id<BCSUserDefaultsProviding> userDefaults;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) NSMutableSet *triggers;

- (void).cxx_destruct;
- (id)initWithShardType:(long long)a0 configCache:(id)a1 shardCache:(id)a2 shardCacheSkipper:(id)a3 shardInstantiator:(id)a4 megashardRemoteFetcher:(id)a5 userDefaults:(id)a6 metricFactory:(id)a7;
- (void)_fetchMegashardForReason:(unsigned long long)a0 withBGSystemTask:(id)a1 completion:(id /* block */)a2;
- (long long)_hoursSinceLastSuccessfulFetchForType:(long long)a0;
- (void)_noteFetchForType:(long long)a0 finishedSuccessfully:(BOOL)a1;
- (BOOL)_shouldFetchForReason:(unsigned long long)a0 shardType:(long long)a1;
- (void)addFetchTrigger:(id)a0;

@end
