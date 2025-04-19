@interface IKFinderReflectiveIconCell : IKFinderCell {
    id _currentRenderedImage;
}

@property float rotation;

- (void)invalidate;
- (void)draw;
- (void)drawImage:(id)a0;
- (unsigned long long)imageAlignment;
- (double)baseline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionFrame;
- (void)drawReflection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reflectionFrame;
- (double)topline;
- (BOOL)_transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *)a0 forLayer:(id)a1 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (float)baselineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (BOOL)canBeDoubleClicked;
- (BOOL)canDisplayInlinePreview;
- (void)drawSelection;
- (void)drawShadow;
- (void)drawSubtitle;
- (void)drawTitle;
- (double)fogFactor;
- (double)fogFactorDueToMargin;
- (double)fogFactorDueToRotation;
- (void)popTransform;
- (void)pushTransform;
- (float)reflectionFactor;
- (float)reflectionHeight;
- (double)rotatedTextAlphaFactor;
- (float)toplineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;

@end
