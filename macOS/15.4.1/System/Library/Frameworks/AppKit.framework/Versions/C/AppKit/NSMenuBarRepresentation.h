@class NSString, NSView, NSMutableSet, NSMenuFixedVisibleIndexDictionary, NSObject, NSMutableArray;
@protocol NSMenuVisibleIndexDictionary, NSMenuRepresentationDelegate;

@interface NSMenuBarRepresentation : NSResponder <NSMenuRepresentable> {
    NSMutableArray *_backingViews;
    NSObject<NSMenuRepresentationDelegate> *_delegate;
    NSMutableArray *_itemWidthsExcludingExtras;
    NSMutableArray *_itemOffsets;
    NSMutableSet *_truncatedViewIndices;
    NSMutableArray *_scheduledOperations;
    NSMenuFixedVisibleIndexDictionary *_indexes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _apertureFrame;
    long long _numberOfArrangedViews;
    long long _numberOfBackingViews;
    long long _numberOfPendingEndUpdatesCalls;
    long long _lastViewIndexBeforeNotch;
    long long _lastVisibleViewIndex;
    long long _firstTruncatedView;
    double _occupiedWidth;
    double _maxUsableWidth;
    BOOL _isMagicAppleMenuPositionedFirst;
    BOOL _hasPendingLayoutChanges;
    BOOL _hasMenusAfterNotch;
    BOOL _prefersMinJustification;
    BOOL _prefersCondensedFont;
    BOOL _prefersReducedFontSize;
}

@property (readonly) double availableStatusBarWidth;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly) long long numberOfVisibleItems;
@property (readonly) NSView *backingView;
@property (readonly) NSObject<NSMenuVisibleIndexDictionary> *indexes;
@property (weak, nonatomic) NSObject<NSMenuRepresentationDelegate> *representationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateLayoutPreferences;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_forEachBackingViewDo:(id /* block */)a0;
- (id)_rootBackingView;
- (id)_subviewAtMenuIndex:(long long)a0 inBackingView:(id)a1;
- (void)addControlledBackingView:(id)a0 followingSystemAppearance:(BOOL)a1;
- (id)backingViews;
- (void)beginUpdates;
- (void)endSearchQuery;
- (void)endUpdates;
- (void)forEachMenuItemViewAtIndex:(long long)a0 performBlock:(id /* block */)a1;
- (void)forEachVisibleSubview:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtMenuIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtVisibleIndex:(long long)a0;
- (id)initWithBackingView:(id)a0;
- (void)insertArrangedSubviewAtMenuIndex:(long long)a0 forItem:(id)a1;
- (void)layoutMenuBar;
- (void)layoutMenuBarIfNeeded;
- (void)layoutMenuBarImmediately;
- (long long)menuIndexForView:(id)a0;
- (void)reloadData;
- (void)removeArrangedSubviewAtMenuIndex:(long long)a0;
- (void)removeControlledBackingView:(id)a0;
- (void)setApertureFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0 forMenuItemAtIndex:(long long)a1;
- (void)startSearchQueryWithString:(id)a0 behavior:(long long)a1;
- (id)subviewAtMenuIndex:(long long)a0;
- (id)subviewAtMenuIndex:(long long)a0 creatingIfNeeded:(BOOL)a1;
- (void)updateFont;
- (void)updateSizeForItemAtVisibleIndex:(long long)a0;
- (id)viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)visibleIndexForMenuIndex:(long long)a0;

@end
