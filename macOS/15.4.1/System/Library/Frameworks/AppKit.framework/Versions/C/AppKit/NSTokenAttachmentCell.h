@interface NSTokenAttachmentCell : NSTextAttachmentCell {
    id _representedObject;
    id _textColor;
    id _view;
    struct { unsigned char _selected : 1; unsigned char _inSelection : 1; unsigned char _edgeStyle : 2; unsigned char _style : 4; unsigned char _useTintColor : 1; unsigned char _needsSeparator : 1; unsigned char _subclassOverridesTextAttributes : 2; unsigned int _reserved : 20; } _tacFlags;
}

@property unsigned long long tokenStyle;
@property (readonly, getter=isSelected) BOOL selected;
@property (readonly) BOOL alwaysShowBackground;
@property (readonly) BOOL neverShowSeparator;

+ (void)initialize;
+ (BOOL)_getLineSpacing:(double *)a0 forTokenStyle:(unsigned long long)a1;
+ (BOOL)_getTypesetterBehavior:(long long *)a0 forTokenStyle:(unsigned long long)a1;
+ (struct { BOOL x0; BOOL x1; BOOL x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; BOOL x12; long long x13; BOOL x14; double x15; } *)_metricsForTokenStyle:(unsigned long long)a0;
+ (BOOL)usesTintColor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (id)menu;
- (void)setRepresentedObject:(id)a0;
- (id)_textAttributes;
- (void)setHighlighted:(BOOL)a0;
- (long long)_contentBacking;
- (BOOL)_needsSeparator;
- (long long)_bezelPresentationStateInView:(id)a0;
- (BOOL)_hasMenu;
- (id)_immediateActionAnimationControllerForTokenAttachment:(id)a0 inTextView:(id)a1;
- (long long)_interiorContentStateInView:(id)a0;
- (struct { BOOL x0; BOOL x1; BOOL x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; BOOL x12; long long x13; BOOL x14; double x15; } *)_metrics;
- (void)_resetNeedsSeparatorWithLayoutManager:(id)a0 characterIndex:(unsigned long long)a1;
- (void)_setNeedsSeparator:(BOOL)a0;
- (BOOL)_shouldShowPullDownImage;
- (BOOL)_shouldUseStyledTextInView:(id)a0 withBackgroundStyle:(long long)a1;
- (BOOL)_supportsSeparators;
- (id)_tokenAttachmentContentStyleForTextInView:(id)a0;
- (id)_tokenAttachmentContentStyleInView:(id)a0;
- (long long)_typesetterBehavior;
- (struct CGPoint { double x0; double x1; })cellBaselineOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })cellSize;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawPullDownImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawTokenInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1;
- (void)drawTokenWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initTextCell:(id)a0;
- (long long)interiorBackgroundStyle;
- (id)pullDownImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pullDownRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pullDownTrackingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)representedObject;
- (void)setTextColor:(id)a0;
- (BOOL)shouldDrawSeparator;
- (BOOL)shouldDrawTokenBackground;
- (id)textColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tokenBackgroundColor;
- (id)tokenForegroundColor;
- (id)tokenTintColor;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3 untilMouseUp:(BOOL)a4;
- (BOOL)wantsToTrackMouseForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3;

@end
