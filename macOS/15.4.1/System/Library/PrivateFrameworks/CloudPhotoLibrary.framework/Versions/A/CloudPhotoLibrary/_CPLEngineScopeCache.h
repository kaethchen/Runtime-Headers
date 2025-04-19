@class NSIndexSet, NSMutableDictionary;

@interface _CPLEngineScopeCache : NSObject {
    NSMutableDictionary *_scopeCache;
    NSMutableDictionary *_scopeByLocalIndex;
    NSMutableDictionary *_scopeByCloudIndex;
    NSMutableDictionary *_scopeByStableIndex;
    NSIndexSet *_validLocalIndexes;
    NSIndexSet *_validCloudIndexes;
}

- (id)init;
- (void).cxx_destruct;
- (void)cacheScope:(id)a0 forScopeStorage:(id)a1;
- (void)cacheValidCloudIndexes:(id)a0;
- (void)cacheValidLocalIndexes:(id)a0;
- (id)scopeWithCloudIndex:(long long)a0;
- (id)scopeWithIdentifier:(id)a0;
- (id)scopeWithLocalIndex:(long long)a0;
- (id)scopeWithStableIndex:(long long)a0;
- (id)validCloudIndexes;
- (id)validLocalIndexes;

@end
