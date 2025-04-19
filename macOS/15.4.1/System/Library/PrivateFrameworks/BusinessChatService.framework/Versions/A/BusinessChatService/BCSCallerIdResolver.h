@class NSString, BCSRemoteFetchPIR;
@protocol BCSItemCaching, BCSPIRServerEnvironmentProtocol, BCSMetricFactoryProtocol, BCSItemCacheSkipping;

@interface BCSCallerIdResolver : NSObject <BCSItemResolving>

@property (readonly, retain, nonatomic) id<BCSPIRServerEnvironmentProtocol> environment;
@property (readonly, retain, nonatomic) id<BCSItemCaching> itemCache;
@property (readonly, retain, nonatomic) id<BCSItemCacheSkipping> itemCacheSkipper;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) BCSRemoteFetchPIR *pirFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
