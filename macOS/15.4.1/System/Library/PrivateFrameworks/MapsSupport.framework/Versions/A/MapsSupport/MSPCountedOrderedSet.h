@class NSCountedSet, NSOrderedSet, NSArray, NSMutableOrderedSet;

@interface MSPCountedOrderedSet : NSObject {
    NSCountedSet *_counts;
    NSMutableOrderedSet *_set;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *contents;
@property (readonly, copy, nonatomic) NSArray *array;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)countForObject:(id)a0;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)minusSet:(id)a0;
- (void)removeObject:(id)a0;
- (void)unionSet:(id)a0;
- (void)_addObjectNoLock:(id)a0;
- (void)_removeObjectNoLock:(id)a0;
- (void)removeObjectsFromArray:(id)a0;

@end
