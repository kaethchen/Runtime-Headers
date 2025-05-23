@class NSString;

@interface ATXSuggestedPagesCache : NSObject {
    NSString *_basePath;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)_cacheForPageType:(long long)a0;
- (void)cacheSuggestedPages:(id)a0 forPageType:(long long)a1;
- (id)cachedSuggestedPagesForPageType:(long long)a0;
- (void)evictCachedSuggestedPages;
- (void)printCachedSuggestedPagesStats;

@end
