@class NSString, NSObject;
@protocol BCSShardCacheSkipping, BCSFetchTrigger, BCSShardCaching, BCSMetricFactoryProtocol, OS_dispatch_queue;

@interface BCSShardResolver : NSObject <BCSShardResolving>

@property (readonly, retain, nonatomic) id<BCSShardCaching> shardCache;
@property (readonly, retain, nonatomic) id<BCSShardCacheSkipping> shardCacheSkipper;
@property (retain, nonatomic) id<BCSFetchTrigger> megashardFetchTrigger;
@property (readonly, retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithShardCache:(id)a0 cacheSkipper:(id)a1 megashardFetchTrigger:(id)a2 metricFactory:(id)a3;
- (void)shardItemMatching:(id)a0 clientBundleID:(id)a1 cacheOnly:(BOOL)a2 metric:(id)a3 completion:(id /* block */)a4;
- (void)shardItemMatching:(id)a0 clientBundleID:(id)a1 metric:(id)a2 completion:(id /* block */)a3;
- (void)shardItemsMatching:(id)a0 metric:(id)a1 completion:(id /* block */)a2;
- (void)triggerMegashardFetchForShardType:(long long)a0 reason:(unsigned long long)a1 completion:(id /* block */)a2;

@end
