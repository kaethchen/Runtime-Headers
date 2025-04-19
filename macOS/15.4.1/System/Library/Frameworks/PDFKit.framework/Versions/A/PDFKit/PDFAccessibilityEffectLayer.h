@class PDFPage, NSMutableArray;

@interface PDFAccessibilityEffectLayer : CALayer {
    PDFPage *_page;
    long long _displayBox;
    struct CGPoint { double x; double y; } _displayBoxOffset;
    NSMutableArray *_nodeTypeLayers;
}

- (void).cxx_destruct;
- (id)initWithPage:(id)a0;
- (void)setup;
- (void)setDisplayBox:(long long)a0;
- (void)_addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 ofThickness:(double)a2 withString:(id)a3 textAlignment:(id)a4;
- (void)_iterateCGPDFNode:(struct CGPDFTaggedNode { } *)a0 index:(unsigned long long *)a1;
- (void)updateVisibleLayers;

@end
