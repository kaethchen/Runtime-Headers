@interface PDFAnnotationDrawing : NSObject

@property (class, readonly) double textInset;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedRectForBox:(long long)a0 withAnnotation:(id)a1;
+ (struct CGPath **)createCGPathArrayWithBezierPaths:(id)a0;
+ (id)createLigtherColor:(struct CGColor { } *)a0 withIntensity:(double)a1;
+ (void)createPillBezier:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
+ (void)drawAppearance:(int)a0 ofAnnotation:(id)a1 withBox:(long long)a2 inContext:(struct CGContext { } *)a3;
+ (void)drawAppearance:(int)a0 ofAnnotation:(id)a1 withBox:(long long)a2 inContext:(struct CGContext { } *)a3 scaleProportional:(BOOL)a4;
+ (void)drawAppearance:(int)a0 ofAnnotation:(id)a1 withBox:(long long)a2 inContext:(struct CGContext { } *)a3 scaleProportional:(BOOL)a4 suppressTextRendering:(BOOL)a5;
+ (void)drawArrowFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 open:(BOOL)a2 inContext:(struct CGContext { } *)a3 withBorder:(id)a4;
+ (void)drawBulletAtPoint:(struct CGPoint { double x0; double x1; })a0 shape:(int)a1 inContext:(struct CGContext { } *)a2 withBorder:(id)a3;
+ (void)drawCheckBox:(id)a0 inContext:(struct CGContext { } *)a1 withState:(long long)a2 withBackgroundColor:(id)a3 withBorderColor:(id)a4 withFontColor:(id)a5 isHighlighted:(BOOL)a6;
+ (void)drawComboBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withAnnotation:(id)a2 withStringValue:(id)a3 withFont:(id)a4 withFontColor:(id)a5;
+ (void)drawCommentIconInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 inContext:(struct CGContext { } *)a2;
+ (void)drawCommonCommentNoteIconToContext:(struct CGContext { } *)a0 colorComponents:(double *)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (void)drawDisclosureBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
+ (void)drawHelpIconInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 inContext:(struct CGContext { } *)a2;
+ (void)drawInContext:(struct CGContext { } *)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withPopupAnnotation:(id)a2;
+ (void)drawInsertIconInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 inContext:(struct CGContext { } *)a2;
+ (void)drawKeyIconInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 inContext:(struct CGContext { } *)a2;
+ (void)drawListBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withAnnotation:(id)a2 withOptions:(id)a3 withStringValue:(id)a4 withFont:(id)a5 withFontColor:(id)a6;
+ (void)drawNewParagraphIconInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 inContext:(struct CGContext { } *)a2;
+ (void)drawNoteAsSelected:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)drawNoteIconInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 inContext:(struct CGContext { } *)a2;
+ (void)drawNoteInContext:(struct CGContext { } *)a0 withParentAnnotation:(id)a1;
+ (void)drawParagraphIconInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 inContext:(struct CGContext { } *)a2;
+ (void)drawPushButton:(id)a0 inContext:(struct CGContext { } *)a1 withBackgroundColor:(id)a2 withCaption:(id)a3 withFont:(id)a4 withFontColor:(id)a5 isHighlighted:(BOOL)a6;
+ (void)drawRadioButton:(id)a0 inContext:(struct CGContext { } *)a1 withState:(long long)a2 withBackgroundColor:(id)a3 withBorderColor:(id)a4 withFontColor:(id)a5 isHighlighted:(BOOL)a6;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withAKAnnotation:(id)a2 forAnnotation:(id)a3;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withButtonWidgetAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withChoiceWidgetAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withCircleAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withFreeTextAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withInkAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withLineAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withLinkAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withMarkupAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withPopupAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withRedactAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withSquareAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withStampAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withTextAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withTextWidgetAnnotation:(id)a2;
+ (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withUnknownAnnotation:(id)a2;
+ (void)fillOval:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 context:(struct CGContext { } *)a2;
+ (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 context:(struct CGContext { } *)a2;
+ (BOOL)renderString:(id)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 font:(id)a2 color:(id)a3 alignment:(long long)a4 rotation:(int)a5 breaks:(BOOL)a6 context:(struct CGContext { } *)a7 withAnnotation:(id)a8;
+ (void)setupDrawColor:(id)a0 withComponents:(double *)a1 forContext:(struct CGContext { } *)a2;
+ (id)stringByTrimmingTrailingCharactersInSet:(id)a0 forString:(id)a1;
+ (void)strokeOval:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 context:(struct CGContext { } *)a2;
+ (void)strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 context:(struct CGContext { } *)a2;

@end
