@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly) unsigned long long mediaType;
@property (readonly) NSString *storeFront;

- (void).cxx_destruct;
- (id)cachePath;
- (id)cacheDirectory;
- (BOOL)_hasCachedData;
- (BOOL)addCacheData:(id)a0;
- (id)cacheTitle;
- (void)clearCacheIfNeeded;
- (id)getCacheData;
- (id)initWithMediaType:(unsigned long long)a0;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1;

@end
