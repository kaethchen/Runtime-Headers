@class NSColor, _NSDrawingHandlerView, NSButton, NSLayoutConstraint;

@interface NSFontPanelColorWell : NSColorWell {
    NSButton *_button;
    _NSDrawingHandlerView *_colorRenderer;
    NSLayoutConstraint *_widthConstraintForColorRenderer;
    NSColor *_foregroundColor;
}

+ (id)_bezelRenderingButton;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setColor:(id)a0;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (id)_bezelRenderingButton;
- (void)_commonInit;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_drawColor:(BOOL)a0;
- (void)_drawInteriorBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_ownsColorPanelExclusively;
- (void)_windowChangedKeyState;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)drawColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBezelImage:(id)a0;
- (void)setForegroundColor:(id)a0;
- (void)setNeedsDisplay:(BOOL)a0;

@end
