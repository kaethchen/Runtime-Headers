@class SHBagContract;

@interface SHInsightsConfiguration : NSObject

@property (readonly) SHBagContract *bagContract;

+ (id)bagContract;
+ (void)fetchSharedInstanceWithCompletion:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBagContract:(id)a0;
- (void)artistsCachedDataMaxAgeWithCompletionHandler:(id /* block */)a0;
- (void)artistsClusterEndpointWithCompletionHandler:(id /* block */)a0;
- (void)artistsEnabledWithCompletionHandler:(id /* block */)a0;
- (id)fillInTokenizedURL:(id)a0 date:(id)a1 geoHash:(id)a2;
- (void)geoChartsEndpointForDate:(id)a0 geoHash:(id)a1 completionHandler:(id /* block */)a2;
- (void)geoHashLengthsWithCompletionHandler:(id /* block */)a0;
- (void)tokenizedURLForBagPathKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)tracksCachedDataMaxAgeWithCompletionHandler:(id /* block */)a0;
- (void)tracksClusterEndpointForStorefront:(id)a0 completionHandler:(id /* block */)a1;
- (void)tracksEnabledWithCompletionHandler:(id /* block */)a0;

@end
