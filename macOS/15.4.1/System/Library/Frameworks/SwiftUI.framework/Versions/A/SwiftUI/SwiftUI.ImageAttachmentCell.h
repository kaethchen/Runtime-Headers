@interface SwiftUI.ImageAttachmentCell : NSTextAttachmentCell {
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ contentSize;
    void /* unknown type, empty encoding */ alignmentOrigin;
    void /* unknown type, empty encoding */ baselineOffset;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } cellSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })cellBaselineOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(long long)a3;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)highlight:(BOOL)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (BOOL)wantsToTrackMouse;

@end
