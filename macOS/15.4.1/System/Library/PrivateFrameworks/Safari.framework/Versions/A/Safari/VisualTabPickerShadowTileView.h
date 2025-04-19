@class NSView, NSImage, BackgroundColorView, NSMutableArray;

@interface VisualTabPickerShadowTileView : NSView {
    BackgroundColorView *_headerBackgroundView;
    NSView *_sidebarView;
    NSView *_toolbarView;
    NSView *_borderView;
    NSMutableArray *_sidebarAndToolbarAnimations;
    BackgroundColorView *_headerOverlayView;
}

@property (readonly) NSView *containerView;
@property (retain, nonatomic) NSImage *toolbarSnapshot;
@property (readonly, nonatomic) NSView *toolbarSnapshotBackgroundView;
@property (readonly, nonatomic) NSView *headerView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_getTopBarAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (void)_setUpBorderView;
- (void)_setUpContentViews;
- (id)_sidebarAnimationWithKeyPath:(id)a0 windowValue:(id)a1 thumbnailValue:(id)a2 forGridAnimation:(long long)a3;
- (void)animateSidebarImage:(id)a0 width:(double)a1 gridAnimation:(long long)a2;
- (void)animateToolbarImage:(id)a0 height:(double)a1 gridAnimation:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)setCloseButtonVisible:(BOOL)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)setHeaderViewOverlayAlphaValue:(double)a0;
- (void)cleanUpAnimations;
- (void)setToolbarSnapshotBackgroundViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
