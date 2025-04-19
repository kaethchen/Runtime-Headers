@class NSMutableIndexSet;

@interface NSCollectionViewIndexMapper : NSObject {
    long long _oldIndexCount;
    long long _newIndexCount;
    long long *_oldIndexMap;
    long long *_newIndexMap;
    NSMutableIndexSet *_oldMovedRows;
    NSMutableIndexSet *_addedRows;
    NSMutableIndexSet *_items;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_deletedRows;
    BOOL _cleanupForMoves;
    BOOL _hasPendingDeletes;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)didDeleteIndex:(long long)a0;
- (BOOL)didInsertIndex:(long long)a0;
- (void)_flushPendingDeletes;
- (void)_flushPendingInserts;
- (void)deleteItemAtIndex:(long long)a0;
- (void)finishModifications;
- (void)getNewIndexCount:(long long *)a0 newIndexMap:(long long **)a1;
- (id)initWithOldIndexCount:(long long)a0 newIndexCount:(long long)a1;
- (void)insertItemAtIndex:(long long)a0;
- (void)moveItemAtIndex:(long long)a0 toIndex:(long long)a1;
- (long long)newIndexAt:(long long)a0;
- (long long)newIndexCount;
- (long long *)newIndexMap;
- (long long)oldIndexAt:(long long)a0;
- (long long)oldIndexCount;
- (long long *)oldIndexMap;

@end
