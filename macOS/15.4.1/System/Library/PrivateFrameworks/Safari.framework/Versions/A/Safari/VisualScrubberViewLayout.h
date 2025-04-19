@interface VisualScrubberViewLayout : NSScrubberLayout {
    long long _numberOfItems;
    long long _selectedIndex;
    struct _NSRange { unsigned long long location; unsigned long long length; } _uncollapsedIndexRange;
    struct CGSize { double width; double height; } _contentSize;
    double _itemWidth;
    double _selectedItemWidth;
    long long _numberOfLeadingItemsWithExtraPixel;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndex:(long long)a0;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })scrubberContentSize;
- (BOOL)shouldInvalidateLayoutForChangeFromVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldInvalidateLayoutForSelectionChange;

@end
