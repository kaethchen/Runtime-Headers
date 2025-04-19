@interface NSViewBackingLayer : CALayer {
    unsigned char _isPresentationLayer : 1;
}

+ (id)defaultValueForKey:(id)a0;

- (void)NS_suggestedContentsScaleDidChange;
- (void)layoutSublayers;
- (void)display;
- (void)_appkitViewBackingLayerUniqueMethod;
- (void)_mightNeedViewToClipToBounds;
- (void)_renderForegroundInContext:(struct CGContext { } *)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)setContents:(id)a0;
- (void)setCornerRadius:(double)a0;
- (void)setLayoutManager:(id)a0;
- (void)setMasksToBounds:(BOOL)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)setSublayerTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;

@end
