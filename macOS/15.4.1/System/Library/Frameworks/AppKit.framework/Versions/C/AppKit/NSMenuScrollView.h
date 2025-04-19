@class NSCocoaMenuImpl;
@protocol _NSPopupMenuScrollViewDelegate;

@interface NSMenuScrollView : NSScrollView {
    id _consumptionEventMonitor;
    struct __CFRunLoopTimer { } *_autoScrollTimer;
    double _coalescedDeltaY;
    double _accelerationMultiplier;
    double _lineHeight;
    double _accelerationStartTime;
    BOOL _isScrollingBehaviorEnabled;
    BOOL _shouldContinueAutoScrolling;
    BOOL _isAutoScrollInProgress;
    BOOL _isScrollingUsingScrollWheel;
    BOOL _isTopScrollIndicatorVisible;
    BOOL _isEligibleForScrollAcceleration;
    BOOL _preventMouseEventReentry;
    BOOL _hasPendingScrollIndicatorUpdates;
    BOOL _hasPendingSizeUpdates;
}

@property (weak, nonatomic) NSCocoaMenuImpl<_NSPopupMenuScrollViewDelegate> *contextMenuDelegate;
@property (nonatomic) long long scrollingBehavior;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_autoScrollWithDirection:(long long)a0 forEvent:(id)a1;
- (void)_handleScrollEvent:(id)a0;
- (void)_lineScroll:(long long)a0 numberOfLines:(long long)a1;
- (void)_sendDelegateHighlightItemUnderMouse;
- (void)_updateElasticity;
- (void)_updateIndicatorsForScrollOrigin:(struct CGPoint { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1 afterScrolling:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)accessibilityIsIgnored;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAutoScrollCurrentlyActive;
- (BOOL)isScrollWheelCurrentlyActive;
- (void)performSetup;
- (void)removeFromSuperview;
- (void)scrollToVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (BOOL)scrollsDynamically;
- (BOOL)shouldCancelEvent:(id)a0;
- (void)updateScrollIndicatorsForTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateScrollIndicatorsForTargetSize:(struct CGSize { double x0; double x1; })a0 afterScrolling:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)wantsMouseMovedEvent:(id)a0;

@end
