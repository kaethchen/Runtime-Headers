@class NSString, NSCache, NSRecursiveLock;
@protocol EFLazyCacheDelegate;

@interface EFLazyCache : NSObject <NSCacheDelegate> {
    NSRecursiveLock *_lock;
    NSCache *_storage;
    struct { unsigned char delegateRespondsToLazyCacheWillEvictObject : 1; } _flags;
}

@property (weak, nonatomic) id<EFLazyCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)initWithCountLimit:(unsigned long long)a0;
- (id)cachedObjectForKey:(id)a0;
- (id)objectForKey:(id)a0 generator:(id /* block */)a1;
- (void)_exchangeOriginalObject:(id)a0 forKey:(id)a1 withObject:(id)a2;
- (id)storedObjectForKey:(id)a0;
- (long long)waiterCountForKey:(id)a0;

@end
