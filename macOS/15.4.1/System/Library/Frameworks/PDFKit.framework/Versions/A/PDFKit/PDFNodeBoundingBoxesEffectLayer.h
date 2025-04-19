@class PDFPage, NSMutableArray;

@interface PDFNodeBoundingBoxesEffectLayer : CALayer {
    PDFPage *_page;
    long long _displayBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropBox;
    NSMutableArray *_nodeTypeLayers;
    NSMutableArray *_arrowLayers;
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } _prevNodeMidpoints;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPage:(id)a0;
- (void)setup;
- (void)setDisplayBox:(long long)a0;
- (void)_addArrow:(struct CGPDFNode { } *)a0;
- (id)_addRect:(struct CGPDFNode { } *)a0 withColor:(id)a1 inIteration:(int)a2;
- (void)_iterateCGPDFNode:(struct CGPDFNode { } *)a0 fromLayout:(struct CGPDFLayout { } *)a1;
- (void)updateVisibleLayers;

@end
