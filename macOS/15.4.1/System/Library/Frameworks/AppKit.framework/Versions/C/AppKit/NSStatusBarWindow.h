@class NSView, NSStatusItem, NSStatusBarContentView, NSLayoutConstraint;

@interface NSStatusBarWindow : NSWindow {
    NSStatusItem *_statusItem;
    NSStatusBarContentView *_windowContentView;
    NSView *_itemContentView;
    NSView *_statusView;
    NSLayoutConstraint *_windowContentViewWidthConstraint;
    NSLayoutConstraint *_windowContentViewHeightConstraint;
    double _internalItemContentPadding;
    NSLayoutConstraint *_itemContentViewDefaultWidthConstraint;
    NSLayoutConstraint *_itemContentViewDefaultHeightConstraint;
    BOOL _variableLength;
    BOOL _selected;
    id _retargetingEventMonitor;
}

@property (readonly, weak) NSStatusItem *statusItem;
@property (readonly) NSView *itemContentView;
@property double externalItemContentPadding;
@property double internalItemContentPadding;
@property double defaultItemLength;
@property BOOL variableLength;
@property double menuBarHeight;
@property BOOL hasCAShadow;

+ (id)keyPathsForValuesAffecting_appearanceForAttachedPopovers;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_canMiniaturize;
- (void)_viewAttaching:(id)a0;
- (BOOL)canHide;
- (id)_appearanceForAttachedPopovers;
- (void)_automateLiveResize;
- (id)_bestScreenByGeometryOfFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 respectingSpaceAssignment:(BOOL)a1;
- (BOOL)_cgsPositionManagedByExternalAgent;
- (BOOL)_hasActiveControls;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_ignoredForScripting;
- (BOOL)_isNonactivatingPanel;
- (void)_lighterViewDetaching:(id)a0;
- (void)_noticeStatusBarVisibilityChangeIfNecessary;
- (void)_orderForwardWithEvent:(id)a0;
- (id)_popoverAppearanceProxy;
- (id)_retargetEventIfNeeded:(id)a0;
- (long long)_semanticContext;
- (void)_setWindowNumber:(long long)a0;
- (void)_setWindowTag;
- (BOOL)_showToolTip;
- (void)_testAndUpdateAllowsFlattening;
- (BOOL)_windowManagerAware;
- (void)_windowMoved:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)beginCreationDragWithHitPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })convertBaseToScreen:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasSelectionRect;
- (id)initForStatusItem:(id)a0;
- (void)sendEvent:(id)a0;
- (void)setSelection:(BOOL)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)setStatusBarView:(id)a0;
- (void)statusViewFrameDidChange:(id)a0;
- (void)viewGeometryInWindowDidChangeNotification:(id)a0;
- (void)viewNeedsDisplayInRectNotification:(id)a0;
- (void *)windowRef;
- (BOOL)worksWhenModal;

@end
