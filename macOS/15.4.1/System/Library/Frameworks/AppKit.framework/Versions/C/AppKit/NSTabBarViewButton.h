@class NSString, NSView, _NSViewActionForwardingLayerDelegate, CABackdropLayer, NSColor;

@interface NSTabBarViewButton : _NSKeyLoopSplicingContainerView {
    _NSViewActionForwardingLayerDelegate *_layerDelegate;
    NSColor *_backgroundColor;
    NSView *_backgroundView;
    NSView *_topBorderView;
    NSView *_leadingTopBorderView;
    NSView *_trailingTopBorderView;
    NSView *_leftBorderView;
    NSView *_rightBorderView;
    CABackdropLayer *_backdropLayer;
    BOOL _forcesActiveWindowState;
    BOOL _active;
    BOOL _hasMouseOverHighlight;
    BOOL _useModalCollapsedLayout;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL hasMouseOverHighlight;
@property (nonatomic) BOOL forcesActiveWindowState;
@property (nonatomic) BOOL useModalCollapsedLayout;
@property (copy, nonatomic) NSString *backdropGroupName;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)_isAnimatingBackgroundColor;
- (id)_makeBackgroundView;
- (id)_makeSideBorderView;
- (id)_makeTopBorderView;
- (void)_setBackgroundColor:(id)a0 withAnimation:(id)a1;
- (void)_setUpBackgroundViews;
- (void)_updateViewColorsForActiveTab:(BOOL)a0 inActiveWindow:(BOOL)a1;
- (void)_windowChangedKeyState;
- (BOOL)forcesActiveWindowState;
- (BOOL)hasMouseOverHighlight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setActive:(BOOL)a0;
- (void)setForcesActiveWindowState:(BOOL)a0;
- (void)setHasMouseOverHighlight:(BOOL)a0;
- (void)setHasMouseOverHighlight:(BOOL)a0 animated:(BOOL)a1;
- (void)setUseModalCollapsedLayout:(BOOL)a0;
- (void)updateLayer;
- (BOOL)useModalCollapsedLayout;
- (BOOL)wantsUpdateLayer;

@end
