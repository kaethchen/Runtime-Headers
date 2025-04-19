@class NSMutableArray;

@interface NSXMLChildren : NSMutableArray {
    NSMutableArray *_array;
    BOOL _isStale;
}

- (void)dealloc;
- (id)init;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (unsigned long long)count;
- (void)exchangeObjectAtIndex:(unsigned long long)a0 withObjectAtIndex:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObject:(id)a0;
- (void)removeObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObjectIdenticalTo:(id)a0;
- (void)removeObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObjectsInArray:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withObjectsFromArray:(id)a1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withObjectsFromArray:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setArray:(id)a0;
- (void)sortUsingFunction:(void /* function */ *)a0 context:(void *)a1;
- (void)sortUsingSelector:(SEL)a0;
- (id)initWithMutableArray:(id)a0;
- (void)makeStale;
- (id)reallyAddObject:(id)a0;
- (id)reallyInsertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)reallyRemoveAllObjects;
- (id)reallyRemoveObject:(id)a0;
- (id)reallyRemoveObjectAtIndex:(unsigned long long)a0;
- (id)reallyReplaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectsFromIndices:(unsigned long long *)a0 numIndices:(unsigned long long)a1;

@end
