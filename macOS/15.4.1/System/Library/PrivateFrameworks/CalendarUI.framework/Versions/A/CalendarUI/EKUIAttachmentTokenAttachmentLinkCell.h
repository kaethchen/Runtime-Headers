@interface EKUIAttachmentTokenAttachmentLinkCell : EKUITokenAttachmentCell

+ (struct CGSize { double x0; double x1; })fileIconSize;

- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)generateAttributedStringValue;
- (id)imageForRepresentedObject;
- (id)stringForRepresentedObject;

@end
