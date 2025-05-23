@interface MKImageAttachmentCell : NSTextAttachmentCell

@property (nonatomic) double verticalOffset;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })cellSize;
- (id)initWithImage:(id)a0 verticalOffset:(double)a1;

@end
