@interface IKCollageCell : IKImageBrowserCell

- (void)drawImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionFrame;
- (void)drawPlaceHolder;
- (void)drawImageOutline;
- (void)drawPhotoBackground;
- (void)drawSelection;
- (void)drawSelectionOnTitle;
- (void)drawShadow;
- (int)photoBorder;
- (void)popTransform;
- (void)pushTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrame;

@end
