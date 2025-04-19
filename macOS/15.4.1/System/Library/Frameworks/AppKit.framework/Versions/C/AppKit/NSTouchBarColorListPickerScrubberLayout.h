@interface NSTouchBarColorListPickerScrubberLayout : NSScrubberLayout

@property double itemHeight;
@property double selectedItemHeight;
@property double highlightedItemHeight;

+ (Class)layoutAttributesClass;

- (id)init;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })scrubberContentSize;
- (BOOL)shouldInvalidateLayoutForHighlightChange;
- (BOOL)shouldInvalidateLayoutForSelectionChange;

@end
