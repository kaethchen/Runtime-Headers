@class NSArray, _UXNavigationItemContainerView, NSView, UXNavigationItem, NSMutableArray, NSImage;
@protocol UXNavigationBarDelegate;

@interface UXNavigationBar : UXBar {
    BOOL _needsRecalculateWindowKeyViewLoop;
    BOOL _recalculatingKeyViewLoop;
}

@property (retain, nonatomic) NSMutableArray *internalItems;
@property (retain, nonatomic) _UXNavigationItemContainerView *topItemContainer;
@property (nonatomic) long long currentOperation;
@property (retain, nonatomic) UXNavigationItem *transitioningItem;
@property (nonatomic) BOOL recalculatingWindowKeyViewLoop;
@property (retain, nonatomic) NSView *alternateTitleView;
@property (retain, nonatomic) NSView *alternateCondensedTitleView;
@property (nonatomic) BOOL alternateTitleEnabled;
@property (nonatomic, getter=isDetached) BOOL detached;
@property (nonatomic) double leftInteritemSpacing;
@property (nonatomic) double rightInteritemSpacing;
@property (nonatomic) double centerYOffset;
@property (weak, nonatomic) id<UXNavigationBarDelegate> delegate;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (weak, nonatomic) NSView *titleCenteringTrackedView;
@property (readonly, nonatomic) UXNavigationItem *topItem;
@property (readonly, nonatomic) UXNavigationItem *backItem;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSImage *backIndicatorImage;
@property (retain, nonatomic) NSView *globalTrailingView;
@property (nonatomic) double globalTrailingViewWidthMultiplier;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)recalculateKeyViewLoop;
- (void)updateConstraints;
- (void)_removeItem:(id)a0;
- (void)_snapshot;
- (void)_updateTitleView;
- (long long)barPosition;
- (id)popNavigationItemAnimated:(BOOL)a0;
- (void)pushNavigationItem:(id)a0 animated:(BOOL)a1;
- (void)setInteritemSpacing:(double)a0;
- (void)_addObserversForItem:(id)a0;
- (void)_completeInteractiveTransition:(BOOL)a0 duration:(double)a1;
- (id)_popNavigationItem;
- (id)_popNavigationItemAnimated:(BOOL)a0 duration:(double)a1;
- (void)_prepareForNavigationItemTransition;
- (void)_pushItem:(id)a0;
- (void)_pushNavigationItem:(id)a0 animated:(BOOL)a1 duration:(double)a2;
- (void)_removeObserversForItem:(id)a0;
- (void)_updateItemContainer;
- (void)beginInteractivePop;
- (void)beginInteractivePushToItem:(id)a0;
- (void)setNeedsRecalcuateWindowKeyViewLoop;

@end
