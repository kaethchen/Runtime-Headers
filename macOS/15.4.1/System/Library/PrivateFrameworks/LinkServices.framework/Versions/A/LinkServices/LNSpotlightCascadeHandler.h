@interface LNSpotlightCascadeHandler : NSObject

+ (void)handleDeletionStream:(id)a0 items:(id)a1 bundleId:(id)a2 completionHandler:(id /* block */)a3;
+ (void)handleFullSetStream:(id)a0 items:(id)a1 bundleId:(id)a2 indexName:(id)a3 serialNumber:(unsigned long long)a4 completionHandler:(id /* block */)a5;
+ (void)handleIncrementalStream:(id)a0 items:(id)a1 bundleId:(id)a2 existingItemCount:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end
