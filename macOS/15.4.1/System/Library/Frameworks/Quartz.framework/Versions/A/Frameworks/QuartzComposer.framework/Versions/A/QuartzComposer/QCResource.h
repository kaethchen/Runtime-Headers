@interface QCResource : NSObject {
    int _retainCount;
    void *_pool;
    void *_unused[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (oneway void)release;
- (id)description;
- (id)retain;
- (unsigned long long)retainCount;
- (id)copyWithZone_GCCacheResource:(struct _NSZone { } *)a0;
- (BOOL)didRecycleResource:(id)a0;
- (id)resourcePool;
- (void)setResourcePool:(id)a0;
- (void)willRecycleResource:(id)a0;

@end
