@class NSSplitView, NSSeparatorToolbarItemView;

@interface NSTrackingSeparatorToolbarItem : NSToolbarItem {
    NSSeparatorToolbarItemView *_view;
    struct { unsigned char isAlignmentSatisfied : 1; unsigned char alignmentIsAlwaysSatisfied : 1; unsigned char fullHeightDividersDisabled : 1; unsigned char alignmentNeedsUpdate : 1; unsigned char alignmentRequired : 1; unsigned char inPalette : 1; } _flags;
}

@property (readonly, getter=isAlignmentSatisfied) BOOL alignmentSatisfied;
@property BOOL alignmentIsAlwaysSatisfied;
@property BOOL fullHeightDividersDisabled;
@property (readonly) double dividerWidth;
@property BOOL representsSidebar;
@property BOOL representsTrailingSidebar;
@property (retain) NSSplitView *splitView;
@property long long dividerIndex;

+ (BOOL)automaticallyNotifiesObserversOfAlignmentSatisfied;
+ (id)trackingSeparatorToolbarItemWithIdentifier:(id)a0 splitView:(id)a1 dividerIndex:(long long)a2;

- (void)dealloc;
- (id)debugDescription;
- (id)view;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (BOOL)_allowToolbarToStealEvent:(id)a0;
- (BOOL)_isPartitionItem;
- (double)_logicalPartitionPosition;
- (id)_menuFormRepresentationForOverflowMenu;
- (void)_noteAlignmentValueNeedsUpdate;
- (double)_preferredTrailingPosition;
- (void)_setPartitionAdapter:(id)a0;
- (void)_updateAlignmentValue;
- (double)_visualPartitionPosition;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (BOOL)isAlignmentRequired;
- (BOOL)isCollapsed;
- (BOOL)isNavigational;
- (BOOL)isTrackingSeparator;
- (BOOL)participatesInOverflow;
- (void)setAlignmentRequired:(BOOL)a0;
- (void)setAlignmentSatisfied:(BOOL)a0;
- (void)setNavigational:(BOOL)a0;
- (void)viewDidLayout;
- (long long)visibilityPriority;
- (BOOL)wantsHiddenLabelInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)a0;

@end
