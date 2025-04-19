@class _PASLock;

@interface PPMeCardCacheManager : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)accessCacheWithBlock:(id /* block */)a0;

@end
