@class NSIndexSet, NSMutableArray;

@interface _NSLazyFetchingArray : NSMutableArray {
    NSMutableArray *_objects;
    NSIndexSet *_fetchedIndexes;
    unsigned long long _batchSize;
    id _owner;
    BOOL _shouldFetchAllRanges;
    BOOL _hasChanges;
    BOOL _madeMutable;
}

- (void)dealloc;
- (id)init;
- (id)mutableCopy;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObjectIdenticalTo:(id)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setArray:(id)a0;
- (void)setOwner:(id)a0;
- (void)filterUsingPredicate:(id)a0;
- (void)sortUsingDescriptors:(id)a0;
- (id)_fetchedIndexes;
- (void)_contextDidSave;
- (void)_fetchAllRanges;
- (void)_ensureContentArrayIsMutable;
- (void)_fetchBatchForIndexes:(id)a0;
- (void)_sortUsingDescriptors:(id)a0;
- (id)_underlyingArrayObjectAtIndex:(unsigned long long)a0;
- (void)addObjectsIDsFromArray:(id)a0;
- (void)contextDidSave;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (void)setShouldFetchAllRanges:(BOOL)a0;
- (void)updateBatchSizeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
