@interface FI_TTagTokenAttachmentCell : NSTokenAttachmentCell {
    BOOL _titleShowsSelectedColorCircle;
    BOOL _dottedOutline;
    long long _labelColor;
    unsigned long long _numberOfItemsLackingThisTag;
}

+ (id)transferFromTokenAttachmentCell:(id)a0;

- (id)init;
- (void)setTitle:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTokenWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)selected;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mixedState;
- (id)representedTagInfo;
- (BOOL)tagExists;
- (id)tokenFillColor;
- (id)tokenOutlineColor;
- (void)updateAttributedStringValueForState;

@end
