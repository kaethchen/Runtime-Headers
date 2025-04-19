@class NSMutableSet, NSMutableArray;

@interface NSScrubberPendingChanges : NSObject

@property long long selectedIndex;
@property (readonly) NSMutableSet *toBeRemoved;
@property (readonly) NSMutableSet *toReload;
@property (readonly) NSMutableArray *stagedAttributes;
@property (readonly) long long stagedAttributesStart;
@property (readonly) long long countDelta;

- (void)dealloc;
- (id)_indexSetForStagedAttributesFromGlobalIndexSet:(id)a0 truncatingLength:(BOOL)a1;
- (id)initWithCurrentLayoutAttributes:(id)a0;
- (void)insertItemsAtIndexes:(id)a0;
- (void)moveItemAtIndex:(long long)a0 toIndex:(long long)a1;
- (long long)oldIndexForNewIndex:(long long)a0;
- (void)reloadItemsAtIndexes:(id)a0;
- (void)removeItemsAtIndexes:(id)a0;
- (id)stagedAttributesForIndex:(long long)a0;

@end
