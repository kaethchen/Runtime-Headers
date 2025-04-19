@class NSMutableArray, NSMutableIndexSet;

@interface MOPhotosLayout : MOMediaViewLayout {
    NSMutableArray *_supplementaryAttributesBeforeStickiness;
    NSMutableIndexSet *_floatingHeaderIndexSet;
    BOOL _delegateSupplementaryViewDidBeginFloating;
    BOOL _delegateSupplementaryViewDidBeginPushing;
    BOOL _delegateSupplementaryViewDidEndFloating;
}

@property struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } sectionHeaderInsets;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } sectionInsets;
@property unsigned long long headerHeight;
@property (readonly, nonatomic) NSMutableArray *attributes;
@property (readonly, nonatomic) NSMutableArray *attributesBySections;
@property (readonly, nonatomic) NSMutableArray *supplementaryAttributes;
@property (readonly, nonatomic) NSMutableArray *supplementaryGlobalAttributes;
@property (nonatomic) double largestHeight;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (unsigned long long)orientation;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)sectionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForScrollingItemAtIndexPath:(id)a0 toScrollPosition:(unsigned long long)a1;
- (id)_indexPathsForContentSupplementaryViewsOfKind:(id)a0;
- (id)indexPathsForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1;
- (id)indexPathsForSupplementaryElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutForSettingsChange;
- (BOOL)invalidationContextHasSettingsChanged:(id)a0;
- (BOOL)supportHeaders;
- (BOOL)supportStickiness;

@end
