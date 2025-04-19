@class PDFPage, NSMutableArray;

@interface PDFTextSelectionBoundingBoxesEffectLayer : CALayer {
    PDFPage *_page;
    long long _displayBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropBox;
    NSMutableArray *_addedSublayers;
}

- (void).cxx_destruct;
- (id)initWithPage:(id)a0;
- (void)setup;
- (void)setDisplayBox:(long long)a0;
- (id)_addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 withColor:(id)a2;
- (void)updateVisibleLayers;

@end
