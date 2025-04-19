@class NSView, NSMutableArray, NSBox;

@interface NSVisualTabPickerShadowTileView : NSView {
    NSView *_sidebarView;
    NSView *_toolbarView;
    NSView *_borderView;
    NSMutableArray *_sidebarAndToolbarAnimations;
    NSBox *_headerBackgroundView;
}

@property (class, readonly) double headerHeight;

@property (readonly) NSView *containerView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_getTopBarAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (void)_setUpBorderView;
- (void)_setUpContentViews;
- (id)_sidebarAnimationWithKeyPath:(id)a0 windowValue:(id)a1 thumbnailValue:(id)a2 forGridAnimation:(long long)a3;
- (BOOL)accessibilityIsIgnored;
- (void)animateSidebarImage:(id)a0 width:(double)a1 gridAnimation:(long long)a2;
- (void)animateToolbarImage:(id)a0 height:(double)a1 gridAnimation:(long long)a2;
- (void)cleanupAnimations;
- (void)enableEdgeAntialiasingMask:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)selectedTabDidChange;
- (void)setCloseButtonVisible:(BOOL)a0;
- (void)setExposeBorderVisible:(BOOL)a0;
- (void)startTitleOpacityAnimation:(long long)a0;
- (void)updateLayer;
- (void)willStartExitAnimation;

@end
