@class _ASKResourceCacheGroup, NSCache;

@interface ASKResourceCache : NSObject

@property (readonly, nonatomic) _ASKResourceCacheGroup *group;
@property (readonly, nonatomic) NSCache *contents;
@property (readonly, nonatomic) BOOL isGroupMember;
@property (nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground;
@property (nonatomic) unsigned long long limit;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllResources;
- (void)addResource:(id)a0 forKey:(id)a1;
- (id)initWithGroupOfCache:(id)a0;
- (void)replaceResourcesForKey:(id)a0 withResource:(id)a1;
- (id)resourcesForKey:(id)a0;

@end
