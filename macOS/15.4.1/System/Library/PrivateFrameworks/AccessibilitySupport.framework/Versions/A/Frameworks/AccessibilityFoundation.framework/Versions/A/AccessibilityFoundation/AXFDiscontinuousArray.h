@class NSMutableArray, NSMutableIndexSet;

@interface AXFDiscontinuousArray : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSMutableArray *_objects;
@property (retain, nonatomic) NSMutableIndexSet *_indexes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } domain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (BOOL)containsIndex:(unsigned long long)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)indexesOfObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)a0;
- (BOOL)containsIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)a0;
- (unsigned long long)indexLessThanIndex:(unsigned long long)a0;
- (unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)a0;
- (id)initWithDomain:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)objectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id /* block */)_binarySearchComparatorForLocations;
- (unsigned long long)_binarySearchForIndexOfRangeContainingIndex:(unsigned long long)a0;
- (BOOL)_errorIfInvalidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containsAnyIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 block:(id /* block */)a2;
- (void)enumerateObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 block:(id /* block */)a2;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 block:(id /* block */)a1;

@end
