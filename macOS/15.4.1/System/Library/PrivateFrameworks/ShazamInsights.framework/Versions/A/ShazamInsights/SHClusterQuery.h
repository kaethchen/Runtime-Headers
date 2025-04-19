@class NSURL, SHStorefront, SHInsightsConfiguration;

@interface SHClusterQuery : NSObject

@property (readonly) NSURL *sourceURL;
@property (readonly) NSURL *destinationURL;
@property (readonly) long long type;
@property (readonly) SHStorefront *storefront;
@property (readonly) SHInsightsConfiguration *configuration;

+ (id)clusterForType:(long long)a0;
+ (id)artistsCluster;
+ (id)tracksCluster;

- (void).cxx_destruct;
- (void)controllerForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)filterMediaItemQueryCollection:(id)a0 bySeedCollection:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithType:(long long)a0 configuration:(id)a1 sourceURL:(id)a2 destinationURL:(id)a3;
- (id)initWithType:(long long)a0 sourceURL:(id)a1 destinationURL:(id)a2;
- (void)mediaItemsMatchingValuesInCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaItemsWithHighCohesionToValue:(id)a0 forProperty:(id)a1 completionHandler:(id /* block */)a2;
- (void)statusWithCompletionHandler:(id /* block */)a0;

@end
