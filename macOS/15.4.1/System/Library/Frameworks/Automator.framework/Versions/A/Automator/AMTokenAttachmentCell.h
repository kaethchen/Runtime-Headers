@interface AMTokenAttachmentCell : NSTokenAttachmentCell

+ (void)initialize;

- (struct CGPoint { double x0; double x1; })cellBaselineOffset;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tokenTintColor;
- (BOOL)_isInTokenField;
- (BOOL)_isInPopUpButton;
- (BOOL)_isPopUpButtonMenuVisible;
- (id)_tokenBackgroundColor;
- (id)_tokenBackgroundColorForAMVariablePopUpButton;

@end
