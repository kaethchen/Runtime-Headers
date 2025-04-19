@interface IKProKitCell : IKImageBrowserCell

- (unsigned long long)imageAlignment;
- (void)drawBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })IKProKitSelectionFrame;
- (void)drawSelection;
- (void)drawSelectionOnTitle;
- (void)drawTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrame;

@end
