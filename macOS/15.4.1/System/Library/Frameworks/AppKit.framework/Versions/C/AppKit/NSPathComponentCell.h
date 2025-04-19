@class NSImage, NSURL;

@interface NSPathComponentCell : NSTextFieldCell {
    NSImage *_image;
    double _minWidth;
    double _fullWidth;
    struct { unsigned char shouldDrawArrow : 1; unsigned char drawsAsNavigationBar : 1; unsigned char isFirstItem : 1; unsigned char isLastItem : 1; unsigned char isDropTarget : 1; unsigned int reserved : 27; } _flags;
    NSImage *_originalImage;
}

@property (setter=_setResizedWidth:) double _resizedWidth;
@property (setter=_setCurrentWidth:) double _currentWidth;
@property (retain) NSImage *image;
@property (copy) NSURL *URL;

+ (struct CGSize { double x0; double x1; })_iconSizeForControlSize:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setBaseWritingDirection:(long long)a0;
- (id)_textAttributes;
- (long long)_compareToCell:(id)a0;
- (long long)_contentBacking;
- (id)_imageToDisplay;
- (id)_pathControlContentStyleInView:(id)a0;
- (void)_setIsLastItem:(BOOL)a0;
- (void)_drawNavigationBarBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_drawsAsNavigationBar;
- (id)_effectiveContentStyleForArrowInView:(id)a0;
- (void)_effectiveFontDidChangeTo:(id)a0;
- (double)_fullWidth;
- (struct CGSize { double x0; double x1; })_iconSize;
- (long long)_interiorContentStateInView:(id)a0;
- (long long)_interiorContentValueInView:(id)a0;
- (BOOL)_isDropTarget;
- (BOOL)_isFirstItem;
- (BOOL)_isLastItem;
- (double)_minWidth;
- (double)_overlapAmount;
- (id)_pathControlContentStyleForImageInView:(id)a0;
- (id)_pathControlContentStyleForTextInView:(id)a0;
- (void)_setDrawsAsNavigationBar:(BOOL)a0;
- (void)_setIsDropTarget:(BOOL)a0;
- (void)_setIsFirstItem:(BOOL)a0;
- (void)_setShouldDrawArrow:(BOOL)a0;
- (void)_setShouldDrawArrowYes;
- (BOOL)_shouldDrawArrow;
- (BOOL)_shouldDrawHighlightRect;
- (BOOL)_shouldDrawRTL;
- (BOOL)_shouldHighlightDropTarget;
- (BOOL)_shouldStyleUneditableTextInView:(id)a0;
- (BOOL)_textDimsWhenDisabled;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (long long)interiorBackgroundStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
