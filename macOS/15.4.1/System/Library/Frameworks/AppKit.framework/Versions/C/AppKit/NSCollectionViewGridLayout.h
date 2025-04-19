@class NSArray;

@interface NSCollectionViewGridLayout : NSCollectionViewLayout {
    unsigned long long _maxGridRows;
    unsigned long long _maxGridColumns;
    struct CGSize { double width; double height; } _minItemSize;
    struct CGSize { double width; double height; } _maxItemSize;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _margins;
    double _minimumInteritemSpacing;
    double _minimumLineSpacing;
    NSArray *_backgroundColors;
    id _glReserved[22];
}

@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } margins;
@property double minimumInteritemSpacing;
@property double minimumLineSpacing;
@property unsigned long long maximumNumberOfRows;
@property unsigned long long maximumNumberOfColumns;
@property struct CGSize { double x0; double x1; } minimumItemSize;
@property struct CGSize { double x0; double x1; } maximumItemSize;
@property (copy) NSArray *backgroundColors;

+ (BOOL)itemLayoutIsSequential;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)scrollDirection;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; unsigned long long x4; })_computeGridConfiguration;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; unsigned long long x4; })_computeGridConfigurationWithCount:(unsigned long long)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; unsigned long long x4; })_computeGridConfigurationWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; unsigned long long x4; })_computeGridConfigurationWithSize:(struct CGSize { double x0; double x1; })a0 count:(unsigned long long)a1;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; unsigned long long x4; })_currentGridConfiguration;
- (BOOL)_filledViewShouldExtendVertically;
- (void)_hitTestPoint:(struct CGPoint { double x0; double x1; })a0 usingBlock:(id /* block */)a1;
- (BOOL)_shouldRelayoutImmediatelyForNewCollectionViewSize;
- (void)_updateGridSettingsWithPrototype;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
