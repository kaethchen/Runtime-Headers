@class NSMutableArray;

@interface MOMediaViewCondensedLayout : MOMediaViewLayout {
    double _spacing;
    NSMutableArray *_attributes;
    NSMutableArray *_attributesBySections;
    NSMutableArray *_sectionAttributes;
    double _largestWidth;
    struct CGSize { double width; double height; } _contentSize;
}

@property double spacingRatio;
@property unsigned long long numberOfRows;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (unsigned long long)orientation;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)debuggingLayoutOptionsDescriptions;
- (id)indexPathsForSupplementaryViewsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportHeaders;
- (BOOL)supportStickiness;

@end
