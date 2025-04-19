@class NSString, NSView, NSTrackingArea, NSThemeFrame, NSMutableArray;

@interface NSTitlebarView : NSView <WindowSectionDelegate> {
    BOOL _transparent;
    NSTrackingArea *_buttonGroupTrackingArea;
    NSMutableArray *_sectionBackgroundViews;
    NSMutableArray *_sectionBackgroundViewGroupNames;
    NSView *_captureBackdropHostingView;
}

@property (weak) NSThemeFrame *associatedThemeFrame;
@property (getter=isTransparent) BOOL transparent;
@property (nonatomic) BOOL hasSidebar;
@property (nonatomic) BOOL hasTrailingSidebar;
@property (nonatomic) long long blendingMode;
@property (copy, nonatomic) NSString *titleGroupName;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateSections:(id)a0;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)rightMouseDown:(id)a0;
- (id)_hitTestForEvent:(id)a0;
- (void)_installBackdropLayer;
- (BOOL)_isHUDWindow;
- (long long)_material;
- (id)_preferredAppearance;
- (void)_removeTrackingAreaIfNeeded;
- (id)_titleTextFieldView;
- (void)_updateSectionBackgroundViews:(id)a0;
- (void)_updateSectionBackroundViewHeights:(double)a0;
- (void)_updateSectionGroupNames;
- (void)_updateSectionTransparency;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsIgnored;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)sectionAtIndex:(unsigned long long)a0 didChangeDividerExtentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaterial:(long long)a0;
- (void)updateMaterialForSection:(id)a0 atIndex:(unsigned long long)a1;
- (void)updateTrackingAreas;
- (void)updateTransparency;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;

@end
