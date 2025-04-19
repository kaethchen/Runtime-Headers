@class NSString, NSObject;
@protocol BCSConfigCaching, BCSFetchTrigger, BCSConfigCacheSkipping, BCSMetricFactoryProtocol, OS_dispatch_queue;

@interface BCSConfigResolver : NSObject <BCSConfigResolving>

@property (retain, nonatomic) id<BCSConfigCaching> configCache;
@property (retain, nonatomic) id<BCSConfigCacheSkipping> configCacheSkipper;
@property (retain, nonatomic) id<BCSFetchTrigger> megashardFetchTrigger;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
