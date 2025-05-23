@class NSCocoaMenuImpl, NSString, NSView, NSTrackingArea, NSMutableDictionary;
@protocol NSContextMenuLifecycleProtocol;

@interface NSPopupMenuWindow : NSWindow <NSWindowDelegate, NSMenuWindow, NSContextMenuWindowProtocol> {
    NSCocoaMenuImpl<NSContextMenuLifecycleProtocol> *_impl;
    NSTrackingArea *_enteredExitedTrackingArea;
    NSView *_parentItem;
    struct CGPoint { double x; double y; } _frameOffset;
    struct CGPoint { double x; double y; } _positioningOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _parentItemBounds;
    double _windowTopLimitOverride;
    long long _presentationType;
    double _calloutOffset;
    long long _calloutLocation;
    NSMutableDictionary *_potentialFirstResponders;
    BOOL _didSetFirstResponder;
    BOOL _prefersRepositioningWithOffset;
    BOOL _ignoresMulticolorAccent;
    BOOL _isDismissalCanceled;
    BOOL _blocksInputContext;
    BOOL _hasUnhandledKey;
    BOOL _finishedOrdering;
    BOOL _wantsOrderFrontAnimation;
    BOOL _wasKeyWindow;
}

@property (nonatomic) BOOL keyOverride;
@property (nonatomic) BOOL isWindowClosing;
@property (readonly) BOOL isDelayingPresentation;
@property (readonly, nonatomic) NSCocoaMenuImpl<NSContextMenuLifecycleProtocol> *associatedImpl;
@property (setter=setIgnoresMulticolorAccent:) BOOL ignoresMulticolorAccent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

+ (id)_allowedRunLoopModesForToolTips;
+ (double)constrainedMenuWidth:(double)a0 onScreen:(id)a1;
+ (void)discardOrderedReuseableWindow;
+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;
+ (id)windowWithContextMenu:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)_flags;
- (void)close;
- (void)_finishClosing:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pullDownFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canHide;
- (BOOL)_allowsOrdering;
- (id)_displayChangedSoAdjustWindows:(BOOL)a0;
- (void)resignKeyWindow;
- (void)_addPotentialFirstResponder:(id)a0;
- (BOOL)_allowsActiveInputContext;
- (BOOL)_allowsActiveInputContextDuringMenuTracking;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
- (long long)_childWindowOrderingPriority;
- (void)_commonPresentFromView:(id)a0 animated:(BOOL)a1;
- (id)_contentView;
- (void)_enableFlushWindowWithoutPerformingFlush;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_exclusionRect;
- (BOOL)_handleKeyEvent:(id)a0;
- (BOOL)_hasActiveControls;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_ignoreForFullScreenTransitionSnapshot;
- (BOOL)_ignoredForScripting;
- (BOOL)_isConsideredForActivation;
- (BOOL)_isKeyWindow;
- (BOOL)_isReallyKeyWindow;
- (BOOL)_isScreenLayoutAware;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_overrideDefeatingConstrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1 fullScreenConstrainToTile:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popUpWithCalloutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 menuSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popupFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popupFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 preferredY:(double *)a2 focusedItemOffset:(struct CGPoint { double x0; double x1; })a3 parentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (double)_positionSubmenuHorizontally:(long long)a0 withMenuWidth:(double)a1 inParentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 allowingOverlap:(BOOL)a4;
- (double)_positionSubmenuVerticallyInAvailableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withMenuHeight:(double *)a1 mustAlignWithParent:(BOOL)a2 inParentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)_preventsActivation;
- (unsigned long long)_privateFlags;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_safePositioningRectForScreen:(id)a0;
- (void)_setLastHitView:(id)a0;
- (void)_setNeedsUpdateFirstResponder;
- (void)_setVisible:(BOOL)a0;
- (BOOL)_showToolTip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_submenuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_substituteKeyWindowForAction:(SEL)a0;
- (void)_tableViewDidReceiveKeyEvent;
- (void)_updateMouseMovedState;
- (void)_updateSubmenuFramesForHighlightedView:(id)a0 animated:(BOOL)a1;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsChildOfApp;
- (BOOL)accessibilityIsIgnored;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeVisibleWithoutLogin;
- (void)closeAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enableFlushWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (id)initWithContextMenuImpl:(id)a0;
- (BOOL)isEligibleForReuse;
- (BOOL)isKeyWindow;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)makeAvailableForReuse;
- (BOOL)makeFirstResponder:(id)a0;
- (void)makeKeyWindow;
- (void)orderOut:(id)a0;
- (id)parentItemAssociatedImpl;
- (void)presentAsPopUpRelativeToView:(id)a0 animated:(BOOL)a1;
- (void)presentAsPullDownRelativeToView:(id)a0 animated:(BOOL)a1 fromParentBoundsInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)presentAsSubmenuRelativeToView:(id)a0 animated:(BOOL)a1 fromParentBoundsInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withDelay:(BOOL)a3;
- (void)recalculateKeyViewLoop;
- (void)repositionWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)rootImplPresentationContext;
- (void)saveForReuseWithoutClosing;
- (void)setAlphaValue:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 animate:(BOOL)a2;
- (void)setupWithImpl:(id)a0;
- (unsigned long long)shadowOptions;
- (void)updateWindowFrameTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (long long)userInterfaceLayoutDirection;

@end
