@class NSIndexSet, NSMutableIndexSet, NSBulkPointerArray;

@interface _NSCollectionViewCachedSectionInfo : NSObject {
    long long _itemCount;
    NSBulkPointerArray *_itemPointers;
    NSMutableIndexSet *_invalidIndexes;
    NSMutableIndexSet *_queuedDeletedItemIndexes;
}

@property (retain) id representedObject;
@property long long itemCount;
@property (readonly) NSIndexSet *itemIndexesQueuedForDeletion;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(long long)a0;
- (void)setObject:(id)a0 atIndex:(long long)a1;
- (unsigned long long)actualItemCount;
- (void)appendItemPointersTo:(id)a0;
- (id)deepCopyForBatchUpdate;
- (void)deleteItemsAtIndexes:(id)a0;
- (void)deleteQueuedItems;
- (void)fetchAllNeededRepresentedObjectsFromObjectBasedDataSource:(id)a0 forCollectionView:(id)a1;
- (id)initWithRepresentedObject:(id)a0 itemCount:(long long)a1 itemPointers:(id)a2 invalidIndexes:(id)a3;
- (void)insertItemsAtIndexes:(id)a0;
- (void)moveItemFromIndex:(long long)a0 toIndex:(long long)a1;
- (BOOL)needsToFetchAnyRepresentedObjects;
- (void)queueDeleteItemsAtIndexes:(id)a0;
- (void)reloadItemsAtIndexes:(id)a0;
- (void)replaceItemPointersFromArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAllRepresentedObjectPointers:(id)a0;

@end
