@class NSView;

@interface AMPCollectionGridLayout : NSCollectionViewLayout {
    unsigned long long columnCounts[4];
}

@property (nonatomic) double mLastCalculatedViewWidth;
@property (nonatomic) double currentMargins;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double gutterSize;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double sectionSpacing;
@property (nonatomic) unsigned long long currentColumnCount;
@property (nonatomic) double cachedSectionHeaderHeight;
@property (retain, nonatomic) NSView *sizeTemplate;
@property (retain, nonatomic) NSView *sectionHeaderSizeTemplate;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enclosingBounds;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (unsigned long long)sectionCount;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isRTL;
- (BOOL)showSectionHeaders;
- (long long)columnAtXCoord:(double)a0;
- (double)headerTopForSection:(long long)a0;
- (id)initWithXSColumnCount:(unsigned long long)a0 small:(unsigned long long)a1 medium:(unsigned long long)a2 large:(unsigned long long)a3;
- (long long)itemCountForSection:(long long)a0;
- (double)itemTopForSection:(long long)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)layoutAttributesForSection:(long long)a0 topRow:(long long)a1 bottomRow:(long long)a2 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 includeHeader:(BOOL)a4;
- (double)leadingForColumn:(long long)a0 enclosingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)leadingForColumnUnflipped:(long long)a0;
- (long long)rowCountForSection:(long long)a0;
- (long long)rowInSection:(long long)a0 atYCoord:(double)a1 pinned:(BOOL)a2;
- (long long)sectionAtYCoord:(double)a0;
- (double)totalHeightForSection:(long long)a0;
- (double)totalRowHeightForSection:(long long)a0;

@end
