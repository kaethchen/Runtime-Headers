@class NSView, NSString, VisualTabPickerSearchField, NSScrollView, VisualTabPickerRootViewTransitionCoordinator, VisualTabPickerGridView, BackgroundColorView, VisualTabPickerViewController, NSLayoutConstraint;
@protocol VisualTabPickerTransitioning;

@interface VisualTabPickerRootView : MouseEventBlockingView <VisualTabPickerRootViewTransitionCoordinatorDataSource> {
    NSScrollView *_scrollView;
    NSView *_topBarView;
    BackgroundColorView *_topBarViewSeparator;
    VisualTabPickerRootViewTransitionCoordinator *_transitionCoordinator;
    NSLayoutConstraint *_topEdgeConstraint;
}

@property (readonly, nonatomic) VisualTabPickerGridView *gridView;
@property (readonly, nonatomic) VisualTabPickerSearchField *searchField;
@property (weak, nonatomic) VisualTabPickerViewController *visualTabPickerViewController;
@property (readonly, nonatomic) id<VisualTabPickerTransitioning> transitionCoordinator;
@property (readonly, nonatomic) BOOL isShowingTopBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)showSearchField;
- (void)_getTopBarAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (BOOL)acceptsFirstResponder;
- (void)cancelOperation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualTabPickerViewController:(id)a1;
- (BOOL)makeSearchFieldFirstResponder;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)startGridAnimation:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)wantsUpdateLayer;
- (void)_didScroll:(id)a0;
- (BOOL)_isShowingSearchField;
- (void)_showOrHideTopBarSeparator:(BOOL)a0;
- (void)_startTopBarAnimation:(long long)a0;
- (double)_topInset;
- (void)_updateSeparatorVisibility;
- (void)hideTopBar;
- (void)prepareForEntryAnimation;
- (void)setUpSubviews;
- (void)showTopBar;
- (id)tileContainerLayerForRootViewTransitionCoordinator:(id)a0;
- (id)topBarViewForRootViewTransitionCoordinator:(id)a0;

@end
