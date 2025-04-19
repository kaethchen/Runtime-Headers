@class NSMutableArray, NSString, NSMapTable, _NSCollectionViewCachedWorldInfo, NSCollectionViewIndexMapper, NSMutableIndexSet, NSCollectionView;
@protocol NSCollectionViewDataSource;

@interface _NSCollectionViewDataSourceAdapter : NSObject <NSCollectionViewDataSource> {
    id<NSCollectionViewDataSource> _dataSource;
    BOOL _dataSourceImplementsObjectMethods;
    BOOL _flushCacheAtNextLayoutBecauseReloadDataWasInvoked;
    _NSCollectionViewCachedWorldInfo *_committedState;
    _NSCollectionViewCachedWorldInfo *_incomingState;
    NSCollectionViewIndexMapper *_sectionIndexMapper;
    BOOL _reportPostBatchUpdateState;
    BOOL _finishingBatchUpdate;
    id _representedObjectForCurrentDataSourceInvocation;
    NSMapTable *_pushedSectionIndexesToRepresentedObjectsMap;
    NSMapTable *_pushedSectionObjectsToItemObjectsMap;
    NSMapTable *_sectionRepresentedObjectToQueuedInsertionIndexesMap;
    NSMutableIndexSet *_queuedSectionDeleteIndexes;
    NSMutableArray *_queuedSectionMoveIndexPairs;
    NSMutableIndexSet *_queuedSectionInsertIndexes;
}

@property NSCollectionView *collectionView;
@property (weak) id<NSCollectionViewDataSource> dataSource;
@property (readonly) long long committedSectionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateEverythingNowOrLater;
- (id)_representedObjectForIndexPath:(id)a0;
- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (void)_endBatchUpdate;
- (id)_indexPathForRepresentedObject:(id)a0;
- (void)reloadSections:(id)a0;
- (void)_beginReportingPostBatchUpdateState;
- (void)_clearRepresentedObjectToIndexPathMap;
- (void)_finishBatchUpdateWithUpdateItems:(id)a0 newSectionCount:(long long)a1 newSectionSourceIndexes:(long long *)a2 newSectionItemCounts:(long long *)a3 newGlobalItemCount:(long long)a4 newGlobalItemSourceIndexes:(long long *)a5;
- (void)_flushCacheIfScheduled;
- (unsigned long long)_indexOfSectionWithRepresentedObject:(id)a0;
- (unsigned long long)_indexOfSectionWithRepresentedObject:(id)a0 inBatchUpdateAfterState:(BOOL)a1;
- (id)_indexPathOfItemWithRepresentedObject:(id)a0;
- (void)_insertSections:(id)a0 representedObjects:(id)a1;
- (void)_invalidateEverything;
- (void)_noteDeleteSections:(id)a0;
- (void)_noteInsertSections:(id)a0;
- (void)_noteMoveSection:(long long)a0 toSection:(long long)a1;
- (void)_prepareForBatchUpdate;
- (void)_processQueuedInsertsInSectionObjects;
- (void)_queueDeleteItemsAtIndexPaths:(id)a0;
- (void)_queueInsertItemsAtIndexes:(id)a0 inSectionObject:(id)a1;
- (void)_rebuildRepresentedObjectToIndexPathMap;
- (id)_representedObjectForCurrentDataSourceInvocation;
- (id)_representedObjectForItemAtIndexPath:(id)a0;
- (id)_representedObjectForSectionAtIndex:(unsigned long long)a0;
- (void)_scheduleFlushCacheAtNextLayoutBecauseReloadDataWasInvoked;
- (void)_setRepresentedObject:(id)a0 forSectionAtIndex:(unsigned long long)a1;
- (void)_setRepresentedObjects:(id)a0 forInsertedSection:(id)a1;
- (void)_stashPushedRepresentedObjects:(id)a0 forSectionInsertsAtIndexes:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)insertItemsAtIndexPaths:(id)a0;
- (BOOL)isDiffableDataSource;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadItemsAtIndexPaths:(id)a0;

@end
