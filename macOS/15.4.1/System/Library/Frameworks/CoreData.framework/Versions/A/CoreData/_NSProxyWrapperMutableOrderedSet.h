@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {
    _NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;
}

- (void)dealloc;
- (void)addObject:(id)a0;
- (void)addObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)addObjectsFromArray:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (void)insertObjects:(id *)a0 count:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)intersectOrderedSet:(id)a0;
- (void)intersectSet:(id)a0;
- (void)minusOrderedSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObjectsInArray:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)sortRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingComparator:(id /* block */)a2;
- (void)sortUsingComparator:(id /* block */)a0;
- (void)sortWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (void)unionOrderedSet:(id)a0;
- (void)unionSet:(id)a0;

@end
