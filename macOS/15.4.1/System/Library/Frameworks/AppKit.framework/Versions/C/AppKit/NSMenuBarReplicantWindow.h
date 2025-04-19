@interface NSMenuBarReplicantWindow : NSWindow <NSMenuWindow>

+ (BOOL)_hiddenInWindowList;
+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;

- (BOOL)_canMiniaturize;
- (BOOL)canHide;
- (id)_displayChangedSoAdjustWindows:(BOOL)a0;
- (BOOL)_excludeFromOrderingGroup;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_ignoredForScripting;
- (BOOL)_isNonactivatingPanel;
- (void)_orderForwardWithEvent:(id)a0;
- (void)_setWindowTag;
- (BOOL)_shouldReallyOrderWindow;
- (BOOL)_showToolTip;
- (BOOL)_wantsAsyncContext;
- (BOOL)_windowManagerAware;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPointFromScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasDynamicDepthLimit;
- (id)initWithView:(id)a0;
- (BOOL)isExcludedFromWindowsMenu;
- (void)recalculateKeyViewLoop;
- (void)setAutorecalculatesContentBorderThickness:(BOOL)a0 forEdge:(unsigned long long)a1;
- (void)setLevel:(long long)a0;
- (id)standardWindowButton:(unsigned long long)a0;
- (BOOL)worksWhenModal;

@end
