@class _PASLock;

@interface PPContactDiskCacheManager : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)accessCacheWithBlock:(id /* block */)a0;
- (void)mutateCacheWithBlock:(id /* block */)a0;

@end
