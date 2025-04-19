@class NSMapTable;

@interface _NSCollectionViewCachedWorldInfo : NSObject {
    NSMapTable *_indexToSectionInfoMap;
    NSMapTable *_representedObjectToIndexPathMap;
}

@property (readonly) long long generation;
@property long long sectionCount;

- (void)dealloc;
- (id)description;
- (id)_representedObjectForIndexPath:(id)a0;
- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (id)_indexPathForRepresentedObject:(id)a0;
- (void)reloadSections:(id)a0;
- (void)_clearRepresentedObjectToIndexPathMap;
- (id)_indexPathOfItemWithRepresentedObject:(id)a0;
- (void)_insertSections:(id)a0 representedObjects:(id)a1;
- (void)_invalidateEverything;
- (void)_rebuildRepresentedObjectToIndexPathMap;
- (void)_removeIndexPathForRepresentedObject:(id)a0;
- (id)_representedObjectForItemAtIndexPath:(id)a0;
- (id)_representedObjectForItemAtIndexPath:(id)a0 fetchingIfNecessaryForCollectionView:(id)a1;
- (id)_representedObjectForSectionAtIndex:(unsigned long long)a0;
- (void)_setRepresentedObject:(id)a0 forSectionAtIndex:(unsigned long long)a1;
- (id)deepCopyForBatchUpdate;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (BOOL)fetchAllNeededRepresentedObjectsFromObjectBasedDataSource:(id)a0 forCollectionView:(id)a1;
- (id)getFlattenedRepresentedObjectList;
- (id)initWithGeneration:(long long)a0;
- (id)initWithGeneration:(long long)a0 sectionCount:(long long)a1 indexToSectionInfoMap:(id)a2 representedObjectToIndexPathMap:(id)a3;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (long long)numberOfItemsInSection:(long long)a0 fetchingIfNecessaryForCollectionView:(id)a1;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (void)replaceSectionInfos:(id)a0;
- (id)sectionInfoAtIndex:(long long)a0;

@end
