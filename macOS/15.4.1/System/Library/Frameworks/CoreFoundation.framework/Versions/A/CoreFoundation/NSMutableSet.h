@interface NSMutableSet : NSSet

+ (id)setWithCapacity:(unsigned long long)a0;

- (Class)classForCoder;
- (void)filterUsingPredicate:(id)a0;
- (void)bs_safeAddObject:(id)a0;
- (void)setSet:(id)a0;
- (void)_mutate;
- (void)addObjectsFromOrderedSet:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addObject:(id)a0;
- (void)addObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)addObjectsFromArray:(id)a0;
- (void)addObjectsFromArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addObjectsFromOrderedSet:(id)a0;
- (void)addObjectsFromSet:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)intersectOrderedSet:(id)a0;
- (void)intersectSet:(id)a0;
- (void)minusOrderedSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)removeObjectsInArray:(id)a0;
- (void)removeObjectsInArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeObjectsInOrderedSet:(id)a0;
- (void)removeObjectsInOrderedSet:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeObjectsInSet:(id)a0;
- (void)removeObjectsPassingTest:(id /* block */)a0;
- (void)removeObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)replaceObject:(id)a0;
- (void)setArray:(id)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (void)setObject:(id)a0;
- (void)setOrderedSet:(id)a0;
- (void)unionOrderedSet:(id)a0;
- (void)unionSet:(id)a0;

@end
