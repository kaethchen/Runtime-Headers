@class NSArray, NSMapTable, NSMutableArray, NSObject;
@protocol NSBarLayoutWrapper, NSBarLayoutDelegate;

@interface NSBarLayout : NSObject {
    NSArray *_items;
    NSMutableArray *_contentItems;
    NSMutableArray *_accessoryItems;
    NSObject<NSBarLayoutWrapper> *_collapsedItem;
    NSObject<NSBarLayoutWrapper> *_overlayItem;
    NSObject<NSBarLayoutWrapper> *_clipIndicator;
    NSObject<NSBarLayoutWrapper> *_searchItem;
    NSMapTable *_itemsToAttributes;
    BOOL _layoutItemsNeedsUpdate;
}

@property (weak) NSObject<NSBarLayoutDelegate> *delegate;
@property (copy) NSArray *items;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutRect;
@property double defaultItemPadding;
@property BOOL enforcesUniformHeight;
@property (getter=isCenterPrincipal) BOOL centerIsPrincipal;
@property long long accessoryUserInterfaceLayoutDirection;
@property long long itemUserInterfaceLayoutDirection;
@property double standardCenterWidth;
@property BOOL allowsSingleItemClipping;
@property BOOL centerRequiresTrueCenterLayout;
@property BOOL overlayRequiresTrueCenterLayout;
@property BOOL overflowPreventsReflow;
@property BOOL overflowRequired;
@property (readonly) struct CGSize { double x0; double x1; } minimumContentSize;
@property (readonly) struct CGSize { double x0; double x1; } maximumContentSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (double)_adjustedHeightForItem:(id)a0 availableHeight:(double)a1;
- (double)_aggregateWidthOfItems:(id)a0 sharesLeadingEdge:(BOOL)a1 sharesTrailingEdge:(BOOL)a2 widthMeasurement:(id /* block */)a3;
- (void)_assembleAccessoryItems;
- (void)_assembleContentItems;
- (void)_calculateLayoutOfItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sharesLeadingEdge:(BOOL)a2 sharesTrailingEdge:(BOOL)a3;
- (void)_calculateMinimumLayoutOfItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerRectGivenItems:(id)a0 leadingItems:(id)a1 trailingItems:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (double)_compressedMinWidthOfItems:(id)a0 sharesLeadingEdge:(BOOL)a1 sharesTrailingEdge:(BOOL)a2;
- (double)_contentClippingWidthOfItems:(id)a0 sharesLeadingEdge:(BOOL)a1 sharesTrailingEdge:(BOOL)a2;
- (void)_enumerateSectionsOfItems:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_isOverflowRequiredForItems:(id)a0 availableWidth:(double)a1 sharesLeadingEdge:(BOOL)a2 sharesTrailingEdge:(BOOL)a3;
- (void)_layoutSectionOfItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 requiresTrueCenterLayout:(BOOL)a2;
- (double)_leadingInsetOfItems:(id)a0 sharesLeadingEdge:(BOOL)a1;
- (double)_maxWidthOfItems:(id)a0 sharesLeadingEdge:(BOOL)a1 sharesTrailingEdge:(BOOL)a2 containsFlexibleSpaceItems:(BOOL *)a3;
- (double)_maxWidthOfItems:(id)a0 sharesLeadingEdge:(BOOL)a1 sharesTrailingEdge:(BOOL)a2 containsFlexibleSpaceItems:(BOOL *)a3 constrainsSearchItems:(BOOL)a4;
- (double)_minWidthOfItems:(id)a0 sharesLeadingEdge:(BOOL)a1 sharesTrailingEdge:(BOOL)a2;
- (id)_orderedItemsGivenUnorderedArray:(id)a0 usingOrderedArray:(id)a1;
- (id)_overflowMenuParticipatingItems:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_principleRectGivenItems:(id)a0 remainingLeadingWidth:(double)a1 remainingTrailingWidth:(double)a2 totalWidth:(double)a3 sharesLeadingEdge:(BOOL)a4 sharesTrailingEdge:(BOOL)a5 requiresTrueCenterLayout:(BOOL)a6;
- (id)_prioritizedAndGroupedItems:(id)a0;
- (id)_prioritizedItems:(id)a0;
- (void)_touchUpSpacesInItems:(id)a0;
- (double)_trailingInsetOfItems:(id)a0 sharesTrailingEdge:(BOOL)a1;
- (void)_updateAttributesOfItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_visibleCenterItemsInVisibleItems:(id)a0 centerItems:(id)a1;
- (id)_visibleItems:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_visualCenterForItems:(id)a0;
- (void)invalidateItemPositions;
- (id)layoutAttributesOfVisibleItems;
- (id)visibleItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
