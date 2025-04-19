@protocol GEOSearchAttributionServerProxy;

@interface GEOSearchAttributionManifestManager : NSObject

@property (readonly, nonatomic) id<GEOSearchAttributionServerProxy> serverProxy;

+ (id)sharedManager;
+ (void)setUseLocalProxy:(BOOL)a0;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)a0;
+ (void)useRemoteProxy;

- (id)init;
- (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
