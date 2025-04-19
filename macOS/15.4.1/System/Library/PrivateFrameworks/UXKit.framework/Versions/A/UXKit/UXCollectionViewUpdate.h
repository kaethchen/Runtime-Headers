@class NSArray, NSMutableIndexSet, UXCollectionView, UXCollectionViewData, NSMutableArray, NSMutableDictionary;

@interface UXCollectionViewUpdate : NSObject {
    UXCollectionView *_collectionView;
    NSArray *_updateItems;
    UXCollectionViewData *_oldModel;
    UXCollectionViewData *_newModel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _newVisibleBounds;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    long long *_oldSectionMap;
    long long *_newSectionMap;
    long long *_oldGlobalItemMap;
    long long *_newGlobalItemMap;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    NSMutableArray *_viewAnimations;
    NSMutableArray *_gaps;
}

@property (readonly, copy, nonatomic) NSArray *updateItemsSortedByIndexPaths;

- (void)dealloc;
- (void)_computeItemUpdates;
- (void)_computeSectionUpdates;
- (void)_computeSupplementaryUpdates;
- (id)initWithCollectionView:(id)a0 updateItems:(id)a1 oldModel:(id)a2 newModel:(id)a3 oldVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 newVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (id)newIndexPathForSupplementaryElementOfKind:(id)a0 oldIndexPath:(id)a1;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)a0 newIndexPath:(id)a1;
- (void)_computeGaps;

@end
