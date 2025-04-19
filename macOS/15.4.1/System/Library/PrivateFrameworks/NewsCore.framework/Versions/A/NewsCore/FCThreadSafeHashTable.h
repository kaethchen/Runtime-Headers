@class NSArray, NSHashTable, NFUnfairLock;

@interface FCThreadSafeHashTable : NSObject {
    NFUnfairLock *_lock;
    NSHashTable *_hashTable;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObjects;

+ (id)hashTableWithOptions:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 capacity:(unsigned long long)a1;

@end
