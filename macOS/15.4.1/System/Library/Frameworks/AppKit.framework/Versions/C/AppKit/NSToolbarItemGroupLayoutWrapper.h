@class NSString, NSToolbarItem;

@interface NSToolbarItemGroupLayoutWrapper : NSView <NSBarLayoutWrapper> {
    NSToolbarItem *_item;
    struct CGSize { double width; double height; } _minSize;
    struct CGSize { double width; double height; } _maxSize;
    struct CGSize { double width; double height; } _minViewSize;
    struct CGSize { double width; double height; } _maxViewSize;
    BOOL _requiresLeadingPadding;
    BOOL _requiresTrailingPadding;
}

@property (readonly) NSToolbarItem *item;
@property BOOL requiresLeadingPadding;
@property BOOL requiresTrailingPadding;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) BOOL isSpace;
@property (readonly) long long priorityIndex;
@property (readonly) BOOL wantsToBeCentered;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) unsigned long long itemPosition;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) BOOL participatesInOverflow;
@property (readonly) BOOL isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidateSizes;
- (struct CGSize { double x0; double x1; })_alignmentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_maxViewSize;
- (const struct __NSToolbarMetrics { struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; } x0; struct __NSToolbarItemLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; } x1; } *)_metrics;
- (struct CGSize { double x0; double x1; })_minViewSize;
- (BOOL)_shouldReserveSpaceForLabel;
- (void)_updateItemSizes;
- (void)_updateItemViewSizes;
- (void)_updateMeasuredSizes;
- (id)declaredLayoutConstraints;
- (id)initWithItem:(id)a0;
- (void)viewDidChangeBackingProperties;

@end
