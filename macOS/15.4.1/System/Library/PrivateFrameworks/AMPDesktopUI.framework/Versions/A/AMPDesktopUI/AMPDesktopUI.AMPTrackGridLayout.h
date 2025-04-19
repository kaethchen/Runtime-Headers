@interface AMPDesktopUI.AMPTrackGridLayout : NSCollectionViewLayout {
    void /* unknown type, empty encoding */ kGutterWidth;
    void /* unknown type, empty encoding */ kNumVisibleColumns;
    void /* unknown type, empty encoding */ kNumRows;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cachedCellHeight;
}

@property (nonatomic, readonly) long long scrollDirection;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
