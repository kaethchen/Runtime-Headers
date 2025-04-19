@class NSString, NSMutableArray;

@interface SUMetadataCache : NSObject {
    NSString *_cachePath;
    NSMutableArray *_metadata;
    double _cacheAge;
}

+ (BOOL)isCacheCurrent;

- (void)dealloc;
- (id)init;
- (void)clearCache;
- (id)_metadataMatchingPredicate:(id)a0 pruningProductKeys:(BOOL)a1;
- (BOOL)addMetadataFromDistribution:(id)a0 forProductKey:(id)a1 isStaged:(BOOL)a2;
- (id)cachedProductKeysMatchingPredicate:(id)a0;
- (double)existingCacheAge;
- (id)initByReadingDiskCache:(BOOL)a0;
- (id)metadataMatchingPredicate:(id)a0;
- (BOOL)writeCacheToDisk;

@end
