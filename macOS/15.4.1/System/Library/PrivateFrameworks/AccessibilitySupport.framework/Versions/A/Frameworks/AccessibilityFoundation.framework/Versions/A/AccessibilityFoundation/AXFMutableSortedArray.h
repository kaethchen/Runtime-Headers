@class NSMutableArray;

@interface AXFMutableSortedArray : NSArray

@property (readonly, nonatomic) NSMutableArray *_array;
@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) unsigned long long options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithComparator:(id /* block */)a0;
- (id)initWithArray:(id)a0 comparator:(id /* block */)a1;
- (id)initWithArray:(id)a0 options:(unsigned long long)a1 comparator:(id /* block */)a2;
- (id)initWithOptions:(unsigned long long)a0 comparator:(id /* block */)a1;

@end
