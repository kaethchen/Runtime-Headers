@class OITSUReadWriteQueue, NSMutableDictionary, NSString;

@interface TSUConcurrentMutableDictionaryCache : NSObject {
    NSMutableDictionary *_cache;
    NSString *_name;
}

@property (readonly, nonatomic) OITSUReadWriteQueue *readWriteQueue;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithName:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)performSyncWriteWithUnderlyingDictionary:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;

@end
