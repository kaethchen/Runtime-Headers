@class NSMutableArray;

@interface KHDBLockedArray : NSMutableArray {
    NSMutableArray *m_array;
    int m_spinlock;
}

+ (id)arrayWithArray:(id)a0;
+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)arrayWithObject:(id)a0;
+ (id)arrayWithObjects:(id)a0;
+ (id)arrayWithObjects:(id *)a0 count:(unsigned long long)a1;
+ (id)arrayWithContentsOfFile:(id)a0;
+ (id)arrayWithContentsOfURL:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqualToArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)arrayByAddingObject:(id)a0;
- (id)arrayByAddingObjectsFromArray:(id)a0;
- (Class)classForCoder;
- (id)componentsJoinedByString:(id)a0;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)descriptionWithLocale:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)exchangeObjectAtIndex:(unsigned long long)a0 withObjectAtIndex:(unsigned long long)a1;
- (id)firstObjectCommonWithArray:(id)a0;
- (void)getObjects:(id *)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithArray:(id)a0;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithObjects:(id)a0;
- (id)initWithObjects:(id *)a0 count:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectEnumerator;
- (id)objectsAtIndexes:(id)a0;
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
- (id)reverseObjectEnumerator;
- (void)setArray:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)sortUsingFunction:(void /* function */ *)a0 context:(void *)a1;
- (void)sortUsingSelector:(SEL)a0;
- (id)sortedArrayUsingFunction:(void /* function */ *)a0 context:(void *)a1;
- (id)sortedArrayUsingSelector:(SEL)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)valueForKey:(id)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)sortedArrayHint;
- (void)removeObjectsFromIndices:(unsigned long long *)a0 numIndices:(unsigned long long)a1;
- (id)sortedArrayUsingFunction:(void /* function */ *)a0 context:(void *)a1 hint:(id)a2;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;

@end
