@class NSDictionary, NSMutableDictionary, _UXFlowLayoutInfo;

@interface UXCollectionViewFlowLayout : UXCollectionViewLayout {
    struct { unsigned char delegateSizeForItem : 1; unsigned char delegateReferenceSizeForHeader : 1; unsigned char delegateReferenceSizeForFooter : 1; unsigned char delegateInsetForSection : 1; unsigned char delegateInteritemSpacingForSection : 1; unsigned char delegateLineSpacingForSection : 1; unsigned char delegateAlignmentOptions : 1; unsigned char layoutDataIsValid : 1; unsigned char delegateInfoIsValid : 1; } _gridLayoutFlags;
    _UXFlowLayoutInfo *_data;
    struct CGSize { double width; double height; } _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    long long _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
}

@property (retain, nonatomic, setter=_setRowAlignmentsOptions:) NSDictionary *_rowAlignmentOptions;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) struct CGSize { double width; double height; } headerReferenceSize;
@property (nonatomic) struct CGSize { double width; double height; } footerReferenceSize;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } sectionInset;

+ (Class)invalidationContextClass;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForFooterInSection:(long long)a0 usingData:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForHeaderInSection:(long long)a0 usingData:(id)a1;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (id)_layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateDelegateFlags;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)a0;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)a0;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingData:(id)a1;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingData:(id)a1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)a0;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)a0;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForFooterInSection:(long long)a0;
- (id)layoutAttributesForFooterInSection:(long long)a0 usingData:(id)a1;
- (id)layoutAttributesForHeaderInSection:(long long)a0;
- (id)layoutAttributesForHeaderInSection:(long long)a0 usingData:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0 usingData:(id)a1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })synchronizeLayout;
- (void)_fetchItemsInfo;
- (void)_getSizingInfos;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItemAtSection:(long long)a0 andRow:(long long)a1 usingData:(id)a2;
- (void)_updateItemsLayout;
- (id)indexPathOfItemAbove:(id)a0;
- (id)indexPathOfItemAfter:(id)a0;
- (id)indexPathOfItemBefore:(id)a0;
- (id)indexPathOfItemBelow:(id)a0;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingData:(id)a1;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;

@end
