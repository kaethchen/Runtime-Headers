@class NSDictionary;

@interface NSTouchBarCustomizationPaletteLayout : NSCollectionViewLayout {
    NSDictionary *_cachedAttributes;
    NSDictionary *_cachedDecorationAttributes;
    double _cachedHeight;
}

@property double scaleFactor;
@property long long numberOfColumns;
@property double columnWidth;
@property double columnSpacing;
@property double rowSpacing;
@property double rowHeight;
@property double minItemSpacing;
@property long long flexibleColumnSpan;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

+ (Class)layoutAttributesClass;

- (id)init;
- (id)delegate;
- (double)rowHeightScaled;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; long long x2; double x3; double x4; })calculateStatsForItemAtPath:(id)a0 remainingColumns:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (double)columnSpacingScaled;
- (double)columnWidthScaled;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (double)minItemSpacingScaled;
- (long long)numberOfColumnsPerRow;
- (long long)numberOfSpannedColumns:(double)a0 maxItemWidth:(double)a1 columnWidth:(double)a2 columnSpacing:(double)a3 numRemainingColumns:(long long)a4 numberOfColumnsPerRow:(long long)a5;
- (void)prepareLayout;
- (double)rowSpacingScaled;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
