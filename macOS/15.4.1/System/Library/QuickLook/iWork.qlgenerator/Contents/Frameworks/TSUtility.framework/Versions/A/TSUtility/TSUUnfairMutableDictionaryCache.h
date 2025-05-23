@class NSString, NSMutableDictionary;

@interface TSUUnfairMutableDictionaryCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithName:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)performSyncWriteWithUnderlyingDictionary:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;

@end
