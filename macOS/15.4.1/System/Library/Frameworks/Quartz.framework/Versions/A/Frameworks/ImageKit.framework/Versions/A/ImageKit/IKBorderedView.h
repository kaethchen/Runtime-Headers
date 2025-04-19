@class NSColor, NSView, NSGradient;

@interface IKBorderedView : NSView

@property (nonatomic) int borderSides;
@property (nonatomic) int shadowSides;
@property (copy, nonatomic) NSColor *topBorderColor;
@property (copy, nonatomic) NSColor *bottomBorderColor;
@property (copy, nonatomic) NSColor *leftBorderColor;
@property (copy, nonatomic) NSColor *rightBorderColor;
@property (copy, nonatomic) NSColor *topInactiveBorderColor;
@property (copy, nonatomic) NSColor *bottomInactiveBorderColor;
@property (copy, nonatomic) NSColor *leftInactiveBorderColor;
@property (copy, nonatomic) NSColor *rightInactiveBorderColor;
@property (copy, nonatomic) NSColor *shadowColor;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (copy, nonatomic) NSColor *inactiveBackgroundColor;
@property (copy, nonatomic) NSGradient *backgroundGradient;
@property (copy, nonatomic) NSGradient *inactiveBackgroundGradient;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRect;
@property (nonatomic) NSView *contentView;
@property (nonatomic) int horizontalContentViewResizingMode;
@property (nonatomic) int verticalContentViewResizingMode;

- (struct { double x0; double x1; double x2; double x3; })_borderInset;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (BOOL)isShowingShadow;
- (struct { double x0; double x1; double x2; double x3; })_contentInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectExcludingShadow;
- (void)_contentViewFrameDidChange:(id)a0;
- (BOOL)_isInactive;
- (void)_setBorderSides:(int)a0;
- (struct { double x0; double x1; double x2; double x3; })_shadowInset;
- (struct CGSize { double x0; double x1; })boundSizeForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })frameSizeForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)setAllBordersToColor:(id)a0;
- (void)setAllInactiveBordersToColor:(id)a0;
- (void)setShadowSide:(int)a0;

@end
