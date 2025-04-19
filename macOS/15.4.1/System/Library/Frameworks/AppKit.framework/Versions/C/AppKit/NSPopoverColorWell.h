@class NSString, NSButton, _NSDrawingHandlerView;

@interface NSPopoverColorWell : NSColorWell <NSPopoverDelegate> {
    BOOL _rendersUsingSubviews;
    NSButton *_button;
    _NSDrawingHandlerView *_colorRenderer;
    struct { unsigned char _noSelection : 1; unsigned char _emptyColor : 1; unsigned char _emptyEnabled : 1; unsigned char _controlSize : 2; unsigned int _reserved : 27; } _flags;
}

@property BOOL hasNoSelection;
@property (copy) id /* block */ afterRenderer;
@property (getter=isEmptyColorEnabled) BOOL emptyColorEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_colorPopoverCreateIfNecessary:(BOOL)a0;
+ (id)_bezelRenderingButton;
+ (void)drawEmptyColorSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enabled:(BOOL)a1;
+ (void)drawNoColorSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enabled:(BOOL)a1 active:(BOOL)a2;
+ (id)emptyColor;
+ (id)nullColor;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setColor:(id)a0;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (void)setControlSize:(unsigned long long)a0;
- (id)_bezelRenderingButton;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_colorSwatchEdgeInsets;
- (void)_commonInit;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_drawColor:(BOOL)a0;
- (BOOL)_effectivelySupportsAlpha;
- (BOOL)_ownsColorPanelExclusively;
- (BOOL)_shouldOrderFront;
- (void)_showPopover;
- (void)_windowChangedKeyState;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (unsigned long long)controlSize;
- (BOOL)drawColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)performClick:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)setColorMatrixColorList:(id)a0;
- (void)setEmptyColorEnabled:(BOOL)a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)setTopBarMatrixColorList:(id)a0;

@end
