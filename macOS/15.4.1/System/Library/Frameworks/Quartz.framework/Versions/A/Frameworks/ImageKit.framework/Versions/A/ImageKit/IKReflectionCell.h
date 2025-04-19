@interface IKReflectionCell : IKImageBrowserCell {
    BOOL _reflectImageFrame;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } reflectionFrame;

- (void)drawImage:(id)a0;
- (unsigned long long)imageAlignment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })IKReflectionSelectionFrame;
- (void)drawSelection;
- (void)drawSelectionOnTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrame;

@end
