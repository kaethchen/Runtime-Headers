@interface NotesEditor.LinkTokenAttachmentCell : NSTokenAttachmentCell {
    void /* unknown type, empty encoding */ paddingTrim;
    void /* unknown type, empty encoding */ imageToTextMargin;
}

- (id)initWithCoder:(id)a0;
- (void)drawTokenWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initTextCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tokenTintColor;

@end
