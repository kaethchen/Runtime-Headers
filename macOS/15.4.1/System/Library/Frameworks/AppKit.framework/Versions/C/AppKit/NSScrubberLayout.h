@class NSScrubber;

@interface NSScrubberLayout : NSObject <NSCoding> {
    id _private;
    unsigned char _dirty : 1;
    unsigned int _reservedFlags : 31;
}

@property (class, readonly) Class layoutAttributesClass;

@property (readonly, weak) NSScrubber *scrubber;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly) struct CGSize { double x0; double x1; } scrubberContentSize;
@property (readonly) BOOL shouldInvalidateLayoutForSelectionChange;
@property (readonly) BOOL shouldInvalidateLayoutForHighlightChange;
@property (readonly) BOOL automaticallyMirrorsInRightToLeftLayout;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)numberOfItems;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndex:(long long)a0;
- (id)_layoutAttributesForItemAtIndex:(long long)a0 withState:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; long long x1; long long x2; double x3; long long x4; long long x5; struct CGPoint { double x0; double x1; } x6; BOOL x7; })a1;
- (id)_layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withState:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; long long x1; long long x2; double x3; long long x4; long long x5; struct CGPoint { double x0; double x1; } x6; BOOL x7; })a1;
- (void)_prepareLayoutIfNeeded;
- (void)_setScrubber:(id)a0;
- (BOOL)_shouldMirrorForRTL;
- (void)invalidateLayout;
- (void)prepareLayout;
- (long long)selectedItem;
- (BOOL)shouldInvalidateLayoutForChangeFromVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })visibleContentSize;

@end
