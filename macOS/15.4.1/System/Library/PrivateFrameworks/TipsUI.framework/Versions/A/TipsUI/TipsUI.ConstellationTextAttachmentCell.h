@interface TipsUI.ConstellationTextAttachmentCell : NSTextAttachmentCell

- (id)init;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(long long)a3;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;

@end
