@class NSDictionary, NSIndexSet;

@interface PXArrayChangeDetails : NSObject <NSMutableCopying, NSCopying>

@property (class, readonly, nonatomic) BOOL _mutableCopyInputs;

@property (retain, nonatomic) NSDictionary *indexesWithChangesByProperty;
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) NSIndexSet *removedIndexes;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) BOOL hasMoves;
@property (readonly, nonatomic) NSIndexSet *movesToIndexes;
@property (readonly, nonatomic) struct __CFArray { } *movesFromIndexes;
@property (readonly, nonatomic) NSIndexSet *changedIndexes;
@property (readonly, nonatomic) BOOL hasAnyChanges;
@property (readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;

+ (id)changeDetailsFromArray:(id)a0 toArray:(id)a1 changedObjects:(id)a2 objectComparator:(id /* block */)a3;
+ (id)changeDetailsWithChangedIndexes:(id)a0;
+ (id)changeDetailsWithNoChanges;
+ (id)changeDetailsFromArray:(id)a0 toArray:(id)a1 changedObjects:(id)a2;
+ (id)changeDetailsWithChangedIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)changeDetailsWithInsertedIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)changeDetailsWithMovedFromIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)changeDetailsWithNoIncrementalChanges;
+ (id)changeDetailsWithOldKeyItemIndex:(long long)a0 oldCount:(long long)a1 newKeyItemIndex:(long long)a2 newCount:(long long)a3;
+ (id)changeDetailsWithRemovedIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (unsigned long long)indexAfterApplyingChanges:(id)a0 toIndex:(unsigned long long)a1 objectChanged:(out BOOL *)a2;
+ (id)changeDetailsByMergingChangeDetails:(id)a0;
+ (id)changeDetailsFromSubrange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toSubrange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)changeDetailsWithInsertedIndexes:(id)a0;
+ (id)changeDetailsWithRemovedIndexes:(id)a0;
+ (unsigned long long)indexAfterRevertingChanges:(id)a0 fromIndex:(unsigned long long)a1 objectChanged:(out BOOL *)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)applyToDictionary:(id)a0 removalHandler:(id /* block */)a1 moveHandler:(id /* block */)a2;
- (void)applyToIndexSet:(id)a0;
- (BOOL)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)a0;
- (id)changeDetailsByAddingChangeDetails:(id)a0;
- (id)changeDetailsByAddingChangedIndexes:(id)a0;
- (id)changeDetailsShiftedBy:(long long)a0;
- (void)enumerateMovedIndexesUsingBlock:(id /* block */)a0;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)a0;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)a0;
- (id)indexSetAfterApplyingChangesToIndexSet:(id)a0;
- (id)indexSetAfterRevertingChangesToIndexSet:(id)a0;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)a0 insertedIndexes:(id)a1 movesToIndexes:(id)a2 movesFromIndexes:(struct __CFArray { } *)a3 changedIndexes:(id)a4;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)a0 insertedIndexes:(id)a1 movesToIndexes:(id)a2 movesFromIndexes:(struct __CFArray { } *)a3 changedIndexes:(id)a4 indexesWithChangesByProperty:(id)a5;
- (void)enumerateMovedRangesUsingBlock:(id /* block */)a0;
- (id)changeDetailsByReplacingChangedItemsWithRemovalsAndInsertions;
- (id)changedPropertiesForIndex:(long long)a0;
- (id)indexesWithChangesToProperty:(id)a0;
- (BOOL)isOnlyInsertionAtEnd:(BOOL *)a0 orRemovalAtEnd:(BOOL *)a1 countBeforeChange:(long long)a2 countAfterChange:(long long)a3;

@end
