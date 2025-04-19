@interface SpotlightCacheController : NSObject

+ (id)cacheParentDirectory;
+ (void)clearAllMetadataFromDiskIfExistsWithCompletionHandler:(id /* block */)a0;

@end
