@interface NSToolbarFullScreenWindow : NSWindow {
    BOOL _forcingToolbarVisible;
    BOOL _hotKeyNavigationForcingToolbarAndAuxViewVisible;
    long long _childWindowOrderingPriority;
    long long _menubarAutohidingCount;
}

@property (nonatomic) BOOL positionManagedByWindowServer;
@property (nonatomic) BOOL windowIsMoving;

- (id)description;
- (BOOL)_allowsSnapping;
- (BOOL)_canMiniaturize;
- (id)_currentDividerResizeDirections;
- (id)_findKeyLoopGroupingViewFollowingKeyLoopGroupingView:(id)a0 direction:(unsigned long long)a1;
- (BOOL)_shouldStartWindowDragForEvent:(id)a0;
- (BOOL)_wantsFullScreenTileDropTargets;
- (void)becomeKeyWindow;
- (BOOL)canHide;
- (id)_originalWindow;
- (void)resignKeyWindow;
- (void)_adjustWindowToScreen;
- (BOOL)_allowsExteriorResizing;
- (BOOL)_canBeSnappingTarget;
- (BOOL)_cgsPositionManagedByExternalAgent;
- (long long)_childWindowOrderingPriority;
- (id)_cursorForResizeDirection:(long long)a0;
- (void)_disableFullScreenMenubarAutohiding;
- (double)_effectiveTitlebarAlphaValue;
- (void)_enableFullScreenMenubarAutohiding;
- (void)_getResizeEdgeAndCornerThicknesses:(double[8])a0;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)_hostsLayersInWindowServer;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_ignoreForVisibleNonFullScreenSpace;
- (BOOL)_ignoredForScripting;
- (BOOL)_isRunningADocModalAttachedSheet;
- (BOOL)_keyViewLoopsMayCrossWindows;
- (BOOL)_newFirstResponderIsInToolbar:(id)a0;
- (id)_orderedDrawerAndWindowKeyLoopGroupingViews;
- (id)_parentWindowForAddingToMovementGroupWithProposedParent:(id)a0;
- (BOOL)_performDividerDragWithEvent:(id)a0 forResizeDirection:(long long)a1;
- (BOOL)_prepareToZoom;
- (void)_setChildWindowOrderingPriority:(long long)a0;
- (void)_setCursorForMouseLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_setFirstResponder:(id)a0;
- (void)_setWindowTag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sheetDimmingMaterialRect;
- (void)_startClientSideMove;
- (void)_stopClientSideMove;
- (id)_supplementalSharingServicePickerToolbarItemDelegate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleTileFrameForFullScreen;
- (BOOL)_visualEffectViewAlwaysUseWSAwareBackdrops;
- (BOOL)_wantsSheetDimmingMaterial;
- (id)_windowForToolbar;
- (BOOL)_windowIsBeingMoved;
- (void)_windowMoved:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityParameterizedAttributeNames;
- (id)appearance;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (BOOL)hasKeyAppearanceIncludingSheets:(BOOL)a0;
- (BOOL)isMainWindow;
- (BOOL)isMovable;
- (void)performWindowDragWithEvent:(id)a0;
- (void)setAppearance:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startRectForSheet:(id)a0;
- (void)updateForceToolbarVisible;

@end
