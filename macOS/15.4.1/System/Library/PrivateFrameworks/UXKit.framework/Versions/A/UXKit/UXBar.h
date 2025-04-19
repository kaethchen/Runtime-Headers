@class UXView, NSView, NSString, _UXSinglePixelLine, NSMutableSet, NSColor;
@protocol _UXBarItemsContainer;

@interface UXBar : UXView <NSAccessibilityGroup, UXBarPositioning> {
    _UXSinglePixelLine *_decorationLine;
    NSMutableSet *_previousBarItemContainers;
    long long _containerTransitionAnimationCount;
    NSView *_placeholderTrailingView;
}

@property (nonatomic) BOOL isInteractiveTransitioning;
@property (nonatomic) BOOL trailingViewNeedsRemoval;
@property (nonatomic) double percent;
@property (retain, nonatomic) UXView<_UXBarItemsContainer> *nextItemContainer;
@property (retain, nonatomic) NSView *globalTrailingView;
@property (nonatomic) double globalTrailingViewWidthMultiplier;
@property (retain, nonatomic) UXView<_UXBarItemsContainer> *barItemsContainer;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } decorationInsets;
@property (nonatomic) BOOL bordered;
@property (retain, nonatomic) NSColor *barTintColor;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double height;
@property (nonatomic) double baselineOffsetFromBottom;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long barPosition;

- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)_updateInteractiveTransition:(double)a0;
- (void)_animateTransitionFromContainer:(id)a0 toContainer:(id)a1 transition:(unsigned long long)a2 duration:(double)a3 fromValue:(double)a4 toValue:(double)a5 completion:(id /* block */)a6;
- (void)_beginInteractiveTransitionToItemContainer:(id)a0;
- (void)_completeInteractiveTransition:(BOOL)a0 duration:(double)a1;
- (void)_didCompleteContainerTransitionAnimation;
- (void)_finishInteractiveTransition:(BOOL)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)_transitionToContainer:(id)a0 transition:(unsigned long long)a1 duration:(double)a2;
- (void)_updateDecorationLine;
- (void)_updateTrailingViewWithItemContainer:(id)a0;

@end
