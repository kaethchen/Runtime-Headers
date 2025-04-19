@interface NSCarbonWindowFrame : NSView {
    unsigned long long _styleMask;
    BOOL resizeByIncrement;
    struct CGSize { double width; double height; } resizeParameter;
}

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })minFrameSizeForMinContentSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;

- (void)dealloc;
- (void)setTitle:(id)a0;
- (id)title;
- (BOOL)_canHaveToolbar;
- (BOOL)_toolbarIsShown;
- (void)setAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (double)_distanceFromToolbarBaseToTitlebar;
- (void)_hideToolbarWithAnimation:(BOOL)a0;
- (void)_setFrameNeedsDisplay:(BOOL)a0;
- (void)_setNonactivatingPanel:(BOOL)a0;
- (void)_setSheet:(BOOL)a0;
- (double)_sheetHeightAdjustment;
- (void)_showToolbarWithAnimation:(BOOL)a0;
- (BOOL)_toolbarIsHidden;
- (BOOL)_toolbarIsInTransition;
- (BOOL)_toolbarIsManagedByExternalWindow;
- (void)_updateButtonState;
- (void)_updateTitleProperties:(id)a0;
- (void)_windowChangedKeyState;
- (void)_windowTitlePropertiesChanged:(id)a0;
- (struct CGSize { double x0; double x1; })aspectRatio;
- (id)closeButton;
- (double)contentAlpha;
- (id)contentFill;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 owner:(id)a2;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })minFrameSizeForMinContentSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;
- (id)minimizeButton;
- (struct CGSize { double x0; double x1; })resizeIncrements;
- (void)setResizeIncrements:(struct CGSize { double x0; double x1; })a0;
- (void)setStyleMask:(unsigned long long)a0;
- (unsigned long long)styleMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titlebarRect;
- (id)zoomButton;

@end
