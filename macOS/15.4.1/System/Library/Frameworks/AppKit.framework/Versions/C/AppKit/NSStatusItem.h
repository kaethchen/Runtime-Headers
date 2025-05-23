@class NSStatusBarButton, NSString, NSView, NSStatusBar, NSMenu, NSAppearance, NSMutableArray, NSCGSStatusItem, NSStatusBarWindow, NSStatusItemNavigationController;
@protocol NSStatusItemDelegate;

@interface NSStatusItem : NSObject {
    NSCGSStatusItem *_cgsItem;
    NSStatusBar *_fStatusBar;
    double _fLength;
    NSStatusBarWindow *_fWindow;
    NSView *_fView;
    int _fPriority;
    id _statusItemMenu;
    NSMutableArray *_replicants;
    NSString *_displayIdentifier;
    long long _systemInsertOrder;
    unsigned long long _behavior;
    NSStatusItemNavigationController *_navigationController;
    NSAppearance *_appearance;
    NSString *_defaultAutosaveName;
    NSString *_autosaveName;
    id<NSStatusItemDelegate> _delegate;
    double _internalItemPadding;
    int _layoutIndex;
    BOOL _isButtonHighlighted;
    struct { unsigned char customView : 1; unsigned char highlightMode : 1; unsigned char hasAlternateImage : 1; unsigned char visible : 1; unsigned char backgroundStyle : 4; unsigned char pendingReplicantDisplay : 1; unsigned char disableImageReplicationCount : 4; unsigned char appearsActive : 1; unsigned char updatingReplicant : 1; unsigned char didInactiveTemplateStyling : 1; unsigned char needsAdditionalReplicantUpdate : 1; unsigned char disableReplicantDirtying : 1; unsigned char isAppleItem : 1; unsigned char neverClip : 1; unsigned char isDragging : 1; unsigned char isDraggedOutOfBar : 1; unsigned char isCreationDrag : 1; unsigned char sawMoveEvent : 1; unsigned char draggedLongEnoughToAllowRemoval : 1; unsigned char dragShowingRemovalCursor : 1; unsigned char dragSetSomeOverrideCursor : 1; unsigned char ready : 1; unsigned char hasNavigationHighlight : 1; unsigned char hasLayoutIndex : 1; } _flags;
}

@property (setter=setButtonHighlighted:) BOOL isButtonHighlighted;
@property (readonly, weak) NSStatusBar *statusBar;
@property double length;
@property (retain) NSMenu *menu;
@property (readonly) NSStatusBarButton *button;
@property unsigned long long behavior;
@property (getter=isVisible) BOOL visible;
@property (copy) NSString *autosaveName;

+ (id)_currentNavigationWindow;
+ (id)_itemInStatusBar:(id)a0 withLength:(double)a1 withPriority:(long long)a2 systemInsertOrder:(long long)a3;
+ (void)_registerNotificationHandlersIfNeeded;
+ (void)_statusItems:(id)a0 setHidden:(BOOL)a1;
+ (id)keyPathsForValuesAffectingEffectiveAppearance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (BOOL)isEnabled;
- (void)setAction:(SEL)a0;
- (void)setAttributedTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)view;
- (id)image;
- (id)attributedTitle;
- (BOOL)_isHidden;
- (id)title;
- (void)setView:(id)a0;
- (id)effectiveAppearance;
- (SEL)action;
- (void)_beginCreationDragWithHitPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_statusItemMenu;
- (void)_wakeStatusItem;
- (id)_window;
- (id)toolTip;
- (id)_button;
- (id)_accessibilityContainer;
- (void)_adjustLength;
- (BOOL)_allowItemDragging;
- (BOOL)_allowReplication;
- (BOOL)_allowsUserRemoval;
- (BOOL)_appearsActive;
- (BOOL)_appearsActiveWithoutSideEffects;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_approximatedWindowFrame;
- (void)_autosavePosition;
- (long long)_backgroundStyle;
- (id)_buttonOrNil;
- (void)_cleanUpDragCursorIfNeeded;
- (void)_clearAutosavedPreferredPosition;
- (void)_clearAutosavedState;
- (void)_completeStatusItemDrag;
- (id)_defaultAutosaveName;
- (id)_defaultsKeyForAutosaveProperty:(id)a0;
- (void)_disableStatusItemImageReplication;
- (id)_displayIdentifier;
- (float)_dropPriority;
- (unsigned long long)_effectiveBehavior;
- (void)_enableStatusItemImageReplication;
- (BOOL)_hasNavigationHighlight;
- (id)_initWithStatusBar:(id)a0 length:(double)a1 priority:(long long)a2 systemInsertOrder:(long long)a3;
- (void)_initializeAutosaveName;
- (double)_internalItemPadding;
- (BOOL)_isDraggedOutOfBar;
- (BOOL)_isDragging;
- (BOOL)_isInstalled;
- (id)_itemContentViews;
- (void)_itemMovedDuringDrag;
- (id)_moveToScreenContainingActiveMenuBar;
- (void)_navigateWithCommand:(unsigned int)a0 options:(unsigned int)a1;
- (id)_navigationController;
- (BOOL)_neverClip;
- (void)_noteDraggedLongEnoughToAllowRemoval;
- (BOOL)_participatesInNavigationLoop;
- (id)_popupMenuBeingOpened;
- (float)_preferredPosition;
- (id)_preferredPositionDefaultsKey;
- (void)_presentIndicator:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)_priority;
- (void)_propagateBackgroundStyle;
- (void)_recursiveSetNeedsDisplayWithoutDirtyingReplicantForView:(id)a0;
- (void)_removeAllReplicants;
- (void)_removePopupMenuAssociation:(id)a0;
- (void)_restorePreferencesFromAutosaveName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedContentFrame;
- (void)_setAppearsActive:(BOOL)a0;
- (void)_setBackgroundStyle:(long long)a0;
- (void)_setDisplayIdentifier:(id)a0;
- (void)_setDropPriority:(float)a0;
- (void)_setHidden:(BOOL)a0;
- (void)_setInternalItemPadding:(double)a0;
- (void)_setLayoutIndex:(int)a0;
- (void)_setNavigationHighlight:(BOOL)a0;
- (void)_setPopupMenuAssociation:(id)a0;
- (void)_setSelectedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldReplicate;
- (void)_startStatusItemDrag:(BOOL)a0;
- (void)_statusBarButtonDidSetAlternateImage;
- (void)_statusBarButtonDidSetImage;
- (void)_statusBarButtonDidSetImagePosition;
- (void)_statusBarButtonDidSetTitle;
- (void)_statusItemContentViewsDidChange;
- (unsigned int)_statusItemFlags;
- (BOOL)_systemClock;
- (BOOL)_systemCompactClock;
- (BOOL)_terminateOnRemoval;
- (void)_uninstall;
- (void)_updateButtonImagePosition;
- (void)_updateItemFlags;
- (void)_updateItemForCurrentMetrics;
- (void)_updateItemForMetrics:(id)a0;
- (void)_updateReplicant:(id)a0;
- (void)_updateReplicants;
- (void)_updateReplicantsUnlessMenuIsTracking:(id)a0;
- (void)_userRemovedStatusItemOnCreation:(BOOL)a0;
- (void)_userReturnedStatusItemToBar;
- (void)_validateBehavior:(unsigned long long)a0;
- (id)_visibleDefaultsKey;
- (void)_windowNeedsReplicantUpdate:(id)a0;
- (BOOL)allowsVibrancy;
- (id)alternateImage;
- (void)animateFailedAdditionOfStatusItemToBarWithCompletionHandler:(id /* block */)a0;
- (void)animateRemovalOfStatusItemWithCompletionHandler:(id /* block */)a0;
- (id)appearance;
- (long long)backgroundStyleForHighlight:(BOOL)a0;
- (SEL)doubleAction;
- (void)drawStatusBarBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withHighlight:(BOOL)a1;
- (BOOL)highlightMode;
- (void)popUpStatusItemMenu:(id)a0;
- (id)screen;
- (long long)sendActionOn:(unsigned long long)a0;
- (void)setAllowsVibrancy:(BOOL)a0;
- (void)setAlternateImage:(id)a0;
- (void)setAppearance:(id)a0;
- (void)setDoubleAction:(SEL)a0;
- (void)setHighlightMode:(BOOL)a0;
- (void)setToolTip:(id)a0;

@end
