@interface PRLikenessCacheContext : NSObject

@property unsigned long long cacheSize;
@property BOOL circular;
@property double scale;
@property BOOL forceDecode;

+ (id)contextWithCacheSize:(unsigned long long)a0;

- (id)init;

@end
