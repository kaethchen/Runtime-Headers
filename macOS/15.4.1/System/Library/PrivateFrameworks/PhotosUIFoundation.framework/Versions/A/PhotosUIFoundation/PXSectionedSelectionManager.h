@class PXSectionedDataSource, PXSelectionSnapshot, NSOrderedSet, PXSectionedDataSourceManager, NSString, PXMutableIndexPathSet;
@protocol PXSectionedSelectionManagerSnapshotValidator;

@interface PXSectionedSelectionManager : PXObservable <PXSectionedDataSourceManagerObserver> {
    struct { BOOL selectionSnapshot; } _needsUpdateFlags;
}

@property (retain, nonatomic, setter=_setSelectionSnapshot:) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic, setter=_setDataSource:) PXSectionedDataSource *dataSource;
@property (retain, nonatomic, setter=_setSelectedIndexPaths:) PXMutableIndexPathSet *selectedIndexPaths;
@property (nonatomic, setter=_setCursorIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } cursorIndexPath;
@property (nonatomic, setter=_setPendingIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } pendingIndexPath;
@property (nonatomic, setter=_setPressedIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } pressedIndexPath;
@property (nonatomic, setter=_setSelectionLimitReached:) BOOL selectionLimitReached;
@property (nonatomic, setter=_setEmptySelectionAvoided:) BOOL emptySelectionAvoided;
@property (retain, nonatomic, setter=_setOverallSelectionOrder:) NSOrderedSet *overallSelectionOrder;
@property (weak, nonatomic) id<PXSectionedSelectionManagerSnapshotValidator> snapshotValidator;
@property (nonatomic) BOOL disableAssetTypeCounting;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setSelectedIndexPaths:(id)a0;
- (void)deselectAll;
- (void)selectAllItems;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)setSelectedIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithDataSourceManager:(id)a0;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)a0;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)_invalidateSelectionSnapshot;
- (void)_updateSelectionSnapshotIfNeeded;
- (BOOL)hasAnyChangesFromSelection:(id)a0;
- (void)setCursorIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)setSelectedState:(BOOL)a0 forIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (void)setSelectedState:(BOOL)a0 forIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 andUpdateCursorIndexPath:(BOOL)a2;
- (void)setSelectedState:(BOOL)a0 forIndexPathSet:(id)a1;
- (void)setSelectionLimitReached:(BOOL)a0;
- (void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(id /* block */)a0;
- (void)_setDataSource:(id)a0 withChangeHistory:(id)a1;
- (id)_validatedSnapshotForSnapshot:(id)a0;
- (void)selectAllItemsInSection:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)setOverallSelectionOrder:(id)a0;
- (void)setPendingIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)setPressedIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
