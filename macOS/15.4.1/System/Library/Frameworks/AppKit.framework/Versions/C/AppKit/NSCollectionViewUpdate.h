@class NSUUID, NSString, NSArray, _NSCollectionViewCore, NSMutableDictionary, NSCollectionViewData, NSMutableArray, NSCollectionViewIndexMapper, NSIndexPath;

@interface NSCollectionViewUpdate : NSObject <_NSCollectionViewUpdateTranslating> {
    _NSCollectionViewCore *_collectionView;
    NSArray *_updateItems;
    NSCollectionViewData *_oldModel;
    NSCollectionViewData *_newModel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _newVisibleBounds;
    NSCollectionViewIndexMapper *_globalIndexMap;
    NSCollectionViewIndexMapper *_sectionMap;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    id *_animatedItems;
    id *_animatedHeaders;
    id *_animatedFooters;
    NSMutableArray *_viewAnimations;
    NSIndexPath *_oldFocusedIndexPath;
    NSIndexPath *_newFocusedIndexPath;
    long long _oldFocusedViewType;
    long long _newFocusedViewType;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_computeItemUpdates;
- (void)_computeSectionUpdates;
- (void)_computeSupplementaryUpdates;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;
- (long long)finalSectionCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (void)getNewSectionCount:(long long *)a0 newSectionSourceIndexes:(long long **)a1 newSectionItemCounts:(long long **)a2 newGlobalItemCount:(long long *)a3 newGlobalItemSourceIndexes:(long long **)a4;
- (id)initWithCollectionView:(id)a0 updateItems:(id)a1 oldModel:(id)a2 newModel:(id)a3 oldVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 newVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (long long)initialSectionCount;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (id)newIndexPathForSupplementaryElementOfKind:(id)a0 oldIndexPath:(id)a1;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)a0 newIndexPath:(id)a1;

@end
