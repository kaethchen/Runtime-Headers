@class EKUITokenField, NSAttributedString, NSColor;

@interface EKUITokenAttachmentCell : NSTokenAttachmentCell

@property (retain) EKUITokenField *tokenField;
@property (retain) NSAttributedString *cachedAttributedString;
@property long long cachedBackgroundStyle;
@property (retain) NSColor *cachedTextColor;
@property struct CGSize { double width; double height; } cachedCellSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsForCellSize;
@property float attributedStringWidth;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedCellFrame;

+ (id)displayAttributedStringForDisplayString:(id)a0 withImage:(id)a1;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformShowMenu;
- (id)attributedStringValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTokenWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)pullDownImage;
- (void)setAttributedStringValue:(id)a0;
- (id)textColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tokenTintColor;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3 untilMouseUp:(BOOL)a4;
- (BOOL)isSelectedToken;
- (BOOL)shouldShowToken;
- (id)generateAttributedStringValue;
- (id)imageForRepresentedObject;
- (id)initCellForTokenField:(id)a0;
- (BOOL)isCompletedToken;
- (void)markAsNeedsUpdate;
- (void)rebuildAttributedString;
- (void)resetCachedSizeAttributes;
- (id)stringForRepresentedObject;

@end
