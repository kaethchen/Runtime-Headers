@class NSString, NSMapTable;
@protocol NSCacheDelegate;

@interface CKExpiringCache : NSCache <NSCacheDelegate>

@property (weak) id<NSCacheDelegate> delegate;
@property (readonly, nonatomic) NSMapTable *entries;
@property (readonly, nonatomic) NSMapTable *weakCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_entryForKey:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2 expiration:(double)a3 supportsDeferrals:(BOOL)a4 preserveExpiration:(BOOL)a5;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2 expiration:(double)a3;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2 expirationDate:(id)a3;
- (void)setObject:(id)a0 forKey:(id)a1 expiration:(double)a2;
- (void)setObject:(id)a0 forKey:(id)a1 expirationDate:(id)a2;

@end
