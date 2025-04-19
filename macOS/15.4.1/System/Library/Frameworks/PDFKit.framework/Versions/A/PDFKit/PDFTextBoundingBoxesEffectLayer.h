@class PDFTextBoundingBoxesEffectLayerPrivate;

@interface PDFTextBoundingBoxesEffectLayer : CALayer {
    PDFTextBoundingBoxesEffectLayerPrivate *_private;
}

- (void).cxx_destruct;
- (id)initWithPage:(id)a0;
- (void)setup;
- (void)setDisplayBox:(long long)a0;
- (id)_addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 withTextType:(int)a2;
- (id)_addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 withTextType:(int)a2 withRotation:(double)a3;
- (void)_iterateTextForTextType:(int)a0 fromLayout:(struct CGPDFLayout { } *)a1;
- (void)updateVisibleLayers;

@end
