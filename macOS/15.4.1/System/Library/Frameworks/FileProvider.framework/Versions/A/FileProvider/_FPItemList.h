@class NSMutableDictionary, NSMutableOrderedSet;

@interface _FPItemList : NSMutableArray {
    NSMutableOrderedSet *_orderedSet;
    NSMutableDictionary *_itemsByIDs;
    NSMutableDictionary *_formerIDs;
}

- (id)description;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)allObjects;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0 inSortedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingComparator:(id /* block */)a3;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)redactedDescription;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)sortUsingDescriptors:(id)a0;
- (id)itemWithItemID:(id)a0;
- (id)formerIDs;
- (unsigned long long)indexOfItemID:(id)a0;
- (BOOL)isObsoleteID:(id)a0;
- (id)itemIDsDifferenceWithList:(id)a0;
- (void)removeObjectWithID:(id)a0;

@end
