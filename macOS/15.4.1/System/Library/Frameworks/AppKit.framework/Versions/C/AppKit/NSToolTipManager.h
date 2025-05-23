@class NSToolTipPanel, NSMapTable, NSTimer, NSToolTip, NSDate, NSCustomToolTipDrawView, NSWindow;

@interface NSToolTipManager : NSObject {
    NSMapTable *_toolTipsByView;
    double _toolTipDelay;
    NSDate *_timeToolTipRemovedFromScreen;
    struct __CFRunLoopTimer { } *_toolTipDisplayTimer;
    double _currentFadeValue;
    NSTimer *_fadeTimer;
    NSWindow *_lastToolTipWindow;
    NSToolTip *_currentDisplayedNormalToolTip;
    NSToolTipPanel *_normalToolTipPanel;
    NSCustomToolTipDrawView *_normalToolTipDrawView;
    NSToolTip *_currentDisplayedExpansionToolTip;
    NSToolTipPanel *_expansionToolTipPanel;
    NSCustomToolTipDrawView *_expansionToolTipDrawView;
}

+ (BOOL)isCurrentMouseLocationAboveWindow:(id)a0;
+ (id)sharedToolTipManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)displayToolTip:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (long long)_addTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andStartToolTipIfNecessary:(BOOL)a1 view:(id)a2 owner:(id)a3 toolTip:(id)a4 reuseExistingTrackingNum:(BOOL)a5;
- (void)_addTrackingRectsForView:(id)a0;
- (BOOL)_checkDisplayDelegate:(id)a0;
- (void)_displayTemporaryToolTipForView:(id)a0 withDisplayDelegate:(id)a1 displayInfo:(id)a2;
- (void)_displayTemporaryToolTipForView:(id)a0 withString:(id)a1;
- (void)_drawToolTipBackgroundInView:(id)a0;
- (id)_findToolTipForView:(id)a0 passingTest:(id /* block */)a1;
- (void)_getDisplayDelay:(double *)a0 inQuickMode:(BOOL *)a1 forView:(id)a2;
- (BOOL)_inQuickDisplayModeForWindow:(id)a0;
- (void)_menuDidBeginTracking:(id)a0;
- (id)_newToolTipWindow;
- (void)_removeToolTipsForView:(id)a0 passingTest:(id /* block */)a1;
- (void)_removeTrackingRectForToolTip:(id)a0 stopTimerIfNecessary:(BOOL)a1;
- (void)_removeTrackingRectsForView:(id)a0 stopTimerIfNecessary:(BOOL)a1;
- (long long)_setToolTip:(id)a0 forView:(id)a1 cell:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 owner:(id)a4 ownerIsDisplayDelegate:(BOOL)a5 userData:(void *)a6;
- (BOOL)_shouldInstallToolTip:(void *)a0;
- (void)_stopFadeTimer;
- (void)_stopTimerIfRunningForToolTip:(id)a0;
- (void)_toolTipTimerFiredWithToolTip:(id)a0;
- (void)abortToolTip;
- (void)addDrawingSubviewForToolTip:(id)a0 attributedString:(id)a1 inView:(id)a2;
- (void)addTrackingRectForToolTip:(id)a0 reuseExistingTrackingNum:(BOOL)a1;
- (void)fadeToolTip:(id)a0;
- (void)installContentView:(id)a0 forToolTip:(id)a1 toolTipWindow:(id)a2 isNew:(BOOL)a3;
- (void)invalidateToolTipForView:(id)a0 tag:(long long)a1;
- (BOOL)isExpansionToolTipVisible;
- (BOOL)isNormalToolTipVisible;
- (void)mouseEntered:(id)a0;
- (void)mouseEnteredToolTip:(id)a0 inWindow:(id)a1 withEvent:(id)a2;
- (void)mouseExited:(id)a0;
- (struct CGPoint { double x0; double x1; })onScreenToolTipWindowFrameOriginForToolTip:(id)a0 windowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 where:(struct CGPoint { double x0; double x1; })a2 location:(struct CGPoint { double x0; double x1; })a3;
- (void)orderOutOnlyExpansionToolTip;
- (void)orderOutOnlyNormalToolTip;
- (void)orderOutToolTipForView:(id)a0;
- (void)orderOutToolTipsImmediately:(BOOL)a0;
- (void)recomputeToolTipsForView:(id)a0 remove:(BOOL)a1 add:(BOOL)a2;
- (void)removeAllToolTipsForView:(id)a0;
- (void)removeAllToolTipsForView:(id)a0 withDisplayDelegate:(id)a1;
- (void)removeAllToolTipsForView:(id)a0 withOwner:(id)a1;
- (void)removeToolTipForView:(id)a0 tag:(long long)a1;
- (void)setCurrentDisplayedExpansionToolTip:(id)a0;
- (void)setCurrentDisplayedNormalToolTip:(id)a0;
- (void)setInitialToolTipDelay:(double)a0;
- (void)setToolTip:(id)a0 forView:(id)a1 cell:(id)a2;
- (long long)setToolTipForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 displayDelegate:(id)a2 displayInfo:(id)a3;
- (long long)setToolTipForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 owner:(id)a2 userData:(void *)a3;
- (void)setToolTipWithOwner:(id)a0 forView:(id)a1 cell:(id)a2;
- (void)startTimer:(double)a0 userInfo:(id)a1;
- (void)stopTimer;
- (id)toolTipAttributes;
- (id)toolTipBackgroundColor;
- (struct CGSize { double x0; double x1; })toolTipContentMargin;
- (id)toolTipContentViewWithAttributedString:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 where:(struct CGPoint { double x0; double x1; })a2 windowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 toolTip:(id)a4;
- (id)toolTipForView:(id)a0 cell:(id)a1;
- (id)toolTipTextColor;
- (double)toolTipYOffset;
- (void)viewDidChangeGeometryInWindow:(id)a0;
- (BOOL)viewHasToolTips:(id)a0;

@end
