@class NSMutableDictionary;

@interface SAAppSizeBreakdown : NSObject

@property (retain) NSMutableDictionary *dataPathsSizes;
@property (retain) NSMutableDictionary *fixedPathsSizes;
@property unsigned long long tagsSize;
@property unsigned long long pluginCacheSize;
@property unsigned long long maxPathLength;

- (id)init;
- (void).cxx_destruct;
- (id)generateDictionary;
- (void)addPath:(id)a0 fixedPath:(BOOL)a1 size:(unsigned long long)a2;
- (void)addPluginCacheSize:(unsigned long long)a0;
- (void)addTagSize:(unsigned long long)a0;
- (void)mergeWithAppSizeBreakdown:(id)a0;
- (void)updatePath:(id)a0 cacheSize:(unsigned long long)a1;
- (void)updatePath:(id)a0 cloneSize:(unsigned long long)a1;

@end
