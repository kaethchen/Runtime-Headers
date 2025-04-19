@interface NSScrubberProportionalLayout : NSScrubberLayout {
    long long _numberOfVisibleItems;
}

@property long long numberOfVisibleItems;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndex:(long long)a0;
- (id)initWithNumberOfVisibleItems:(long long)a0;
- (double)itemWidth;
- (struct CGSize { double x0; double x1; })scrubberContentSize;
- (BOOL)shouldInvalidateLayoutForChangeFromVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
