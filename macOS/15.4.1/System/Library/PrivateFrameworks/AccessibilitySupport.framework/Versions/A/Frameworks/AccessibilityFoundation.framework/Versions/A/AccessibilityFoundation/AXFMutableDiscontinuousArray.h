@interface AXFMutableDiscontinuousArray : AXFDiscontinuousArray <NSCopying, NSMutableCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)setObject:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)_binarySearchForInsertionIndexForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_coalesceItemAtIndex:(unsigned long long)a0;
- (void)setObject:(id)a0 forIndexes:(id)a1;

@end
