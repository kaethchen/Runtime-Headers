@class NSString, NSColor, NSFont;

@interface TextCell : NSTextFieldCell {
    NSString *_truncationAlternateString;
    NSString *_secondTruncationAlternateString;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    NSFont *_baselineFont;
    BOOL _drawsEngraved;
    BOOL _engravedTextAttributesDirty;
    NSColor *_engravedTextColor;
}

+ (id)updateCellForColumn:(id)a0 inView:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setRightMargin:(double)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)editWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 editor:(id)a2 delegate:(id)a3 event:(id)a4;
- (double)leftMargin;
- (double)rightMargin;
- (void)selectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 editor:(id)a2 delegate:(id)a3 start:(long long)a4 length:(long long)a5;
- (void)setLeftMargin:(double)a0;
- (void)setTopMargin:(double)a0;
- (double)topMargin;
- (id)baselineFont;
- (void)setBaselineFont:(id)a0;
- (id)secondTruncationAlternateString;
- (void)_addOrRemoveEngravedTextAttributesIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustFrameToVerticallyCenterText:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_drawInteriorWithoutBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)drawsEngraved;
- (id)engravedTextColor;
- (void)setDrawsEngraved:(BOOL)a0;
- (void)setEngravedTextColor:(id)a0;
- (void)setSecondTruncationAlternateString:(id)a0;
- (void)setTextColorForEnabledState;
- (void)setTruncationAlternateString:(id)a0;
- (id)truncationAlternateString;

@end
